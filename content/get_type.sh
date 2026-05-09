# Determine if given command is builtin, a program, or not available

set +x
out=out.csv
if [ -f $out ]; then rm $out; fi

while IFS=";" read -a line
do
	# If line not empty and first char not a '#'
	if [ ${#line} != 0 ] && [ ${line:0:1} != "#" ]
	then
		# Copy 4 fields into output file
		echo -n "${line[0]};${line[1]};${line[2]};${line[3]};" >> $out
		type ${line[0]} 1>/tmp/commandtype 2>/dev/null
		ret=$?
		if [ $ret != 0 ]
		then
			echo "0" >> $out # Not Installed
		else
			grep shell /tmp/commandtype 1>/dev/null
			if [ $? = 0 ]
			then
				echo "1" >> $out # builtin
			else
				echo "2" >> $out # installed, available on local machine
			fi
		fi
	fi
done < linux_commands.csv



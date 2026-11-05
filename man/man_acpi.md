# Documentation de `acpi`, générée via `man`

[Liste alphabétique](../linux_cmds_list_alpha.md) - [Liste par catégorie](../linux_cmds_list_cat.md) - [Liste par type](../linux_cmds_list_type.md)

[Recherche Google](https://www.google.fr/search?q=linux+acpi)

---

## NAME
       acpi - Shows battery status and other ACPI information

## SYNOPSIS
       acpi [options]

## DESCRIPTION
       acpi  Shows information from the /proc or the /sys filesystem, such as battery status or thermal informa‐
       tion.

## OPTIONS
       -b | --battery
                 show battery information

       -a | --ac-adapter
                 show ac adapter information

       -t |  --thermal
                 show thermal information

       -c | --cooling
                 show cooling device information

       -V | --everything
                 show every device, overrides above options

       -s | --show-empty
                 show non-operational devices

       -i | --details
                 show additional details if available:

                 * battery capacity information

                 * temperature trip points

       -f | --fahrenheit
                 use fahrenheit as the temperature unit instead of default celsius

       -k | --kelvin
                 use kelvin as the temperature unit instead of default celsius

       -p | --proc
                 use the old /proc interface, default is the new /sys one

       -d | --directory <dir>
                 path to ACPI info (either /proc/acpi or /sys/class)

       -h | --help
                 display help and exit

       -v | --version
                 output version information and exit

## AUTHOR
       The original version of this manual page was written by Paul Telford <pxt@debian.org> for the Debian sys‐
       tem. Newer additions were done by Michael Meskes <meskes@debian.org>. Permission is granted to copy, dis‐
       tribute and/or modify this document under the terms of the GNU GPL.

                                                                                                         ACPI(1)

#!/bin/bash
: '
░█████╗░  ░█████╗░░█████╗░███╗░░░███╗██████╗░██╗██╗░░░░░███████╗██████╗░
██╔══██╗  ██╔══██╗██╔══██╗████╗░████║██╔══██╗██║██║░░░░░██╔════╝██╔══██╗
██║░░╚═╝  ██║░░╚═╝██║░░██║██╔████╔██║██████╔╝██║██║░░░░░█████╗░░██████╔╝
██║░░██╗  ██║░░██╗██║░░██║██║╚██╔╝██║██╔═══╝░██║██║░░░░░██╔══╝░░██╔══██╗
╚█████╔╝  ╚█████╔╝╚█████╔╝██║░╚═╝░██║██║░░░░░██║███████╗███████╗██║░░██║
░╚════╝░  ░╚════╝░░╚════╝░╚═╝░░░░░╚═╝╚═╝░░░░░╚═╝╚══════╝╚══════╝╚═╝░░╚═╝
(Works on any Linux distro with gcc and chmod)
'

while getopts f:k: flag
do
    case "${flag}" in
        f) file=${OPTARG};;
        k) keep=${OPTARG};;
    esac
done

if [[ -z "$file" ]]; then
    echo "Must provide filename with -f" 1>&2
    exit 1
fi

gcc ${file} -Wall -Wextra -pedantic -o ${file}.tmp
{
chmod +x ${file}.tmp
} &> /dev/null
./${file}.tmp

if [[ "$keep" == "keep" ]]; then
    true
fi

if [[ -z "$keep" ]]; then
    {
    rm ${file}.tmp
    } &> /dev/null
fi

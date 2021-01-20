#!/usr/local/bin/python3.8
"""

░█████╗░  ░█████╗░░█████╗░███╗░░░███╗██████╗░██╗██╗░░░░░███████╗██████╗░
██╔══██╗  ██╔══██╗██╔══██╗████╗░████║██╔══██╗██║██║░░░░░██╔════╝██╔══██╗
██║░░╚═╝  ██║░░╚═╝██║░░██║██╔████╔██║██████╔╝██║██║░░░░░█████╗░░██████╔╝
██║░░██╗  ██║░░██╗██║░░██║██║╚██╔╝██║██╔═══╝░██║██║░░░░░██╔══╝░░██╔══██╗
╚█████╔╝  ╚█████╔╝╚█████╔╝██║░╚═╝░██║██║░░░░░██║███████╗███████╗██║░░██║
░╚════╝░  ░╚════╝░░╚════╝░╚═╝░░░░░╚═╝╚═╝░░░░░╚═╝╚══════╝╚══════╝╚═╝░░╚═╝

(Works on any Linux distro with gcc and chmod)

"""

import os

# Selects folder, eg day1
folder = input("What day of the journey?\n> ")
try:
    # Make a variable with it
    day = (f"day{folder}")
# This was supposed to check if the directory existed, but it's broken
except os.path.isdir(f"{day}") == False:
    exit(1)
else:
    try:
        # Make a variable with the exisiting C script
        file = input("What's the file name?\n> ")
        # Make a variable to define binary output
        output = input("What's the output name?\n> ")
        # Opens C script location to check if it exists
        with open(f"{day}/{file}") as cs:
            cs = cs
    except FileNotFoundError:
        print("This file/directory does not exist.")
        exit(1)
    else:
        # Builds binary from C file
        os.system(f"gcc {day}/{file} -o {day}/{output}")
        # Makes binary executable
        os.system(f"chmod +x {day}/{output}")
        # Runs newly created binary
        print("------------C Script Output------------\n")
        os.system(f"./{day}/{output}")
        print("\n--------------End of Output------------")

#!/bin/sh

./create_image.sh

# The flag -f tells Bochs to use the given configuration file and the flag -q
# tells Bochs to skip the interactive start menu.
bochs -f bochs/bochsrc.txt -q

# After quiting emulator, its log is in "bochslog.txt"

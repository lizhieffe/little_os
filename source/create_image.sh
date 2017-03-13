#!/bin/sh

./build.sh
mkdir -p iso/boot/grub            # create the folder structure
cp stage2_eltorito iso/boot/grub/ # copy the bootloader
cp menu.lst iso/boot/grub/        # copy the GRUB (bootloader) config file
cp output/kernel.elf iso/boot/           # copy the kernel

# Generate the ISO image
genisoimage -R \
  -b boot/grub/stage2_eltorito \
  -no-emul-boot \
  -boot-load-size 4 \
  -A os \
  -input-charset utf8 \
  -quiet \
  -boot-info-table \
  -o output/os.iso \
  iso

#!/bin/sh

./build.sh
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

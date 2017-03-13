# README

## Folder Structure

### bochs
Contains the configuration file for the Bochs emulator.

### iso
Contains the configuration to generate the ISO image which is a media contains
the kernel ELF file. The image can be loaded by a virtual or physical machine.

iso
|-- boot
|-- grub
| |-- menu.lst          // Config file for the GRUB (bootloader).
| |-- stage2_eltorito   // GRUB (bootloader).
|-- kernel.elf          // kernel binary (ELF32).

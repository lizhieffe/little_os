# Segmentation

Segmentation in x86 means accessing the memory through segments. Segments are
portions of the address space, possibly overlapping, specified by a base address
and a limit. To address a byte in segmented memory you use a 48-bit logical
address: 16 bits that specifies the segment and 32-bits that specifies what
offset within that segment you want. The offset is added to the base address of
the segment, and the resulting linear address is checked against the segment’s
limit - see the figure below. If everything works out fine (including
access-rights checks ignored for now) the result is a linear address. When
paging is disabled, then the linear address space is mapped 1:1 onto the
physical address space, and the physical memory can be accessed. (See the
chapter “Paging” for how to enable paging.) To enable segmentation you need to
set up a table that describes each segment - a segment descriptor table. In x86,
there are two types of descriptor tables: the Global Descriptor Table (GDT) and
Local Descriptor Tables (LDT). An LDT is set up and managed by user-space
processes, and all processes have their own LDT. LDTs can be used if a more
complex segmentation model is desired - we won’t use it. The GDT is shared by
everyone - it’s global.

## Accessing Memory
Most of the time when accessing memory there is no need to explicitly specify
the segment to use. The processor has six 16-bit segment registers: cs, ss, ds,
es, gs and fs. The register cs is the code segment register and specifies the
segment to use when fetching instructions. The register ss is used whenever
accessing the stack (through the stack pointer esp), and ds is used for other
data accesses. The OS is free to use the registers es, gs and fs however it
want.

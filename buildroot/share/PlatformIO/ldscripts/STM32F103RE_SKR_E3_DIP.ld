MEMORY
{
<<<<<<< HEAD:buildroot/share/PlatformIO/ldscripts/sovol.ld
  ram (rwx) : ORIGIN = 0x20000000, LENGTH = 64K - 40
  rom (rx)  : ORIGIN = 0x08007000, LENGTH = 512K - 28K
=======
  ram (rwx) : ORIGIN = 0x20000000, LENGTH = 48K - 40
  rom (rx)  : ORIGIN = 0x08007000, LENGTH = 512K - 28K - 4K
>>>>>>> master:buildroot/share/PlatformIO/ldscripts/STM32F103RE_SKR_E3_DIP.ld
}

/* Provide memory region aliases for common.inc */
REGION_ALIAS("REGION_TEXT", rom);
REGION_ALIAS("REGION_DATA", ram);
REGION_ALIAS("REGION_BSS", ram);
REGION_ALIAS("REGION_RODATA", rom);

/* Let common.inc handle the real work. */
INCLUDE common.inc

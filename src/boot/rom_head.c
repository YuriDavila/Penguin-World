#include "genesis.h"

__attribute__((externally_visible))
const ROMHeader rom_header = {
#if (ENABLE_BANK_SWITCH != 0)
    "SEGA SSF        ",
#else
    "SEGA MEGA DRIVE ",
#endif
    "ALICESIM1 - 2021",
    "PENGUIN WORLD - ALPHA DEVOLOPER                 ",
    "PENGUIN WORLD - ALPHA DEVOLOPER                 ",
    "GM 00000000-00",
    0x0000,
    "J6              ",
    0x00000000,
#if (ENABLE_BANK_SWITCH != 0)
    0x003FFFFF,
#else
    0x000FFFFF,
#endif
    0x00FF0000,
    0x00FFFFFF,
    "RA",
    0xF820,
    0x00200000,
    0x0020FFFF,
    "            ",
    "DEMONSTRATION PROGRAM                   ",
    "EUJ             "
};

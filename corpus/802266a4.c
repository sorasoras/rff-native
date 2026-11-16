#include "tc_rt.h"

u32 fn_802266a4(void)
{
    if (rd32(0x80571448u) != 0u) {
        return 0x40u;
    }
    return (u32)rd8(0x80003184u);
}

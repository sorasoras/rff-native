#include "tc_rt.h"

u32 fn_8022e1f4(void)
{
    if (rd32(0x804dfe40u) != 0u) {
        return rd32(0x804dfe44u) | 0x80000000u;
    }
    return (rd32(0xcc003024u) >> 3u) & 0x1fffffffu;
}

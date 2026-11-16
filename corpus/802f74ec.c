#include "tc_rt.h"

u32 fn_802f74ec(void)
{
    TcArgs a = {0};
    if ((u32)(s8)rd8(0x80571d90u) == 0u) {
        wr32(0x805483c0u, 0u);
        wr32(0x805483c4u, 0u);
        wr32(0x805483b8u, 0u);
        wr32(0x805483bcu, 0u);
        wr32(0x805483c0u, 0x805483c0u);
        wr32(0x805483c4u, 0x805483c0u);
        wr8(0x805483c8u, 0u);
        wr32(0x805483ccu, 0u);
        a.r[0] = 0x805483b8u;
        a.r[1] = 0x802f7568u;
        a.r[2] = 0x805483a8u;
        (void)tc_call(0x802551b8u, &a);
        wr8(0x80571d90u, 1u);
    }
    return 0x805483b8u;
}

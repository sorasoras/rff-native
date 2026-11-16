#include "tc_rt.h"

u32 fn_802f85a0(void)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x8022c2b0u, &a);
    r31 = r3;
    if ((u32)(s8)rd8(0x80571d98u) == 0u) {
        wr32(0x805483e8u, 0u);
        wr32(0x805483ecu, 0u);
        wr32(0x805483e4u, 0u);
        wr32(0x805483e8u, 0x805483e8u);
        wr32(0x805483ecu, 0x805483e8u);
        a.r[0] = 0x805483e4u;
        a.r[1] = 0x802f8628u;
        a.r[2] = 0x805483d8u;
        (void)tc_call(0x802551b8u, &a);
        wr8(0x80571d98u, 1u);
    }
    a.r[0] = r31;
    (void)tc_call(0x8022c2d8u, &a);
    return 0x805483e4u;
}

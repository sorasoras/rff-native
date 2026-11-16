#include "tc_rt.h"

void fn_802f2f98(u32 param_1, u32 param_2)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    r3 = tc_call(0x8022c2b0u, &a);
    r31 = r3;
    if (rd32(param_1) == 0u) {
        a.r[0] = r3;
        (void)tc_call(0x8022c2d8u, &a);
    } else {
        if (rd32(param_1 + 0x14u) == 3u) {
            r3 = (u32)rd16(param_2 + 2u);
            r0 = (u32)rd16(param_2 + 4u);
            wr16(0x817fdfe8u, rd16(param_2));
            wr16(0x817fdfeau, (u16)r3);
            wr16(0x817fdfecu, (u16)r0);
        } else {
            wr16(0x817fdfe8u, 0u);
            wr16(0x817fdfeau, 0u);
            wr16(0x817fdfecu, 0u);
        }
        r3 = tc_call(0x8022c2b0u, &a);
        r4 = rd32(param_1);
        r30 = r3;
        if (r4 == 0u) {
            a.r[0] = r3;
            (void)tc_call(0x8022c2d8u, &a);
        } else {
            a.r[0] = r4 + 0xdcu;
            a.r[1] = 0x817fdfe8u;
            a.r[2] = 6u;
            (void)tc_call(0x80004338u, &a);
            wr32(param_1 + 4u, rd32(param_1 + 4u) | 0x40000u);
            a.r[0] = r30;
            (void)tc_call(0x8022c2d8u, &a);
        }
        a.r[0] = r31;
        (void)tc_call(0x8022c2d8u, &a);
    }
    return;
}

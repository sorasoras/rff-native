#include "tc_rt.h"

void fn_80279008(u32 param_r3, u32 param_r4)
{
    u32 r3 = 0, r28 = 0, r29 = 0, r30 = 0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    r30 = (param_r3 << 2u) & 0xfffffffcu;
    r28 = rd32(r30 - 0x7faf46b0u);
    if (param_r4 != 0u) {
        r3 = tc_call(0x8022c2b0u, &a);
        r29 = r3;
        wr8(r28 + 0x160u, 0u);
        wr8(r28 + 0x161u, 0u);
        a.r[0] = rd32(r28 + 0x164u);
        a.r[1] = 0u;
        a.r[2] = rd32(r28 + 0x168u) * 0x30u;
        (void)tc_call(0x8000443cu, &a);
        a.r[0] = r29;
        (void)tc_call(0x8022c2d8u, &a);
        if (param_r4 != 0xffffffffu) {
            r29 = rd32(r30 - 0x7faf46b0u);
            r3 = tc_call(0x8022c2b0u, &a);
            r29 = rd32(r29 + 0x8bcu);
            a.r[0] = r3;
            (void)tc_call(0x8022c2d8u, &a);
            if (r29 != 0xffffffffu) {
                r29 = rd32(r30 - 0x7faf46b0u);
                r3 = tc_call(0x8022c2b0u, &a);
                r29 = (u32)rd8(r29 + 0x8c3u);
                a.r[0] = r3;
                (void)tc_call(0x8022c2d8u, &a);
                a.r[0] = r29;
                r3 = tc_call(0x802893e0u, &a);
                if (r3 != 0u) {
                    a.r[0] = 0x817fdfd8u;
                    a.r[1] = r3;
                    a.r[2] = 6u;
                    (void)tc_call(0x80004338u, &a);
                } else {
                    a.r[0] = 0x817fdfd8u;
                    a.r[1] = 0u;
                    a.r[2] = 6u;
                    (void)tc_call(0x8000443cu, &a);
                }
                a.r[0] = 0x817fdfd8u;
                (void)tc_call(0x80294bd8u, &a);
            }
        }
    }
    return;
}

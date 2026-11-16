#include "tc_rt.h"

void fn_80278f34(s32 param_1, s32 param_2)
{
    u32 r3 = 0, r12 = 0, r29 = 0, r30 = 0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    r30 = ((u32)param_1 << 2u) & 0xfffffffcu;
    wr32(0x817fdff4u, 0u);
    r29 = rd32(r30 - 0x7faf46b0u);
    if ((u32)param_2 != 0xffffffffu) {
        if ((u32)param_2 == 0u) {
            wr32(r29 + 0x8dcu, 1u);
            r12 = rd32(r29 + 0x8a4u);
            if (r12 == 0u) {
                return;
            }
            a.r[0] = (u32)param_1;
            a.r[1] = (u32)param_2;
            a.r[2] = 0u;
            a.f[0] = 0.0;
            (void)tc_call(r12, &a);
        } else {
            r3 = tc_call(0x8022c2b0u, &a);
            r29 = rd32(r29 + 0x8bcu);
            a.r[0] = r3;
            (void)tc_call(0x8022c2d8u, &a);
            if (r29 != 0xffffffffu) {
                r30 = rd32(r30 - 0x7faf46b0u);
                r3 = tc_call(0x8022c2b0u, &a);
                r30 = (u32)rd8(r30 + 0x8c3u);
                a.r[0] = r3;
                (void)tc_call(0x8022c2d8u, &a);
                a.r[0] = r30;
                r3 = tc_call(0x802893e0u, &a);
                if (r3 != 0u) {
                    a.r[0] = 0x817fdfe8u;
                    a.r[1] = r3;
                    a.r[2] = 6u;
                    (void)tc_call(0x80004338u, &a);
                } else {
                    a.r[0] = 0x817fdfe8u;
                    a.r[1] = 0u;
                    a.r[2] = 6u;
                    (void)tc_call(0x8000443cu, &a);
                }
                a.r[0] = 0x817fdfe8u;
                (void)tc_call(0x80294bd8u, &a);
            }
        }
    }
    return;
}

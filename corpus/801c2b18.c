#include "tc_rt.h"

void fn_801c2b18(s32 param_1, u32 param_2, u32 param_3, s32 param_4, u32 param_5)
{
    u32 r0 = 0, r3 = 0, r30 = 0;
    TcArgs a = {0};
    (void)param_2;
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    r3 = rd32((u32)param_1 + 0xd0cu);
    a.r[0] = r3;
    a.r[1] = (u32)param_1;
    a.r[2] = param_3;
    a.r[3] = (u32)param_4;
    a.r[4] = param_5;
    a.f[0] = 0.0;
    r3 = tc_call(rd32(rd32(r3) + 8u), &a);
    if (r3 != 0u) {
        wr32(0x817fdfe8u, rd32((u32)param_1 + 0x150u));
        a.r[0] = 0x817fdfe8u;
        r3 = tc_call(0x80149b0cu, &a);
        r30 = r3;
        if (param_4 <= 100) {
            r30 = 0x64u;
        }
        a.r[0] = (u32)param_1;
        a.r[1] = param_5;
        r3 = tc_call(0x80080350u, &a);
        r30 = r30 + r3;
        r3 = tc_call(0x80040b64u, &a);
        if ((r3 - (((ppc_mulhwu(0x51eb851fu, r3) >> 5u) & 0x7ffffffu) * 0x64u)) <= r30) {
            r0 = rd32((u32)param_1 + 0xefcu) - 1u;
            wr32((u32)param_1 + 0xefcu, r0);
            if ((s32)r0 > 0) {
                return;
            }
            r3 = tc_call(0x80040b64u, &a);
            r0 = rd32((u32)param_1 + 0x1bcu);
            r3 = r3 & 0xfu;
            wr32((u32)param_1 + 0xefcu, r3);
            if (r0 == 0x47u) {
                return;
            }
            a.r[0] = (u32)param_1;
            a.r[1] = 0x24c7u;
            (void)tc_call(0x801c35dcu, &a);
        } else {
            if ((u32)(s8)rd8(0x80571356u) == 0u) {
                wr32(0x80571358u, 0x80371e30u);
                a.r[0] = 0x80571358u;
                r3 = tc_call(0x801c38acu, &a);
                wr32(0x8057135cu, r3);
                wr32(0x80571358u, 0x803730d0u);
                wr8(0x80571356u, 1u);
            }
            a.r[0] = (u32)param_1 + 0xcfcu;
            a.r[1] = rd32(0x8057135cu);
            (void)tc_call(0x801c3608u, &a);
        }
    }
    return;
}

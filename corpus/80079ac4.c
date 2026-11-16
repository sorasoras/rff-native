#include "tc_rt.h"

void fn_80079ac4(u32 param_1, s32 param_2)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r30 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    r5 = rd32(0x805727fcu);
    r3 = rd32(0x80572800u);
    r0 = rd32(0x80572804u);
    wr32(0x817fdff0u, rd32(0x805727f8u));
    wr32(0x817fdff4u, r5);
    wr32(0x817fdfe8u, r3);
    wr32(0x817fdfecu, r0);
    r3 = tc_call(0x800545e4u, &a);
    f1 = tc_lastf();
    r30 = ((u32)param_2 << 2u) & 0xfffffffcu;
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    a.r[0] = r3;
    a.r[1] = rd32(r30 - 0x7e802018u);
    a.r[2] = 1u;
    a.r[3] = 0u;
    a.r[4] = 0xffffffffu;
    r3 = tc_call(0x80050dd4u, &a);
    wr32(param_1, r3);
    r3 = tc_call(0x800545e4u, &a);
    f1 = tc_lastf();
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    a.r[0] = r3;
    a.r[1] = rd32(r30 - 0x7e802010u);
    a.r[2] = 1u;
    a.r[3] = 0u;
    a.r[4] = 0xffffffffu;
    r3 = tc_call(0x80050dd4u, &a);
    r30 = r3;
    a.r[0] = r3;
    a.r[1] = 0u;
    r3 = tc_call(0x8004bf2cu, &a);
    wr32(param_1 + 4u, r3);
    r3 = tc_call(0x800545e4u, &a);
    r6 = r3;
    if (rd32(r3 + 0x10u) != 0u) {
        r5 = rd32(r3 + 0xcu);
        r3 = rd32(r3);
        r6 = r6 + 0x18u;
        a.r[0] = r3;
        a.r[1] = r30;
        a.r[2] = r5;
        a.r[3] = r6;
        (void)tc_call(0x80040e98u, &a);
    } else {
        if (rd32(r3 + 0x20u) != 0u) {
            r3 = r3 + 0x24u;
            a.r[0] = r3;
            a.r[1] = r30;
            (void)tc_call(0x80094ec0u, &a);
        } else {
            r5 = rd32(r3 + 0xcu);
            r3 = rd32(r3);
            r6 = r6 + 0x18u;
            a.r[0] = r3;
            a.r[1] = r30;
            a.r[2] = r5;
            a.r[3] = r6;
            (void)tc_call(0x80040e98u, &a);
        }
    }
    r3 = rd32(param_1);
    wr32(r3, r3 + rd32(r3));
    r3 = rd32(param_1);
    if ((u32)rd16(r3 + 8u) != 0u) {
        r4 = rd32(r3);
        wr16(param_1 + 0xcu, (u16)((u32)rd16(r4 + 0xau) - (u32)rd16(r4 + 6u)));
    }
    return;
}

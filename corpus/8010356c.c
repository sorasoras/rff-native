#include "tc_rt.h"

static void px_rec(u32 sp_, s32 param_1, u32 param_2, f64 *f1_out)
{
    u32 r1 = 0, r3 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r24 = 0, r25 = 0, r30 = 0, r31 = 0, t0 = 0;
    f64 f1 = *f1_out;
    TcArgs a = {0};
    wr32(sp_ - 0x30u, sp_);
    r1 = sp_ - 0x30u;
    wr32(r1 + 0x34u, 0x817ff000u);
    t0 = r1 + 0x10u;
    wr32(t0, 0u);
    wr32(t0 + 4u, 0u);
    wr32(t0 + 8u, 0u);
    wr32(t0 + 0xcu, 0u);
    wr32(t0 + 0x10u, 0u);
    wr32(t0 + 0x14u, 0u);
    wr32(t0 + 0x18u, 0u);
    wr32(t0 + 0x1cu, 0u);
    r24 = param_2;
    a.r[0] = (u32)param_1;
    r3 = tc_call(0x8010322cu, &a);
    f1 = tc_lastf();
    r6 = tc_junkr(6u);
    r7 = tc_junkr(7u);
    r8 = tc_junkr(8u);
    r9 = tc_junkr(9u);
    r10 = tc_junkr(0xau);
    if (((u32)rd8((u32)param_1 + 0xbbu) & 4u) != 0u) {
        r24 = 1u;
    }
    if (r3 != 0u) {
        wr32(r3 + 0x30u, r24);
    }
    r31 = rd32((u32)param_1 + 0x14u);
    r30 = (u32)param_1 + 0x14u;
    while (r31 != r30) {
        if (r31 == 0u) {
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = 0x803604e4u;
            a.r[1] = 0x23du;
            a.r[2] = 0x803604c0u;
            a.r[3] = r6;
            a.r[4] = r7;
            a.r[5] = r8;
            a.r[6] = r9;
            a.r[7] = r10;
            f1 = tc_callf(0x802e41c0u, &a);
            r3 = tc_lastr();
            r6 = tc_junkr(6u);
            r7 = tc_junkr(7u);
            r8 = tc_junkr(8u);
            r9 = tc_junkr(9u);
            r10 = tc_junkr(0xau);
        }
        r25 = r31 - 4u;
        if (r25 == 0u) {
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = 0x80360514u;
            a.r[1] = 0x193u;
            a.r[2] = 0x803604f0u;
            a.r[3] = r6;
            a.r[4] = r7;
            a.r[5] = r8;
            a.r[6] = r9;
            a.r[7] = r10;
            r3 = tc_call(0x802e41c0u, &a);
            f1 = tc_lastf();
        }
        px_rec(r1, r25, r24, &f1);
        r6 = 0u;
        r7 = 0u;
        r8 = 0u;
        r9 = 0u;
        r10 = 0u;
        r31 = rd32(r31);
    }
    *f1_out = f1; return;
}

void fn_8010356c(s32 param_1, u32 param_2)
{
    f64 f1 = 0.0;
    px_rec(0x817fe000u, param_1, param_2, &f1);
}

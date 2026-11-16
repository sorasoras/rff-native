#include "tc_rt.h"

void fn_801f3f3c(s32 param_1, s32 param_2)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = tc_argr(2u), r6 = tc_argr(3u), r7 = tc_argr(4u), r8 = tc_argr(5u), r9 = tc_argr(6u), r10 = tc_argr(7u), r19 = 0, r20 = 0, r26 = 0;
    u32 r29 = 0, r30 = 0, r31 = 0;
    f64 f1 = tc_argf(0u);
    TcArgs a = {0};
    wr32(0x817fdfa0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfccu, 0u);
    wr32(0x817fdfd0u, 0u);
    wr32(0x817fdfd4u, 0u);
    wr32(0x817fdfd8u, 0u);
    wr32(0x817fdfdcu, 0u);
    wr32(0x817fdfe0u, 0u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    r3 = (u32)param_1 + ((u32)param_2 * 0x48u);
    r31 = r3 + 0x3c4u;
    r29 = r31 + 4u;
    r7 = rd32(0x8033c294u);
    r30 = rd32(r3 + 0x3c8u);
    r6 = rd32(0x8033c298u);
    r5 = rd32(0x8033c29cu);
    r4 = rd32(0x8033c2a0u);
    r0 = rd32(0x8033c2a4u);
    wr32(0x817fdfb0u, r7);
    wr32(0x817fdfb4u, r6);
    wr32(0x817fdfb8u, r5);
    wr32(0x817fdfbcu, r4);
    wr32(0x817fdfc0u, r0);
    while (r30 != r29) {
        r0 = r30;
        r20 = r30;
        r30 = rd32(r30);
        wr32(0x817fdfacu, r0);
        a.r[0] = r31;
        a.r[1] = 0x817fdfacu;
        f1 = tc_callf(0x802deab0u, &a);
        r3 = tc_lastr();
        r6 = tc_junkr(6u);
        r7 = tc_junkr(7u);
        r8 = tc_junkr(8u);
        r9 = tc_junkr(9u);
        r10 = tc_junkr(0xau);
        if (r20 == 0u) {
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = 0x80376b00u;
            a.r[1] = 0x23du;
            a.r[2] = 0x80376adcu;
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
        if (r20 == 0u) {
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = 0x80376aa0u;
            a.r[1] = 0x193u;
            a.r[2] = 0x80376a7cu;
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
        r0 = (rd32(r20 + 8u) << 2u) & 0xfffffffcu;
        r0 = rd32(r0 - 0x7e802050u);
        r0 = r0 * 0xcu;
        r19 = r31 + r0;
        r26 = r19 + 4u;
        if (r20 == 0u) {
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = 0x80376ad0u;
            a.r[1] = 0x233u;
            a.r[2] = 0x80376aacu;
            a.r[3] = r6;
            a.r[4] = r7;
            a.r[5] = r8;
            a.r[6] = r9;
            a.r[7] = r10;
            r3 = tc_call(0x802e41c0u, &a);
            f1 = tc_lastf();
        }
        wr32(0x817fdfa8u, r26);
        a.r[0] = r19;
        a.r[1] = 0x817fdfa8u;
        a.r[2] = r20;
        r3 = tc_call(0x802deba4u, &a);
        f1 = tc_lastf();
    }
    return;
}

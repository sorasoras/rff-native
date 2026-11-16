#include "tc_rt.h"

s32 fn_80197cf4(s32 param_1, s32 param_2, s32 param_3, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r8, u32 param_r9)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r6 = tc_argr(3u), r7 = tc_argr(4u), r8 = 0, r9 = 0, r10 = 0, r21 = 0, r22 = 0, r23 = 0;
    u32 r24 = 0, r27 = 0, r28 = 0, r31 = 0;
    f64 f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0;
    TcArgs a = {0};
    f1 = param_f1;
    f2 = param_f2;
    f3 = param_f3;
    f4 = param_f4;
    f5 = param_f5;
    f6 = param_f6;
    f7 = param_f7;
    f8 = param_f8;
    r10 = param_r10;
    r8 = param_r8;
    r9 = param_r9;
    wr32(0x817fdf70u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    r6 = 0x8033addcu;
    r7 = 0x817fdf74u;
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
    r31 = (u32)param_3;
    r4 = 0x8033add8u;
    ctr = 9u;
    do {
        r3 = rd32(r4 + 4u);
        r4 = r4 + 8u;
        r0 = rd32(r4);
        wr32(r7 + 4u, r3);
        wr32(r7 + 8u, r0);
        r7 = r7 + 8u;
        ctr = ctr - 1u;
    } while (ctr != 0u);
    r23 = 0x817fdf78u;
    r22 = ((u32)param_3 << 2u) & 0xfffffffcu;
    r21 = 0u;
    wr32(r7 + 4u, rd32(r4 + 4u));
    do {
        r3 = (u32)param_2 + (rd32(r23) * 0xcu);
        r28 = rd32(r3 + 4u);
        r27 = r3 + 4u;
        while (r28 != r27) {
            r3 = rd32((u32)param_1 + 0x2cu);
            r24 = rd32(r3 + r22);
            if (r28 == 0u) {
                a.f[0] = f1;
                a.f[1] = f2;
                a.f[2] = f3;
                a.f[3] = f4;
                a.f[4] = f5;
                a.f[5] = f6;
                a.f[6] = f7;
                a.f[7] = f8;
                a.r[0] = 0x80370b08u;
                a.r[1] = 0x23du;
                a.r[2] = 0x80370ae4u;
                a.r[3] = r6;
                a.r[4] = r7;
                a.r[5] = r8;
                a.r[6] = r9;
                a.r[7] = r10;
                r3 = tc_call(0x802e41c0u, &a);
                f1 = tc_lastf();
            }
            a.r[0] = r28 - 0xd4u;
            a.r[1] = r24;
            f1 = tc_callf(0x801980ccu, &a);
            r3 = tc_lastr();
            r6 = tc_junkr(6u);
            r7 = tc_junkr(7u);
            r8 = tc_junkr(8u);
            r9 = tc_junkr(9u);
            r10 = tc_junkr(0xau);
            f2 = 0.0;
            f3 = 0.0;
            f4 = 0.0;
            f5 = 0.0;
            f6 = 0.0;
            f7 = 0.0;
            f8 = 0.0;
            r28 = rd32(r28);
            r22 = r22 + 4u;
            r31 = r31 + 1u;
        }
        r21 = r21 + 1u;
        r23 = r23 + 4u;
    } while ((s32)r21 < 19);
    return (s32)r31;
}

#include "tc_rt.h"

void fn_80059270(void)
{
    u32 c0lt = 0, fl_ = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    if (rd32(0x80571114u) == 0u) {
        r3 = tc_call(0x802750ccu, &a);
        r31 = r3 & 0xffu;
        r3 = tc_call(0x8003c20cu, &a);
        if (r3 == 0u) {
            if (r31 == 0u) {
                a.r[0] = 0u;
                a.r[1] = 1u;
                (void)tc_call(0x8003c33cu, &a);
            } else {
                a.r[0] = 1u;
                a.r[1] = 1u;
                (void)tc_call(0x8003c33cu, &a);
            }
            for (;;) {
                r3 = tc_call(0x8003c568u, &a);
                if (r3 == 0u) break;
                r5 = (u32)rd8(0x805723a9u);
                r4 = (u32)rd8(0x805723aau);
                r0 = (u32)rd8(0x805723abu);
                wr8(0x817fdfe8u, rd8(0x805723a8u));
                f1 = (f64)rdf32(0x805723acu);
                wr8(0x817fdfe9u, (u8)r5);
                wr8(0x817fdfeau, (u8)r4);
                wr8(0x817fdfebu, (u8)r0);
                a.f[0] = f1;
                a.r[0] = 0x817fdfe8u;
                (void)tc_call(0x80051e9cu, &a);
                a.r[0] = 1u;
                (void)tc_call(0x8003cdc0u, &a);
                (void)tc_call(0x8003ce24u, &a);
            }
        }
        (void)tc_call(0x8003c20cu, &a);
        wr32(0x80571124u, 0u);
        a.r[0] = 0u;
        (void)tc_call(0x80035b6cu, &a);
        a.r[0] = 0u;
        (void)tc_call(0x80035ba0u, &a);
        a.r[0] = 0x804b9da0u;
        (void)tc_call(0x8010b070u, &a);
        c0lt = (s32)r31 < 2;
        do {
            if (r31 != 2u) {
                if (!c0lt) {
                    if ((s32)r31 >= 5) break;
                } else if ((s32)r31 < 1) {
                    break;
                }
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
                a.r[0] = 0u;
                a.r[1] = r3;
                a.r[6] = 0u;
                a.r[7] = 0u;
                (void)tc_call(0x80140c8cu, &a);
                a.r[0] = 0x12u;
                (void)tc_call(0x80141170u, &a);
                fl_ = 1u;
                break;
            }
        } while (0);
        if (fl_ == 1u) {
            fl_ = 0u;
        } else {
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
            a.r[0] = 0u;
            a.r[1] = r3;
            a.r[6] = 0u;
            a.r[7] = 0u;
            (void)tc_call(0x80140c8cu, &a);
            a.r[0] = 0x12u;
            (void)tc_call(0x80141170u, &a);
        }
        (void)tc_call(0x80059e20u, &a);
        (void)tc_call(0x800cd648u, &a);
        (void)tc_call(0x8014274cu, &a);
        (void)tc_call(0x8013eee8u, &a);
        (void)tc_call(0x80183640u, &a);
        a.r[0] = 0x803d29f8u;
        (void)tc_call(0x80097f68u, &a);
        (void)tc_call(0x800d6d98u, &a);
        (void)tc_call(0x80080b10u, &a);
        wr32(0x80571114u, 1u);
    }
    return;
}

#include "tc_rt.h"

void fn_8029703c(u32 param_1, u32 param_2, u32 param_3, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r8, u32 param_r9)
{
    u32 c0eq = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    r27 = param_2;
    r28 = param_3;
    r30 = 0u;
    if ((param_1 == 0u || param_1 == 1u || param_1 == 2u) && (u32)rd8(0x8053dfa6u) >= 3u) {
        if (param_2 == 0u) {
            r27 = 0x12u;
        }
        if (param_3 == 0u) {
            r28 = 0x800u;
        }
        if ((u32)rd8(0x80540118u) >= 3u) {
            a.f[0] = param_f1;
            a.f[1] = param_f2;
            a.f[2] = param_f3;
            a.f[3] = param_f4;
            a.f[4] = param_f5;
            a.f[5] = param_f6;
            a.f[6] = param_f7;
            a.f[7] = param_f8;
            a.r[0] = 0xd0002u;
            a.r[1] = 0x80393cb0u;
            a.r[2] = param_1;
            a.r[3] = r27;
            a.r[4] = r28;
            a.r[5] = param_r8;
            a.r[6] = param_r9;
            a.r[7] = param_r10;
            (void)tc_call(0x8028cc9cu, &a);
        }
        if (param_1 == 0u || (r27 >= 0x12u && r27 <= 0x1000u && r28 >= 0x12u && r28 <= 0x1000u && r27 <= r28)) {
            if (param_1 != 0u) {
                a.r[0] = 2u;
                r3 = tc_call(0x8028a274u, &a);
                r29 = r3;
                if (r3 == 0u) {
                    return;
                }
                if ((param_1 & 1u) == 0u) {
                    a.r[0] = r3;
                    a.r[1] = 1u;
                    a.r[2] = 0x80577370u;
                    (void)tc_call(0x802a19fcu, &a);
                } else {
                    a.r[0] = 0x817fdfdcu;
                    a.r[1] = 0x80577374u;
                    a.r[2] = 3u;
                    (void)tc_call(0x80004338u, &a);
                    a.r[0] = 0x817fdfdfu;
                    a.r[1] = 0x80577370u;
                    a.r[2] = 3u;
                    (void)tc_call(0x80004338u, &a);
                    a.r[0] = r29;
                    a.r[1] = 2u;
                    a.r[2] = 0x817fdfdcu;
                    (void)tc_call(0x802a19fcu, &a);
                }
                r30 = 1u;
            }
            if (r27 != (u32)rd16(0x8053eff8u) || r28 != (u32)rd16(0x8053effau)) {
                a.r[0] = 2u;
                r3 = tc_call(0x8028a274u, &a);
                if (r3 == 0u) {
                    return;
                }
                wr16(0x8053eff8u, (u16)r27);
                wr16(0x8053effau, (u16)r28);
                a.r[0] = r3;
                a.r[1] = r28;
                a.r[2] = r27;
                (void)tc_call(0x802a16f8u, &a);
            }
            a.r[0] = 2u;
            r3 = tc_call(0x8028a274u, &a);
            if (r3 != 0u) {
                if ((u32)rd16(0x8053eff2u) != 0u) {
                    r30 = (r30 | 2u) & 0xffu;
                }
                wr16(0x8053eff0u, (u16)param_1);
                a.r[0] = r3;
                a.r[1] = r30 & 0xffu;
                (void)tc_call(0x802a1684u, &a);
                r3 = tc_call(0x80296694u, &a);
                r6 = param_1 & 1u;
                r5 = (u32)rd8(r3 + 1u);
                r4 = (((u32)rd8(r3) << 8u) & 0xff00u) + (r5 & 0xe0u);
                c0eq = (r6 ^ ((r4 >> 5u) & 1u)) == 0u;
                r4 = r4 & 0xffffu;
                if (!c0eq) {
                    r3 = (u32)rd8(r3 + 2u);
                    c0eq = r6 == 0u;
                    r5 = r5 & 0x1fu;
                    r6 = r3 & 0xfcu;
                    r0 = r4 & 0xffdfu;
                    if (!c0eq) {
                        r0 = r4 | 0x20u;
                    }
                    r3 = r0 & 0xe0u;
                    r0 = (r0 >> 8u) & 0xffu;
                    wr8(0x817fdfdau, (u8)r6);
                    wr8(0x817fdfd9u, (u8)(r5 + r3));
                    wr8(0x817fdfd8u, (u8)r0);
                    a.r[0] = 0x817fdfd8u;
                    (void)tc_call(0x80296614u, &a);
                }
            }
        }
    }
    return;
}

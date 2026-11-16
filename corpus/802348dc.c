#include "tc_rt.h"

void fn_802348dc(f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r3, u32 param_r4, u32 param_r7, u32 param_r8, u32 param_r9)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r27 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf60u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    a.f[0] = param_f1;
    a.f[1] = param_f2;
    a.f[2] = param_f3;
    a.f[3] = param_f4;
    a.f[4] = param_f5;
    a.f[5] = param_f6;
    a.f[6] = param_f7;
    a.f[7] = param_f8;
    a.r[0] = param_r3;
    a.r[4] = param_r7;
    a.r[5] = param_r8;
    a.r[6] = param_r9;
    a.r[7] = param_r10;
    r3 = tc_call(0x8023456cu, &a);
    f1 = tc_lastf();
    r6 = 0u;
    r7 = 0u;
    r8 = 0u;
    if ((s32)r3 >= 0) {
        r6 = r3 * 0xcu;
        r3 = rd32(0x805715b0u);
        if ((rd32(r3 + r6) & 0xff000000u) == 0u) {
            r3 = r3 + r6;
            r4 = rd32(0x805715f8u);
            r4 = ((r4 & 0x20u) != 0u) ? 0u : (rd32(r3 + 4u) >> (r4 & 0x1fu));
            wr32(param_r4 + 0x30u, r4);
            wr32(param_r4 + 0x34u, rd32(rd32(0x805715b0u) + r6 + 8u));
            wr32(param_r4 + 0x38u, 0u);
            wr32(param_r4 + 0xcu, 0u);
        }
    } else {
        r29 = rd32(0x80571598u);
        if (r29 != 0u) {
            r8 = rd32(0x805715b0u);
            r0 = r29 * 0xcu;
            r7 = rd32(0x805715acu);
            r6 = r8 + 4u;
            r3 = rd32(r6 + r0);
            r0 = rd32(r8 + r0);
            r0 = r0 & 0xffffffu;
            r30 = r7 + r0;
            if (r3 != 0u) {
                r0 = r3 * 0xcu;
                r3 = rd32(r6 + r0);
                r0 = rd32(r8 + r0);
                r0 = r0 & 0xffffffu;
                r31 = r7 + r0;
                if (r3 != 0u) {
                    r3 = r3 * 0xcu;
                    r0 = rd32(r8 + r3);
                    r3 = rd32(r6 + r3);
                    r0 = r0 & 0xffffffu;
                    r27 = r7 + r0;
                    a.r[0] = r3;
                    a.r[1] = 0x817fdf68u;
                    a.r[2] = 0x80u;
                    r3 = tc_call(0x80234bacu, &a);
                    f1 = tc_lastf();
                    r6 = 0u;
                    r7 = 0u;
                    r8 = 0u;
                    r4 = r3;
                    if (r3 != 0x80u) {
                        r4 = r3 + 1u;
                        wr8(r3 - 0x7e802098u, 0x2fu);
                        r6 = 0x80u - r4;
                        r3 = r6;
                        r5 = r4 - 0x7e802098u;
                        while (r3 != 0u && (u32)(s8)rd8(r27) != 0u) {
                            r0 = (u32)rd8(r27);
                            r3 = r3 - 1u;
                            r27 = r27 + 1u;
                            wr8(r5, (u8)r0);
                            r5 = r5 + 1u;
                        }
                        r4 = r4 + (r6 - r3);
                    }
                } else {
                    r4 = 0u;
                }
                if (r4 != 0x80u) {
                    r5 = r4 + 1u;
                    wr8(r4 - 0x7e802098u, 0x2fu);
                    r6 = 0x80u - r5;
                    r4 = r6;
                    r3 = r5 - 0x7e802098u;
                    while (r4 != 0u && (u32)(s8)rd8(r31) != 0u) {
                        r0 = (u32)rd8(r31);
                        r4 = r4 - 1u;
                        r31 = r31 + 1u;
                        wr8(r3, (u8)r0);
                        r3 = r3 + 1u;
                    }
                    r4 = r5 + (r6 - r4);
                }
            } else {
                r4 = 0u;
            }
            if (r4 != 0x80u) {
                r5 = r4 + 1u;
                wr8(r4 - 0x7e802098u, 0x2fu);
                r6 = 0x80u - r5;
                r4 = r6;
                r3 = r5 - 0x7e802098u;
                while (r4 != 0u && (u32)(s8)rd8(r30) != 0u) {
                    r0 = (u32)rd8(r30);
                    r4 = r4 - 1u;
                    r30 = r30 + 1u;
                    wr8(r3, (u8)r0);
                    r3 = r3 + 1u;
                }
                r4 = r5 + (r6 - r4);
            }
        } else {
            r4 = 0u;
        }
        if (r4 != 0x80u) {
            if ((rd32(rd32(0x805715b0u) + (r29 * 0xcu)) & 0xff000000u) == 0u) {
                wr8(r4 - 0x7e802098u, 0u);
            } else if (r4 != 0x7fu) {
                wr8(r4 - 0x7e802098u, 0x2fu);
                r4 = r4 + 1u;
                wr8(r4 - 0x7e802098u, 0u);
            } else {
                wr8(r4 - 0x7e802098u, 0u);
            }
        } else {
            wr8(0x817fdfe7u, 0u);
        }
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = 0x80386f38u;
        a.r[1] = param_r3;
        a.r[2] = 0x817fdf68u;
        a.r[3] = r6;
        a.r[4] = r7;
        a.r[5] = r8;
        a.r[6] = 0u;
        a.r[7] = 0u;
        (void)tc_call(0x80228554u, &a);
    }
    return;
}

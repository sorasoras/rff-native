#include "tc_rt.h"

void fn_80276894(u32 param_1, u32 param_2, u32 param_3, u32 param_4, s32 param_5, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r22 = 0, r23 = 0, r24 = 0, r26 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(0x817fdfb0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
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
    r26 = param_3;
    wr32(0x817fdfc8u, 0xffffffffu);
    r24 = param_1;
    wr32(0x817fdfc4u, 0xffffffffu);
    wr32(0x817fdfc0u, 1u);
    wr32(0x817fdfbcu, 1u);
    r31 = 0u;
    r30 = 0u;
    a.f[0] = param_f1;
    a.f[1] = param_f2;
    a.f[2] = param_f3;
    a.f[3] = param_f4;
    a.f[4] = param_f5;
    a.f[5] = param_f6;
    a.f[6] = param_f7;
    a.f[7] = param_f8;
    a.r[0] = (((0u - param_1) | param_1) >> 0x1fu) & 1u;
    a.r[1] = param_2;
    a.r[2] = 0x817fdfc4u;
    a.r[3] = 0x817fdfc0u;
    a.r[4] = (((0u - param_3) | param_3) >> 0x1fu) & 1u;
    a.r[5] = param_4;
    a.r[6] = 0x817fdfc8u;
    a.r[7] = 0x817fdfbcu;
    r3 = tc_call(0x802762ecu, &a);
    if (r3 == 0u && rd32(0x80570da8u) != 0u) {
        if ((s32)rd32(0x817fdfc8u) > 0 && rd32(0x817fdfbcu) != 0u) {
            r0 = (u32)rd16(param_3);
            if (r0 != 0xfeffu) {
                if (r0 == 0xfffeu) {
                    if (param_2 != 0u) {
                        wr32(param_2, 0u);
                    }
                    wr32(param_4, 0u);
                    return;
                }
            } else {
                r31 = 1u;
                r26 = param_3 + 2u;
            }
        }
        for (;;) {
            r22 = (u32)rd16(r26);
            if (r22 == 0u) break;
            r3 = rd32(0x817fdfc8u);
            if ((s32)r31 >= (s32)r3 && rd32(0x817fdfbcu) != 0u) break;
            if ((s32)r30 >= (s32)rd32(0x817fdfc4u) && rd32(0x817fdfc0u) != 0u) break;
            if (param_5 > 0) {
                r4 = 0u;
                if ((s32)(r3 - r31) > 1 || rd32(0x817fdfbcu) == 0u) {
                    r4 = 1u;
                }
                if (r4 == 0u) {
                    r4 = 0u;
                } else {
                    r4 = (u32)rd16(r26 + 2u);
                }
                a.r[0] = r22;
                a.r[1] = r4;
                r3 = tc_call(0x802763e4u, &a);
                r23 = r3;
                if ((s32)r3 > 0) {
                    a.r[0] = r24;
                    a.r[1] = 1u;
                    a.r[2] = (u32)param_5;
                    a.r[3] = rd32(0x817fdfc0u);
                    r3 = tc_call(0x80276418u, &a);
                    if ((s32)(rd32(0x817fdfc4u) - r30) >= (s32)r3 || rd32(0x817fdfc0u) == 0u) {
                        r26 = r26 + ((r23 << 1u) & 0xfffffffeu);
                        r31 = r31 + r23;
                        r30 = r30 + r3;
                        if (rd32(0x817fdfc0u) == 0u) continue;
                        r24 = r24 + r3;
                        continue;
                    }
                    break;
                }
            }
            a.r[0] = 0x817fdfb8u;
            a.r[1] = r22;
            (void)tc_call(0x80276b3cu, &a);
            r3 = (u32)rd8(0x817fdfb8u);
            r4 = (u32)rd8(0x817fdfb9u);
            if (r3 == 0u) break;
            if (r4 != 0u) {
                if (rd32(0x817fdfc0u) == 0u) {
                    r30 = r30 + 1u;
                } else {
                    if ((s32)(rd32(0x817fdfc4u) - r30) < 2) break;
                    wr8(r24, (u8)r3);
                    r30 = r30 + 1u;
                    wr8(r24 + 1u, (u8)r4);
                    r24 = r24 + 2u;
                }
            } else if (rd32(0x817fdfc0u) != 0u) {
                wr8(r24, (u8)r3);
                r24 = r24 + 1u;
            }
            r30 = r30 + 1u;
            r26 = r26 + 2u;
            r31 = r31 + 1u;
        }
        if (param_4 != 0u) {
            wr32(param_4, r31);
        }
        if (param_2 != 0u) {
            wr32(param_2, r30);
        }
    }
    return;
}

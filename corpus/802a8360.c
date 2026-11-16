#include "tc_rt.h"

void fn_802a8360(u32 param_r3)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r7 = 0, r26 = 0, r27 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r0 = (u32)rd16(param_r3 + 4u);
    wr16(param_r3 + 6u, 0u);
    r7 = param_r3 + r0;
    r4 = (u32)rd8(r7 + 8u) + (((u32)rd8(r7 + 9u) << 8u) & 0xffffff00u);
    r0 = (u32)rd8(r7 + 0xau) + (((u32)rd8(r7 + 0xbu) << 8u) & 0xffffff00u);
    wr32(0x805411dcu, 0u);
    r31 = r0 & 0xffffu;
    r27 = (r4 >> 0xcu) & 3u;
    a.r[0] = r4 & 0xfffu;
    r3 = tc_call(0x802a9a34u, &a);
    f1 = tc_lastf();
    r26 = r3;
    if (r3 != 0u) {
        if (r27 != 2u) {
            r30 = rd32(r3 + 0x50u);
            if (r30 == 0u) {
                r30 = 0u;
            } else {
                r27 = r30 + (u32)rd16(r30 + 4u);
                r29 = ((u32)rd8(r27 + 0xau) + (((u32)rd8(r27 + 0xbu) << 8u) & 0xffffff00u)) & 0xffffu;
                if ((s32)(r29 + r31) > 1695) {
                    if ((u32)rd8(0x80540a20u) >= 2u) {
                        a.f[0] = f1;
                        a.f[1] = 0.0;
                        a.f[2] = 0.0;
                        a.f[3] = 0.0;
                        a.f[4] = 0.0;
                        a.f[5] = 0.0;
                        a.f[6] = 0.0;
                        a.f[7] = 0.0;
                        a.r[0] = 0x80001u;
                        a.r[1] = 0x80396790u;
                        a.r[2] = 0u;
                        a.r[3] = 0u;
                        a.r[4] = 0u;
                        a.r[5] = 0u;
                        a.r[6] = 0u;
                        a.r[7] = 0u;
                        (void)tc_call(0x8028cc54u, &a);
                    }
                    a.r[0] = rd32(r26 + 0x50u);
                    (void)tc_call(0x8028a35cu, &a);
                    r30 = 0u;
                    wr32(r26 + 0x50u, 0u);
                } else {
                    wr32(0x805411dcu, r3);
                    r3 = (u32)rd16(param_r3 + 2u);
                    if (r3 > 4u) {
                        a.r[0] = r30 + (u32)rd16(r30 + 4u) + (u32)rd16(r30 + 2u) + 8u;
                        a.r[1] = param_r3 + (u32)rd16(param_r3 + 4u) + 0xcu;
                        a.r[2] = r3 - 4u;
                        (void)tc_call(0x80004338u, &a);
                        wr16(r30 + 2u, (u16)((u32)rd16(param_r3 + 2u) + (u32)rd16(r30 + 2u) - 4u));
                    }
                    a.r[0] = param_r3;
                    (void)tc_call(0x8028a35cu, &a);
                    r29 = r29 + r31;
                    wr8(r27 + 0xau, (u8)r29);
                    wr8(r27 + 0xbu, (u8)((r29 >> 8u) & 0xffu));
                }
            }
        } else {
            if (rd32(r3 + 0x50u) != 0u) {
                if ((u32)rd8(0x80540a20u) >= 2u) {
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    a.f[3] = 0.0;
                    a.f[4] = 0.0;
                    a.f[5] = 0.0;
                    a.f[6] = 0.0;
                    a.f[7] = 0.0;
                    a.r[0] = 0x80001u;
                    a.r[1] = 0x80396770u;
                    a.r[2] = 0u;
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    a.r[6] = 0u;
                    a.r[7] = 0u;
                    (void)tc_call(0x8028cc54u, &a);
                }
                a.r[0] = rd32(r26 + 0x50u);
                (void)tc_call(0x8028a35cu, &a);
            }
            wr32(r26 + 0x50u, param_r3);
            r30 = param_r3;
            wr32(0x805411dcu, r26);
        }
        if (r30 == 0u) {
            a.r[0] = param_r3;
            (void)tc_call(0x8028a35cu, &a);
        }
    }
    return;
}

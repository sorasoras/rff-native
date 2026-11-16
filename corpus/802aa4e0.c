#include "tc_rt.h"

void fn_802aa4e0(u32 param_1, u32 param_2, s32 param_3, s32 param_4)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r6 = 0, r8 = 0, r9 = 0, r24 = 0, r26 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r26 = param_2;
    a.r[0] = 2u;
    r3 = tc_call(0x8028a274u, &a);
    f1 = tc_lastf();
    r31 = r3;
    if (r3 != 0u) {
        r30 = r3 + 0xau;
        wr16(r3 + 4u, 0u);
        r8 = (u32)param_4 + 0xau;
        r9 = (u32)param_4 + 6u;
        r29 = r30;
        r28 = param_2 + (u32)param_3;
        wr8(r3 + 8u, (u8)((u32)rd16(rd32(param_1 + 0x10u) + 0x28u) | 0x2000u));
        wr8(r3 + 9u, (u8)((s32)((u32)rd16(rd32(param_1 + 0x10u) + 0x28u) | 0x2000u) >> 8));
        r6 = (u32)((s32)r8 >> 8);
        wr8(r30 + 2u, (u8)r8);
        wr8(r30 + 3u, (u8)r6);
        wr8(r30 + 4u, 1u);
        wr8(r30 + 5u, 0u);
        wr8(r30 + 6u, 5u);
        wr8(r30 + 7u, rd8(param_1 + 0x36u));
        wr8(r30 + 8u, (u8)r9);
        wr8(r30 + 9u, (u8)((s32)r9 >> 8));
        wr8(r30 + 0xau, (u8)rd16(param_1 + 0x16u));
        wr8(r30 + 0xbu, (u8)((s32)rd16(param_1 + 0x16u) >> 8));
        wr8(r30 + 0xcu, 0u);
        wr8(r30 + 0xdu, 0u);
        wr8(r30 + 0xeu, 3u);
        wr8(r30 + 0xfu, 0u);
        r30 = r30 + 0x10u;
        while (r26 < r28) {
            r4 = (u32)rd8(r26);
            r3 = (u32)rd8(r26 + 1u);
            r0 = r4 & 0x7fu;
            if ((s32)r0 < 4 && (s32)r0 >= 1) {
                r3 = r3 + r26;
                r26 = r3 + 2u;
                continue;
            }
            r24 = r3 + 2u;
            if ((s32)r24 > param_3) {
                r26 = r28;
            } else {
                if ((r4 & 0x80u) == 0u) {
                    a.r[0] = r30;
                    a.r[1] = r26;
                    a.r[2] = r24;
                    f1 = tc_callf(0x80004338u, &a);
                    r6 = 0u;
                    r8 = 0u;
                    r9 = 0u;
                    r30 = r30 + r24;
                }
                r26 = r26 + r24;
            }
        }
        r3 = r30 - r29 - 2u;
        wr8(r29, (u8)r3);
        r0 = (r3 >> 8u) & 0xffu;
        r3 = r3 & 0xffffu;
        wr8(r29 + 1u, (u8)r0);
        wr16(r31 + 2u, (u16)(r3 + 4u));
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = rd32(param_1 + 0x10u);
        a.r[1] = param_1;
        a.r[2] = r31;
        a.r[3] = r6;
        a.r[4] = 0u;
        a.r[5] = r8;
        a.r[6] = r9;
        a.r[7] = 0u;
        (void)tc_call(0x802a7e04u, &a);
    } else if ((u32)rd8(0x80540a20u) >= 2u) {
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = 0x80001u;
        a.r[1] = 0x80396b24u;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        (void)tc_call(0x8028cc54u, &a);
    }
    return;
}

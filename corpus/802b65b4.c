#include "tc_rt.h"

void fn_802b65b4(u32 param_1, u32 param_2, u32 param_3, u32 param_4, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r8, u32 param_r9)
{
    u32 r0 = 0, r3 = 0, r5 = 0, r25 = 0, r26 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    if ((u32)rd8(0x80545c50u) >= 2u) {
        a.f[0] = param_f1;
        a.f[1] = param_f2;
        a.f[2] = param_f3;
        a.f[3] = param_f4;
        a.f[4] = param_f5;
        a.f[5] = param_f6;
        a.f[6] = param_f7;
        a.f[7] = param_f8;
        a.r[0] = 0xa0001u;
        a.r[1] = 0x80397efcu;
        a.r[2] = param_3;
        a.r[3] = (u32)rd16(param_1 + 0x22u);
        a.r[4] = 0x80541620u;
        a.r[5] = param_r8;
        a.r[6] = param_r9;
        a.r[7] = param_r10;
        (void)tc_call(0x8028cc84u, &a);
    }
    a.r[0] = 2u;
    r3 = tc_call(0x8028a274u, &a);
    f1 = tc_lastf();
    r26 = r3;
    if (r3 == 0u) {
        if ((u32)rd8(0x80545c50u) < 1u) {
            return;
        }
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = 0xa0000u;
        a.r[1] = 0x80397f34u;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        (void)tc_call(0x8028cc54u, &a);
    } else {
        r28 = r3 + 0x11u;
        wr16(r3 + 4u, 9u);
        r29 = r28 + 3u;
        wr8(r28, 1u);
        r27 = r29;
        wr8(r28 + 1u, (u8)((s32)param_2 >> 8));
        r29 = r29 + 4u;
        wr8(r28 + 2u, (u8)param_2);
        wr8(r28 + 5u, (u8)((param_3 >> 8u) & 0xffu));
        wr8(r28 + 6u, (u8)param_3);
        if (param_4 != 0u) {
            r30 = param_4;
            r25 = 0u;
            for (;;) {
                a.r[0] = param_4;
                r3 = tc_call(0x802550d4u, &a);
                f1 = tc_lastf();
                if ((s32)r25 >= (s32)r3) break;
                r0 = (u32)rd8(r30);
                r25 = r25 + 1u;
                r30 = r30 + 1u;
                wr8(r29, (u8)r0);
                r29 = r29 + 1u;
            }
        }
        r5 = r29 - r27 - 2u;
        wr8(r27, (u8)((r5 >> 8u) & 0xffu));
        wr8(r27 + 1u, (u8)r5);
        wr16(r26 + 2u, (u16)(r29 - r28));
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = (u32)rd16(param_1 + 0x22u);
        a.r[1] = r26;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        (void)tc_call(0x802a5e34u, &a);
    }
    return;
}

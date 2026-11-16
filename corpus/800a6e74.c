#include "tc_rt.h"

u32 fn_800a6e74(u32 param_1, u32 param_2, u32 param_3, s32 param_4, u32 param_5, s32 param_6, s32 param_7, u32 param_8)
{
    u32 r3 = 0, r25 = 0, r26 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r30 = 0u;
    r29 = 0x80000000u;
    r28 = 0u;
    r3 = tc_call(0x80097da4u, &a);
    r3 = rd32(r3);
    a.r[0] = r3;
    a.r[1] = param_1;
    a.r[2] = param_2;
    r3 = tc_call(0x800a2e3cu, &a);
    f1 = tc_lastf();
    r27 = r3;
    r31 = ((u32)param_4 << 2u) & 0xfffffffcu;
    r26 = r3;
    r25 = 0u;
    while (r25 < rd32(r27 + 0x3300u)) {
        if (param_3 != 0u) {
            a.r[0] = param_5;
            a.r[1] = r26;
            a.r[2] = rd32(r26 + 0x80u);
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            a.f[0] = f1;
            r3 = tc_call(param_3, &a);
            f1 = tc_lastf();
            if ((u32)param_7 != 0u) {
                if ((s32)r29 < (s32)r3) {
                    r28 = rd32(r26 + 0x84u);
                    r29 = r3;
                    r30 = 1u;
                }
            } else if (r3 != 0u) {
                a.r[0] = param_1;
                a.r[1] = param_2;
                a.r[2] = rd32(r26 + 0x84u);
                a.r[3] = param_8;
                f1 = tc_callf(0x800a6e60u, &a);
                r30 = 1u;
                if ((u32)param_6 == 0u) break;
            }
        } else {
            a.r[0] = param_5;
            a.r[1] = r26;
            a.r[2] = r31;
            r3 = tc_call(0x802592d8u, &a);
            f1 = tc_lastf();
            if (r3 == 0u) {
                a.r[0] = param_1;
                a.r[1] = param_2;
                a.r[2] = rd32(r26 + 0x84u);
                a.r[3] = param_8;
                f1 = tc_callf(0x800a6e60u, &a);
                r30 = 1u;
                if ((u32)param_6 == 0u) break;
            }
        }
        r26 = r26 + 0x88u;
        r25 = r25 + 1u;
    }
    if ((u32)param_7 != 0u && r28 != 0u) {
        a.r[0] = param_1;
        a.r[1] = param_2;
        a.r[2] = r28;
        a.r[3] = param_8;
        (void)tc_call(0x800a6e60u, &a);
    }
    return r30;
}

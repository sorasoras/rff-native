#include "tc_rt.h"

void fn_802e8624(u32 param_r3, u32 param_r4)
{
    u32 c1eq = 0, r3 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    if (param_r3 != 0u) {
        r31 = rd32(param_r3 + 0x100u);
        r30 = (u32)rd8(param_r3 + 0x104u);
        wr32(param_r3, 0x8039ce8cu);
        if (r31 != 0u) {
            r27 = r31;
            r28 = 0u;
            while (r28 < r30) {
                if (r27 != 0u) {
                    r29 = rd32(r27 + 4u);
                    if (r29 != 0u) {
                        a.r[0] = r29;
                        a.r[1] = 0xffffffffu;
                        a.r[2] = 0u;
                        a.r[3] = 0u;
                        a.f[0] = f1;
                        (void)tc_call(rd32(rd32(r29) + 8u), &a);
                        a.r[0] = rd32(0x80571d40u);
                        f1 = tc_callf(0x8026d4a0u, &a);
                    }
                }
                r27 = r27 + 8u;
                r28 = r28 + 1u;
            }
            a.r[0] = rd32(0x80571d40u);
            f1 = tc_callf(0x8026d4a0u, &a);
        }
        r27 = rd32(param_r3 + 0x28u);
        c1eq = r27 == 0u;
        if (!c1eq && (u32)rd8(r27 + 0x59u) == 0u) {
            if (!c1eq) {
                a.r[0] = r27;
                a.r[1] = 0xffffffffu;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.f[0] = f1;
                (void)tc_call(rd32(rd32(r27) + 8u), &a);
                a.r[0] = rd32(0x80571d40u);
                (void)tc_call(0x8026d4a0u, &a);
            }
            wr32(param_r3 + 0x28u, 0u);
        }
        a.r[0] = param_r3 + 0xf8u;
        (void)tc_call(0x802ef3d4u, &a);
        r3 = param_r3 + 0xe8u;
        if (r3 != 0u) {
            a.r[0] = r3;
            a.r[1] = 0x800fe97cu;
            a.r[2] = 4u;
            a.r[3] = 4u;
            (void)tc_call(0x8025571cu, &a);
        }
        a.r[0] = param_r3;
        a.r[1] = 0u;
        (void)tc_call(0x802e43e0u, &a);
        if ((s32)param_r4 > 0) {
            (void)tc_call(0x80040cd4u, &a);
        }
    }
    return;
}

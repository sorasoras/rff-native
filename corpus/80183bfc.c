#include "tc_rt.h"

s32 fn_80183bfc(s32 param_1, s32 param_2)
{
    u32 c0eq = 0, r3 = 0, r28 = 0, r29 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    if ((u32)param_1 != 0u) {
        wr32((u32)param_1 + 0x28u, 0x8036f408u);
        a.r[0] = (u32)param_1;
        f1 = tc_callf(0x801972a4u, &a);
        r3 = rd32((u32)param_1 + 0x34u);
        if (r3 != 0u) {
            wr32(r3 + 0x54u, 0u);
            a.r[0] = r3;
            f1 = tc_callf(0x80161ac4u, &a);
            r3 = rd32((u32)param_1 + 0x34u);
            if (r3 != 0u) {
                a.r[0] = r3;
                a.r[1] = 1u;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.f[0] = f1;
                f1 = tc_callf(rd32(rd32(r3 + 0xccu) + 8u), &a);
            }
            wr32((u32)param_1 + 0x34u, 0u);
        }
        r3 = rd32((u32)param_1 + 0x38u);
        if (r3 != 0u) {
            wr32(r3 + 0x54u, 0u);
            a.r[0] = r3;
            f1 = tc_callf(0x80161ac4u, &a);
            r3 = rd32((u32)param_1 + 0x38u);
            if (r3 != 0u) {
                a.r[0] = r3;
                a.r[1] = 1u;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.f[0] = f1;
                f1 = tc_callf(rd32(rd32(r3 + 0xccu) + 8u), &a);
            }
            wr32((u32)param_1 + 0x38u, 0u);
        }
        r3 = rd32((u32)param_1 + 0x3cu);
        if (r3 != 0u) {
            wr32(r3 + 0x54u, 0u);
            a.r[0] = r3;
            f1 = tc_callf(0x80161ac4u, &a);
            r3 = rd32((u32)param_1 + 0x3cu);
            if (r3 != 0u) {
                a.r[0] = r3;
                a.r[1] = 1u;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.f[0] = f1;
                f1 = tc_callf(rd32(rd32(r3 + 0xccu) + 8u), &a);
            }
            wr32((u32)param_1 + 0x3cu, 0u);
        }
        r3 = rd32((u32)param_1 + 0x40u);
        if (r3 != 0u) {
            wr32(r3 + 0x54u, 0u);
            a.r[0] = r3;
            f1 = tc_callf(0x80161ac4u, &a);
            r3 = rd32((u32)param_1 + 0x40u);
            if (r3 != 0u) {
                a.r[0] = r3;
                a.r[1] = 1u;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.f[0] = f1;
                f1 = tc_callf(rd32(rd32(r3 + 0xccu) + 8u), &a);
            }
            wr32((u32)param_1 + 0x40u, 0u);
        }
        r3 = rd32((u32)param_1 + 0x44u);
        if (r3 != 0u) {
            wr32(r3 + 0x54u, 0u);
            a.r[0] = r3;
            f1 = tc_callf(0x80161ac4u, &a);
            r3 = rd32((u32)param_1 + 0x44u);
            if (r3 != 0u) {
                a.r[0] = r3;
                a.r[1] = 1u;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.f[0] = f1;
                f1 = tc_callf(rd32(rd32(r3 + 0xccu) + 8u), &a);
            }
            wr32((u32)param_1 + 0x44u, 0u);
        }
        r3 = rd32((u32)param_1 + 0x48u);
        if (r3 != 0u) {
            wr32(r3 + 0x54u, 0u);
            a.r[0] = r3;
            f1 = tc_callf(0x80161ac4u, &a);
            r3 = rd32((u32)param_1 + 0x48u);
            if (r3 != 0u) {
                a.r[0] = r3;
                a.r[1] = 1u;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.f[0] = f1;
                f1 = tc_callf(rd32(rd32(r3 + 0xccu) + 8u), &a);
            }
            wr32((u32)param_1 + 0x48u, 0u);
        }
        r29 = (u32)param_1 + 0x58u;
        r28 = 0u;
        do {
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = r29;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            f1 = tc_callf(0x80164328u, &a);
            r28 = r28 + 1u;
            r29 = r29 + 0x70u;
        } while ((s32)r28 < 6);
        r3 = (u32)param_1 + 0x2ecu;
        if (r3 != 0u) {
            wr32((u32)param_1 + 0x450u, 0x80360450u);
            a.r[0] = r3;
            (void)tc_call(0x8007ae84u, &a);
            r3 = (u32)param_1 + 0x2ecu;
            c0eq = r3 == 0u;
            if (!c0eq && !c0eq) {
                a.r[0] = r3;
                a.r[1] = 0u;
                (void)tc_call(0x8007ae30u, &a);
            }
        }
        a.r[0] = (u32)param_1 + 0x4cu;
        a.r[1] = 0x80183b94u;
        a.r[2] = 0x70u;
        a.r[3] = 6u;
        (void)tc_call(0x8025571cu, &a);
        a.r[0] = (u32)param_1;
        a.r[1] = 0u;
        (void)tc_call(0x8019720cu, &a);
        if (param_2 > 0) {
            a.r[0] = (u32)param_1;
            (void)tc_call(0x80189294u, &a);
        }
    }
    return param_1;
}

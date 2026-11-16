#include "tc_rt.h"

s32 fn_801d3cb0(s32 param_1, s32 param_2)
{
    u32 c0eq = 0, r3 = 0, r5 = 0, r6 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    if ((u32)param_1 != 0u) {
        c0eq = ((u32)param_1 + 0x1304u) == 0u;
        if (!c0eq && !c0eq) {
            a.r[0] = (u32)param_1 + 0x1318u;
            a.r[1] = 0xffffffffu;
            (void)tc_call(0x80157e18u, &a);
        }
        c0eq = ((u32)param_1 + 0x128cu) == 0u;
        if (!c0eq && !c0eq) {
            a.r[0] = (u32)param_1 + 0x12a0u;
            a.r[1] = 0xffffffffu;
            (void)tc_call(0x80157e18u, &a);
        }
        c0eq = ((u32)param_1 + 0x1214u) == 0u;
        if (!c0eq && !c0eq) {
            a.r[0] = (u32)param_1 + 0x1228u;
            a.r[1] = 0xffffffffu;
            (void)tc_call(0x80157e18u, &a);
        }
        a.r[0] = (u32)param_1 + 0xf7cu;
        a.r[1] = 0xffffffffu;
        f1 = tc_callf(0x801d6358u, &a);
        c0eq = ((u32)param_1 + 0xf04u) == 0u;
        if (!c0eq && !c0eq) {
            a.r[0] = (u32)param_1 + 0xf18u;
            a.r[1] = 0xffffffffu;
            f1 = tc_callf(0x80157e18u, &a);
        }
        c0eq = ((u32)param_1 + 0xe8cu) == 0u;
        if (!c0eq && !c0eq) {
            a.r[0] = (u32)param_1 + 0xea0u;
            a.r[1] = 0xffffffffu;
            f1 = tc_callf(0x80157e18u, &a);
        }
        c0eq = ((u32)param_1 + 0xe14u) == 0u;
        if (!c0eq && !c0eq) {
            a.r[0] = (u32)param_1 + 0xe28u;
            a.r[1] = 0xffffffffu;
            f1 = tc_callf(0x80157e18u, &a);
        }
        c0eq = ((u32)param_1 + 0xd94u) == 0u;
        if (!c0eq && !c0eq) {
            a.r[0] = (u32)param_1 + 0xda8u;
            a.r[1] = 0xffffffffu;
            f1 = tc_callf(0x80157e18u, &a);
        }
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = (u32)param_1 + 0xd80u;
        a.r[1] = 0xffffffffu;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        (void)tc_call(0x801d50e4u, &a);
        a.r[0] = (u32)param_1;
        a.r[1] = 0u;
        (void)tc_call(0x801e7008u, &a);
        if (param_2 > 0 && (u32)param_1 != 0u) {
            r3 = tc_call(0x800545e4u, &a);
            r6 = r3;
            if (rd32(r3 + 0x10u) != 0u) {
                r5 = rd32(r3 + 0xcu);
                r3 = rd32(r3);
                r6 = r6 + 0x18u;
                a.r[0] = r3;
                a.r[1] = (u32)param_1;
                a.r[2] = r5;
                a.r[3] = r6;
                (void)tc_call(0x80040e98u, &a);
            } else {
                if (rd32(r3 + 0x20u) != 0u) {
                    r3 = r3 + 0x24u;
                    a.r[0] = r3;
                    a.r[1] = (u32)param_1;
                    (void)tc_call(0x80094ec0u, &a);
                } else {
                    r5 = rd32(r3 + 0xcu);
                    r3 = rd32(r3);
                    r6 = r6 + 0x18u;
                    a.r[0] = r3;
                    a.r[1] = (u32)param_1;
                    a.r[2] = r5;
                    a.r[3] = r6;
                    (void)tc_call(0x80040e98u, &a);
                }
            }
        }
    }
    return param_1;
}

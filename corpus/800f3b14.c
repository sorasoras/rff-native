#include "tc_rt.h"

void fn_800f3b14(u32 param_1, s32 param_2)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0;
    TcArgs a = {0};
    r0 = rd32(param_1 + 0x90u);
    c0lt = (s32)r0 < 32;
    if (r0 == 0x20u) {
        if ((u32)param_2 != 0u) {
            a.r[0] = param_1;
            a.r[1] = (u32)param_2;
            a.r[2] = 0u;
            a.f[0] = 0.0;
            r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
            a.r[0] = 0x804b9da0u;
            a.r[1] = 0x2723u;
            a.r[2] = r3;
            (void)tc_call(0x8010a794u, &a);
        }
    } else if (!c0lt) {
        if (r0 == 0x40u) {
            if ((u32)param_2 == 0u) {
                a.r[0] = param_1;
                a.r[1] = (u32)param_2;
                a.r[2] = 0u;
                a.f[0] = 0.0;
                r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
                a.r[0] = 0x804b9da0u;
                a.r[1] = 0x2726u;
                a.r[2] = r3;
                (void)tc_call(0x8010a794u, &a);
            } else {
                a.r[0] = param_1;
                a.r[1] = (u32)param_2;
                a.r[2] = 0u;
                a.f[0] = 0.0;
                r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
                a.r[0] = 0x804b9da0u;
                a.r[1] = 0x2725u;
                a.r[2] = r3;
                (void)tc_call(0x8010a794u, &a);
            }
        }
    } else if (r0 == 0x10u && (u32)param_2 != 0u) {
        a.r[0] = param_1;
        a.r[1] = (u32)param_2;
        a.r[2] = 0u;
        a.f[0] = 0.0;
        r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
        a.r[0] = 0x804b9da0u;
        a.r[1] = 0x2722u;
        a.r[2] = r3;
        (void)tc_call(0x8010a794u, &a);
    }
    if ((u32)param_2 == 0u) {
        wrf32d(rd32(param_1 + 0x70u) + 0x58u, (f64)rdf32(0x80573b6cu));
        r4 = rd32(param_1 + 0x70u);
        wrf32d(r4 + 0x54u, (f64)rdf32(rd32(r4 + 0x48u) + 0x18u));
    } else {
        wrf32d(rd32(param_1 + 0x70u) + 0x58u, (f64)rdf32(0x80573b68u));
    }
    return;
}

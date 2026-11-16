#include "tc_rt.h"

void fn_801a0220(u32 param_1, s32 param_2)
{
    u32 r0 = 0, r3 = 0, r12 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfc0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    r0 = rd32(param_1 + 0x15c8u);
    if (r0 != 0u) {
        a.r[0] = r0;
        f1 = tc_callf(0x80157e6cu, &a);
    }
    if ((u32)param_2 == 0x4du) {
        r0 = rd32(param_1 + 0x5c0u);
        r3 = 0u;
        if ((s32)r0 >= 630 && (s32)r0 <= 634) {
            r3 = 1u;
        }
        if ((r3 == 0u || rd32(0x80499178u) == 0u) || rd32(param_1 + 0x290u) == 5u) {
            return;
        }
        f0 = (f64)rdf32(0x80575830u);
        wrf32d(0x817fdfe8u, f0);
        wrf32d(0x817fdfe4u, f0);
        wrf32d(0x817fdfe0u, f0);
        r12 = rd32(param_1 + 0x54cu);
        wrf32d(0x817fdfdcu, f0);
        r12 = rd32(r12 + 0x34u);
        wrf32d(0x817fdfd8u, f0);
        wrf32d(0x817fdfd4u, f0);
        a.r[0] = param_1 + 0x54cu;
        a.r[1] = 0x817fdfe0u;
        a.r[2] = 0xc8u;
        a.r[3] = 0x804890c8u;
        a.f[0] = f1;
        r3 = tc_call(r12, &a);
        f1 = tc_lastf();
        if (r3 != 0u) {
            a.r[0] = param_1 + 0x54cu;
            a.r[1] = 0xc8u;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.f[0] = f1;
            f1 = tc_callf(rd32(rd32(param_1 + 0x54cu) + 0x44u), &a);
        } else {
            a.r[0] = param_1 + 0x54cu;
            a.r[1] = 0x817fdfe0u;
            a.r[2] = 0u;
            a.r[3] = 0x804890c8u;
            a.f[0] = f1;
            r3 = tc_call(rd32(rd32(param_1 + 0x54cu) + 0x34u), &a);
            f1 = tc_lastf();
            if (r3 != 0u) {
                a.r[0] = param_1 + 0x54cu;
                a.r[1] = 0u;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.f[0] = f1;
                f1 = tc_callf(rd32(rd32(param_1 + 0x54cu) + 0x44u), &a);
            } else {
                a.r[0] = param_1;
                a.r[1] = 0x817fdfe0u;
                a.r[2] = 0x15u;
                a.r[3] = 0x804890c8u;
                a.f[0] = f1;
                f1 = tc_callf(rd32(rd32(param_1) + 0x34u), &a);
                a.r[0] = param_1;
                a.r[1] = 0x15u;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.f[0] = f1;
                f1 = tc_callf(rd32(rd32(param_1) + 0x44u), &a);
            }
        }
        wrf32d(0x817fdfd8u, f1);
        a.f[0] = (f64)rdf32(0x8057582cu);
        a.r[0] = (u32)param_2;
        a.r[1] = 0x817fdfe0u;
        a.r[2] = 0x804b15c0u;
        a.r[3] = 0x804890c8u;
        r3 = tc_call(0x800d7768u, &a);
        wr32(param_1 + 0x15c8u, r3);
        if (r3 == 0u) {
            return;
        }
        r3 = rd32(0x817fdfd8u);
        r0 = rd32(0x817fdfdcu);
        wr32(0x817fdfc8u, rd32(0x817fdfd4u));
        wr32(0x817fdfccu, r3);
        wr32(0x817fdfd0u, r0);
        a.r[0] = rd32(param_1 + 0x15c8u);
        a.r[1] = 0x817fdfc8u;
        (void)tc_call(0x801582b4u, &a);
    } else {
        if ((((u32)param_2 == 0u || (u32)param_2 == 1u) || ((u32)param_2 == 2u || (u32)param_2 == 3u)) || ((u32)param_2 == 4u || (u32)param_2 == 5u)) {
            a.r[0] = (u32)param_2;
            a.r[1] = 0x804890c8u;
            a.r[2] = 0x804890c8u;
            r3 = tc_call(0x800d7ac8u, &a);
            wr32(param_1 + 0x15c8u, r3);
        }
    }
    return;
}

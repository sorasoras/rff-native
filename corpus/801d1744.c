#include "tc_rt.h"

void fn_801d1744(s32 param_1, s32 param_2)
{
    u32 c0lt = 0, r3 = 0;
    f64 f0 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    c0lt = param_2 < 1;
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    if ((u32)param_2 != 1u) {
        if (!c0lt) {
            return;
        }
        if (param_2 < 0) {
            return;
        }
        if (rd32((u32)param_1 + 0x39cu) != 0u) {
            return;
        }
        f0 = (f64)rdf32(0x80575ea8u);
        wrf32d(0x817fdfecu, f0);
        wrf32d(0x817fdfe8u, f0);
        wrf32d(0x817fdfe4u, f0);
        a.r[0] = (u32)param_1;
        a.r[1] = rd32((u32)param_1 + 0x70u);
        a.r[2] = 0x3fu;
        a.r[3] = 0x817fdfe4u;
        r3 = tc_call(0x801d05a0u, &a);
        if (r3 == 0u) {
            return;
        }
        a.f[0] = (f64)rdf32(0x80575e98u);
        a.r[0] = rd32((u32)param_1 + 0x398u);
        a.r[1] = 0x817fdfe4u;
        a.r[2] = 0x804b15c0u;
        a.r[3] = 0x804890c8u;
        r3 = tc_call(0x800d7768u, &a);
        wr32((u32)param_1 + 0x39cu, r3);
        if (r3 == 0u) {
            return;
        }
        a.r[0] = r3;
        a.r[1] = 0x3cu;
        (void)tc_call(0x80157f70u, &a);
    } else {
        f0 = (f64)rdf32(0x80575ea8u);
        wrf32d(0x817fdfe0u, f0);
        wrf32d(0x817fdfdcu, f0);
        wrf32d(0x817fdfd8u, f0);
        a.r[0] = (u32)param_1;
        a.r[1] = rd32((u32)param_1 + 0x70u);
        a.r[2] = 0x3fu;
        a.r[3] = 0x817fdfd8u;
        r3 = tc_call(0x801d05a0u, &a);
        if (r3 != 0u) {
            r3 = rd32((u32)param_1 + 0x3a0u);
            if (rd32(((r3 << 2u) & 0xfffffffcu) - 0x7fca9e94u) != 0u) {
                a.f[0] = (f64)rdf32(0x80575e98u);
                a.r[0] = r3;
                a.r[1] = 0x817fdfd8u;
                a.r[2] = 0x804b15c0u;
                a.r[3] = 0x804890c8u;
                r3 = tc_call(0x800d7768u, &a);
                a.r[0] = r3;
                a.r[1] = 0x1eu;
                (void)tc_call(0x80157f70u, &a);
            } else {
                a.f[0] = (f64)rdf32(0x80575e98u);
                a.r[0] = r3;
                a.r[1] = 0x817fdfd8u;
                a.r[2] = 0x804b15c0u;
                a.r[3] = 0x804890c8u;
                (void)tc_call(0x800d783cu, &a);
            }
        }
    }
    return;
}

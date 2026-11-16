#include "tc_rt.h"

void fn_801c1810(s32 param_1)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    r0 = rd32((u32)param_1 + 0xe4u);
    if (r0 != 0u) {
        f2 = (f64)rdf32(0x80575cf0u);
        f1 = (f64)(f32)((f64)rdf32((u32)param_1 + 0xe8u) + f2);
        c0lt = f1 < (f64)rdf32(0x80575cf4u);
        wrf32d((u32)param_1 + 0xe8u, f1);
        if (c0lt) {
            f1 = (f64)(f32)(f1 + f2);
            f0 = (f64)(f32)((f64)rdf32(0x80575ce4u) * f1);
            wrf32d((u32)param_1 + 0xe8u, f1);
            wrf32d((u32)param_1 + 0x20u, f0);
            a.f[0] = f1;
            a.r[0] = r0;
            (void)tc_call(0x80157f78u, &a);
        }
        r0 = rd32((u32)param_1 + 0xcu);
        wr32(0x817fdfe4u, rd32((u32)param_1 + 8u));
        wr32(0x817fdfe8u, r0);
        wr32(0x817fdfecu, rd32((u32)param_1 + 0x10u));
        a.r[0] = 0x817fdfe4u;
        a.r[1] = (u32)param_1 + 0xecu;
        a.r[2] = 0x817fdfe4u;
        (void)tc_call(0x80234380u, &a);
        wrf32d((u32)param_1 + 8u, (f64)rdf32(0x817fdfe4u));
        wrf32d((u32)param_1 + 0xcu, (f64)rdf32(0x817fdfe8u));
        wrf32d((u32)param_1 + 0x10u, (f64)rdf32(0x817fdfecu));
        r3 = rd32(0x817fdfe8u);
        r0 = rd32(0x817fdfecu);
        wr32(0x817fdfd8u, rd32(0x817fdfe4u));
        wr32(0x817fdfdcu, r3);
        wr32(0x817fdfe0u, r0);
        a.r[0] = rd32((u32)param_1 + 0xe4u);
        a.r[1] = 0x817fdfd8u;
        (void)tc_call(0x8015811cu, &a);
        r4 = rd32((u32)param_1 + 0xfcu);
        if ((s32)r4 >= 0) {
            a.r[0] = 0x804b9e80u;
            a.r[1] = r4;
            a.r[2] = 0x817fdfe4u;
            (void)tc_call(0x80120914u, &a);
        }
        a.r[0] = (u32)param_1;
        (void)tc_call(0x8006f778u, &a);
        r0 = rd32((u32)param_1 + 0xf8u) - 1u;
        wr32((u32)param_1 + 0xf8u, r0);
        if ((s32)r0 < 0) {
            a.r[0] = (u32)param_1;
            (void)tc_call(0x801c1770u, &a);
        }
    }
    return;
}

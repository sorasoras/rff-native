#include "tc_rt.h"

u32 fn_801c4c9c(s32 param_1, u32 param_2)
{
    u32 r0 = 0, r5 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    f0 = (f64)rdf32(0x80575d50u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    r5 = rd32(param_2 + 0x70u);
    f1 = (f64)rdf32(r5 + 0x54u);
    if ((f1 > f0) || (f1 == f0)) {
        if (rd32((u32)param_1 + 8u) == 0u) {
            a.r[0] = 0x804b9da0u;
            a.r[1] = 0x2464u;
            (void)tc_call(0x8010a75cu, &a);
            wr32((u32)param_1 + 8u, rd32((u32)param_1 + 8u) + 1u);
        }
        r0 = rd32(param_2 + 0x180u);
        f0 = (f64)rdf32(0x80570964u);
        wr32(0x817fdfe8u, rd32(param_2 + 0x17cu));
        wr32(0x817fdfecu, r0);
        wr32(0x817fdff0u, rd32(param_2 + 0x184u));
        a.f[0] = (f64)(f32)(f0 * (f64)rdf32(param_2 + 0xd38u));
        a.r[0] = 0x817fdfe8u;
        a.r[1] = 0x817fdfe8u;
        (void)tc_call(0x802343c8u, &a);
        wrf32d(param_2 + 0x17cu, (f64)rdf32(0x817fdfe8u));
        wrf32d(param_2 + 0x180u, (f64)rdf32(0x817fdfecu));
        wrf32d(param_2 + 0x184u, (f64)rdf32(0x817fdff0u));
    } else {
        a.r[0] = param_2;
        a.r[1] = param_2;
        a.r[2] = r5;
        a.f[0] = f1;
        f1 = tc_callf(rd32(rd32(param_2) + 0x2cu), &a);
        f1 = (f64)(f32)(f1 + (f64)rdf32((u32)param_1 + 0xcu));
        a.r[0] = param_2;
        a.r[1] = tc_lastr4();
        a.r[2] = 0u;
        a.f[0] = f1;
        (void)tc_call(rd32(rd32(param_2) + 0x24u), &a);
    }
    return (ppc_cntlzw(rd32(param_2 + 0x110u)) >> 5u) & 0x7ffffffu;
}

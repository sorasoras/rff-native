#include "tc_rt.h"

void fn_800d3dcc(s32 param_1, u32 param_2, u32 param_3)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r31 = 0;
    f64 f1 = 0.0, f3 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff0u, 0u);
    r3 = tc_call(0x80052c3cu, &a);
    r31 = r3;
    a.r[0] = r3;
    (void)tc_call(0x800cb808u, &a);
    a.r[0] = (u32)param_1;
    f1 = tc_callf(0x800d3b00u, &a);
    wrf32d(r31 + 0x30u, f1);
    f1 = tc_callf(0x800d3b08u, &a);
    wrf32d(r31 + 0x40u, f1);
    wrf32d(r31 + 0x48u, (f64)rdf32(0x80573110u));
    a.r[0] = (u32)param_1;
    a.r[1] = 0x817fdfe4u;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    (void)tc_call(rd32(rd32((u32)param_1 + 0x738u) + 0x10u), &a);
    f1 = (f64)rdf32(0x80573114u);
    wr32(0x817fdfd8u, rd32(0x817fdfe4u));
    f3 = (f64)rdf32(0x80573118u);
    r0 = (u32)rd8(0x817fdfd9u);
    wr8(r31 + 0x24u, rd8(0x817fdfd8u));
    r4 = (u32)rd8(0x817fdfdau);
    wr8(r31 + 0x25u, (u8)r0);
    r0 = (u32)rd8(0x817fdfdbu);
    wr8(r31 + 0x26u, (u8)r4);
    wr8(r31 + 0x27u, (u8)r0);
    a.f[0] = f1;
    a.f[1] = f1;
    a.f[2] = f3;
    a.f[3] = f3;
    a.r[0] = r31;
    (void)tc_call(0x800cc524u, &a);
    a.r[0] = r31;
    a.r[1] = (u32)param_1 + 0x528u;
    a.r[2] = 0x817fdfecu;
    a.r[3] = 0x817fdfe8u;
    f1 = tc_callf(0x800cd4c4u, &a);
    wrf32d((u32)param_1 + 0x508u, (f64)rdf32(0x817fdfecu));
    wrf32d((u32)param_1 + 0x50cu, (f64)rdf32(0x817fdfe8u));
    a.r[0] = (u32)param_1;
    a.r[1] = 0x817fdfecu;
    a.r[2] = 0x817fdfe8u;
    a.r[3] = 0u;
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    (void)tc_call(rd32(rd32((u32)param_1 + 0x738u) + 0xcu), &a);
    a.r[0] = (u32)param_1;
    a.r[1] = 0x817fdfe0u;
    a.r[2] = 0x817fdfdcu;
    (void)tc_call(0x800d3b78u, &a);
    r3 = tc_call(0x800d3f34u, &a);
    if (r3 != 0u) {
        wrf32d(0x817fdfe0u, (f64)(f32)((f64)rdf32(0x817fdfe0u) * (f64)rdf32(0x80573160u)));
    }
    f3 = (f64)rdf32(0x80573144u);
    f1 = ppc_fmadds(f3, (f64)rdf32(0x817fdfe0u), (f64)rdf32(0x817fdfecu));
    wrf32d(0x817fdfe8u, ppc_fmadds(f3, (f64)rdf32(0x817fdfdcu), (f64)rdf32(0x817fdfe8u)));
    wrf32d(param_2, f1);
    wrf32d(param_3, (f64)rdf32(0x817fdfe8u));
    return;
}

#include "tc_rt.h"

void fn_80094b00(s32 param_1)
{
    u32 r0 = 0, r3 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    r3 = (u32)param_1 + 0xf0u;
    a.r[0] = r3;
    a.r[1] = (u32)param_1 + 0xfcu;
    a.r[2] = r3;
    (void)tc_call(0x80234380u, &a);
    r3 = (u32)param_1 + 8u;
    a.r[0] = r3;
    a.r[1] = (u32)param_1 + 0xf0u;
    a.r[2] = r3;
    (void)tc_call(0x80234380u, &a);
    r0 = rd32((u32)param_1 + 0xcu);
    wr32(0x817fdfe8u, rd32((u32)param_1 + 8u));
    wr32(0x817fdfecu, r0);
    wr32(0x817fdff0u, rd32((u32)param_1 + 0x10u));
    a.r[0] = 0x817fdfe8u;
    a.r[1] = (u32)param_1 + 0xe4u;
    a.r[2] = 0x817fdfe8u;
    (void)tc_call(0x802343a4u, &a);
    a.r[0] = 0x817fdfe8u;
    f1 = tc_callf(0x80234428u, &a);
    f0 = (f64)rdf32((u32)param_1 + 0x108u);
    f0 = (f64)(f32)(f0 * f0);
    if (f1 > f0) {
        a.r[0] = (u32)param_1;
        (void)tc_call(0x80094ba8u, &a);
    }
    wrf32d((u32)param_1 + 0x110u, (f64)(f32)((f64)rdf32((u32)param_1 + 0x110u) + (f64)rdf32(0x80572a34u)));
    a.r[0] = (u32)param_1;
    (void)tc_call(0x8006f778u, &a);
    return;
}

#include "tc_rt.h"

void fn_802e8b4c(u32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    u32 r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f4 = 0.0, f6 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    a.r[0] = param_1 + 0xe8u;
    a.r[1] = param_4;
    r3 = tc_call(0x802ef6ecu, &a);
    f1 = tc_lastf();
    r4 = r3;
    r3 = rd32(param_1 + 0x28u);
    a.r[0] = r3;
    a.r[1] = r4;
    a.r[2] = param_4;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    r3 = tc_call(rd32(rd32(r3) + 0xcu), &a);
    r31 = r3;
    a.r[0] = r3;
    a.r[1] = (u32)rd8(param_1 + 0xf9u);
    (void)tc_call(0x802ef7a8u, &a);
    if (r31 != 0u) {
        r7 = param_1 + 0xe8u;
    } else {
        r7 = 0u;
    }
    f6 = (f64)rdf32(param_3 + 8u);
    f4 = (f64)rdf32(param_3);
    r6 = rd32(param_1 + 0xfcu);
    r5 = (u32)rd8(param_1 + 0xf9u);
    f2 = (f64)(f32)((f64)rdf32(param_1 + 0xdcu) + (f64)(f32)((f64)(f32)((f64)rdf32(param_1 + 0xd8u) + (f64)(f32)((f64)rdf32(param_1 + 0x4cu) - f4)) - (f64)rdf32(param_3 + 4u)));
    f1 = (f64)rdf32(param_2 + 4u);
    wrf32d(0x817fdfdcu, (f64)(f32)((f64)rdf32(param_1 + 0xe4u) + (f64)(f32)((f64)(f32)((f64)rdf32(param_1 + 0xe0u) + (f64)(f32)((f64)rdf32(param_1 + 0x50u) - f6)) - (f64)rdf32(param_3 + 0xcu))));
    f0 = (f64)rdf32(param_2);
    wrf32d(0x817fdfd8u, f2);
    f0 = (f64)(f32)((f64)(f32)(f0 + f4) - (f64)rdf32(param_1 + 0xd8u));
    wrf32d(0x817fdfe4u, (f64)(f32)((f64)rdf32(param_1 + 0xe0u) + (f64)(f32)(f1 - f6)));
    wrf32d(0x817fdfe0u, f0);
    a.r[0] = 0x817fdfe0u;
    a.r[1] = 0x817fdfd8u;
    a.r[2] = r5;
    a.r[3] = r6;
    a.r[4] = r7;
    a.r[5] = param_4;
    (void)tc_call(0x802efdecu, &a);
    return;
}

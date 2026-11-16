#include "tc_rt.h"

void fn_800962d4(s32 param_1)
{
    u32 r4 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32((u32)param_1 + 0xd0u, 3u);
    a.r[0] = 0x8046d89cu;
    a.r[1] = (u32)param_1;
    (void)tc_call(0x8007b03cu, &a);
    f0 = (f64)(f32)((f64)rdf32((u32)param_1 + 0xccu) + (f64)rdf32(0x80572a50u));
    f2 = (f64)(f32)((f64)rdf32((u32)param_1 + 0xc8u) + (f64)rdf32(0x80572a70u));
    f1 = (f64)rdf32(0x80572a3cu);
    wrf32d(0x817fdfe8u, (f64)rdf32((u32)param_1 + 0xc4u));
    wrf32d(0x817fdfecu, f2);
    wrf32d(0x817fdff0u, f0);
    a.f[0] = f1;
    a.r[0] = 0x72u;
    a.r[1] = 0x817fdfe8u;
    a.r[2] = 0x804b15c0u;
    a.r[3] = 0x804890c8u;
    (void)tc_call(0x800d783cu, &a);
    r4 = rd32((u32)param_1 + 0x110u);
    if (r4 != 0xffffffffu) {
        a.r[0] = 0x804b9e80u;
        a.r[1] = r4;
        (void)tc_call(0x801206f4u, &a);
        wr32((u32)param_1 + 0x110u, 0xffffffffu);
    }
    return;
}

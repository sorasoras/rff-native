#include "tc_rt.h"

void fn_800a39a8(u32 param_1)
{
    u32 r0 = 0, r4 = 0, r5 = 0;
    f64 f1 = 0.0, f3 = 0.0, f4 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdff0u, 0x817fe000u);
    f1 = (f64)rdf32(0x80572ad8u);
    wr32(0x817fe004u, 0x817ff000u);
    r5 = (u32)rd8(param_1 + 1u);
    r4 = (u32)rd8(param_1 + 2u);
    r0 = (u32)rd8(param_1 + 3u);
    wr8(0x817fdff8u, rd8(param_1));
    f3 = (f64)rdf32(0x80572ae4u);
    wr8(0x817fdff9u, (u8)r5);
    f4 = (f64)rdf32(0x80572ae8u);
    wr8(0x817fdffau, (u8)r4);
    wr8(0x817fdffbu, (u8)r0);
    a.f[0] = f1;
    a.f[1] = f1;
    a.f[2] = f3;
    a.f[3] = f4;
    a.r[0] = 0x817fdff8u;
    (void)tc_call(0x800a376cu, &a);
    return;
}

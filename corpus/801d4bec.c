#include "tc_rt.h"

void fn_801d4bec(u32 param_1)
{
    u32 r0 = 0, r3 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    r3 = rd32(0x804863d8u);
    a.r[0] = r3;
    a.r[1] = 0x80480000u;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.f[0] = 0.0;
    a.f[1] = 0.0;
    r3 = tc_call(rd32(rd32(r3) + 0x28u), &a);
    f1 = tc_lastf();
    r31 = r3;
    a.r[0] = param_1;
    a.r[1] = tc_lastr4();
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.f[0] = f1;
    a.f[1] = 0.0;
    r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
    r0 = rd32(r31 + 4u);
    wr32(0x817fdfe8u, rd32(r31));
    wr32(0x817fdfecu, r0);
    wr32(0x817fdff0u, rd32(r31 + 8u));
    a.r[0] = 0x817fdfe8u;
    a.r[1] = r3;
    a.r[2] = 0x817fdfe8u;
    (void)tc_call(0x802343a4u, &a);
    a.f[0] = (f64)rdf32(0x817fdfe8u);
    a.f[1] = (f64)rdf32(0x817fdff0u);
    f1 = tc_callf(0x80262c68u, &a);
    f1 = (f64)(f32)f1;
    a.r[0] = param_1;
    a.r[1] = tc_lastr4();
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.f[0] = f1;
    a.f[1] = 0.0;
    (void)tc_call(rd32(rd32(param_1) + 0x24u), &a);
    return;
}

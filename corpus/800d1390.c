#include "tc_rt.h"

void fn_800d1390(s32 param_1)
{
    u32 r3 = 0, r4 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    if ((rd32(0x8057118cu) & 0x200u) != 0u) {
        r3 = rd32((u32)param_1 + 0x20u);
        a.r[0] = r3;
        a.r[1] = 0u;
        a.f[0] = 0.0;
        a.f[1] = 0.0;
        r3 = tc_call(rd32(rd32(r3) + 0x28u), &a);
        r4 = rd32(r3);
        f1 = (f64)rdf32(0x805730bcu);
        wr32(0x817fdfecu, rd32(r3 + 4u));
        wr32(0x817fdfe8u, r4);
        f0 = (f64)rdf32(0x817fdfecu);
        wr32(0x817fdff0u, rd32(r3 + 8u));
        f1 = (f64)(f32)(f1 + (f64)rdf32(rd32((u32)param_1 + 0x20u) + 0xb4u));
        f0 = (f64)(f32)(f0 + f1);
        wrf32d(0x817fdfecu, f0);
        a.r[0] = 0x817fdfe8u;
        (void)tc_call(0x80077890u, &a);
    }
    return;
}

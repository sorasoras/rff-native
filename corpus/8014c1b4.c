#include "tc_rt.h"

void fn_8014c1b4(s32 param_1, u32 param_2)
{
    u32 r3 = 0;
    f64 f0 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    r3 = rd32((u32)param_1 + 4u);
    a.r[0] = r3;
    a.r[1] = param_2;
    a.f[0] = 0.0;
    r3 = tc_call(rd32(rd32(r3) + 0x19cu), &a);
    wr32(0x817fdfe8u, r3);
    a.r[0] = 0x817fdfe8u;
    a.r[1] = param_2;
    r3 = tc_call(0x8014967cu, &a);
    wr32((u32)param_1 + 0x14u, r3);
    if (r3 == 0u) {
        wr32(0x80571300u, rd32(0x80571300u) + 1u);
    }
    f0 = (f64)rdf32(0x805746e0u);
    wr32((u32)param_1 + 0x18u, 0u);
    wrf32d((u32)param_1 + 0x1cu, f0);
    wrf32d((u32)param_1 + 0x20u, f0);
    wrf32d((u32)param_1 + 0x24u, f0);
    return;
}

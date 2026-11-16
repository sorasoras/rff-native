#include "tc_rt.h"

void fn_800f1804(s32 param_1)
{
    u32 r3 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r31 = rd32((u32)param_1 + 0x18u);
    a.r[0] = r31;
    a.r[1] = 1u;
    r3 = tc_call(0x800b1048u, &a);
    if (r3 != 0u) {
        f1 = (f64)(f32)((f64)rdf32(r31 + 0xd50u) * (f64)rdf32(0x80573afcu));
    } else {
        f1 = (f64)rdf32(r31 + 0xd50u);
    }
    wrf32d(rd32((u32)param_1 + 0x18u) + 0xd50u, (f64)(f32)(rdf64(0x80573b38u) * f1));
    return;
}

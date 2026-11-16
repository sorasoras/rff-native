#include "tc_rt.h"

void fn_8007c568(s32 param_1, s32 param_2)
{
    u32 r4 = 0, r5 = 0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    r5 = rd32((u32)param_1 + 0x50u);
    wr32(0x817fe004u, 0x817ff000u);
    r4 = rd32((u32)param_2 + 0x50u);
    wrf32d(0x817fdfe8u, (f64)(f32)((f64)rdf32(r5 + 0xcu) - (f64)rdf32(r4 + 0xcu)));
    wrf32d(0x817fdfecu, (f64)(f32)((f64)rdf32(r5 + 0x1cu) - (f64)rdf32(r4 + 0x1cu)));
    wrf32d(0x817fdff0u, (f64)(f32)((f64)rdf32(r5 + 0x2cu) - (f64)rdf32(r4 + 0x2cu)));
    a.r[0] = 0x817fdfe8u;
    (void)tc_call(0x80234440u, &a);
    return;
}

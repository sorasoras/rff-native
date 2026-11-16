#include "tc_rt.h"

void fn_8015e364(s32 param_1)
{
    u32 r6 = 0;
    TcArgs a = {0};
    wrf32d(rd32((u32)param_1 + 0x78u) + 0x58u, (f64)rdf32(0x80574a14u));
    r6 = rd32((u32)param_1 + 0x78u);
    wrf32d(r6 + 0x54u, (f64)rdf32(rd32(r6 + 0x48u) + 0x18u));
    a.r[0] = rd32((u32)param_1 + 0x78u);
    a.r[1] = 0u;
    (void)tc_call(0x800355acu, &a);
    a.r[0] = (u32)param_1;
    a.r[1] = 0u;
    (void)tc_call(0x8015dfecu, &a);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x8015e0c4u, &a);
    return;
}

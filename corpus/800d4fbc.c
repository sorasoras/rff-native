#include "tc_rt.h"

void fn_800d4fbc(s32 param_1)
{
    u32 r3 = 0;
    f64 f1 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    f31 = (f64)rdf32((u32)param_1 + 0x4e8u);
    r3 = tc_call(0x8003c9c8u, &a);
    r3 = r3 ^ 0x80000000u;
    wr32(0x817fdfdcu, r3);
    f1 = rdf64(0x80573158u);
    wr32(0x817fdfd8u, 0x43300000u);
    r3 = rd32((u32)param_1 + 0x524u);
    f31 = (f64)(f32)(f31 + (f64)(f32)(rdf64(0x817fdfd8u) - f1));
    wrf32d((u32)param_1 + 0x4e8u, f31);
    a.r[0] = r3;
    f1 = tc_callf(0x8011c8fcu, &a);
    if (!(f1 > f31)) {
        wr32((u32)param_1 + 0x72cu, rd32((u32)param_1 + 0x72cu) & 0xbfffffffu);
    }
    return;
}

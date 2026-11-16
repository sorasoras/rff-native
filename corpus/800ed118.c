#include "tc_rt.h"

f64 fn_800ed118(u32 param_1, s32 param_2)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = param_1;
    r3 = tc_call(0x8007dad4u, &a);
    r3 = rd32(r3 + 0xcu);
    a.r[0] = r3;
    r3 = tc_call(0x800f2a0cu, &a);
    r3 = rd32(r3);
    r3 = r3 + ((u32)param_2 * 0x24u);
    return (f64)rdf32(r3 + 0x20u);
}

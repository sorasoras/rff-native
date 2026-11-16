#include "tc_rt.h"

u32 fn_8018dd58(s32 param_1)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = 1u;
    wr32(0x8057118cu, rd32(0x8057118cu) & 0xffffffdfu);
    a.r[0] = (u32)param_1 + 0x38u;
    r3 = tc_call(0x80255850u, &a);
    if (r3 != 0u) {
        a.r[0] = (u32)param_1;
        r3 = tc_call(0x802558bcu, &a);
        r31 = r3;
    }
    return r31;
}

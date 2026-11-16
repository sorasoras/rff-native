#include "tc_rt.h"

u32 fn_800470f0(u32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    if (rd32(0x803c1de0u) != 0u) {
        a.r[0] = param_1;
        a.r[1] = 0x803c1dccu;
        a.r[2] = 0x10u;
        (void)tc_call(0x80004338u, &a);
        r3 = 1u;
    } else {
        r3 = 0u;
    }
    return r3;
}

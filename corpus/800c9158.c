#include "tc_rt.h"

u32 fn_800c9158(u32 param_1)
{
    TcArgs a = {0};
    wr32(param_1, 0x80355608u);
    a.r[0] = param_1;
    a.r[1] = 0u;
    a.f[0] = 0.0;
    (void)tc_call(rd32(0x80355614u), &a);
    return param_1;
}

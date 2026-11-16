#include "tc_rt.h"

u32 fn_802f4f40(u32 param_1, u32 param_2, u32 param_3)
{
    u32 r3 = 0;
    TcArgs a = {0};
    (void)param_1;
    a.r[0] = param_2;
    a.r[1] = param_3;
    (void)tc_call(0x80249734u, &a);
    r3 = rd32(0x80571d84u);
    wr32(0x80571d80u, 0u);
    return r3;
}

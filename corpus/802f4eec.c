#include "tc_rt.h"

void fn_802f4eec(u32 param_1, u32 param_2, u32 param_3)
{
    TcArgs a = {0};
    a.r[0] = param_2;
    a.r[1] = param_3;
    (void)tc_call(0x80249740u, &a);
    a.r[0] = 0x802f4f74u;
    a.r[1] = 0x802f4fd4u;
    (void)tc_call(0x80249734u, &a);
    wr32(0x80571d80u, param_1);
    wr32(0x80571d84u, 0u);
    return;
}

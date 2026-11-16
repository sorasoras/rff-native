#include "tc_rt.h"

void fn_802e711c(u32 param_1, u32 param_2)
{
    TcArgs a = {0};
    wr32(0x817fdf80u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    a.r[0] = 0x817fdf88u;
    (void)tc_call(0x802e2378u, &a);
    a.r[0] = param_1;
    a.r[1] = param_2;
    a.r[2] = 0x817fdf88u;
    (void)tc_call(0x802e7e34u, &a);
    a.r[0] = 0x817fdf88u;
    a.r[1] = 0xffffffffu;
    (void)tc_call(0x802e23d4u, &a);
    return;
}

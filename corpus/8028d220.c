#include "tc_rt.h"

void fn_8028d220(s32 param_1, u32 param_2, u32 param_3)
{
    TcArgs a = {0};
    a.r[0] = 0x8053d470u;
    a.r[1] = (u32)param_1;
    (void)tc_call(0x8028b46cu, &a);
    wr16((u32)param_1 + 0x14u, (u16)param_2);
    wr32((u32)param_1 + 0xcu, param_3);
    a.r[0] = 0x8053d470u;
    a.r[1] = (u32)param_1;
    (void)tc_call(0x8028b380u, &a);
    return;
}

#include "tc_rt.h"

void fn_8008c0e0(s32 param_1, s32 param_2, u32 param_3)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 0x4190u;
    (void)tc_call(0x80189aa4u, &a);
    a.r[0] = (u32)param_1 + (rd32((u32)param_1 + 0x4150u) * 0x4150u);
    (void)tc_call(0x80089874u, &a);
    r3 = tc_call(0x80081034u, &a);
    a.r[0] = (u32)param_1;
    a.r[1] = (u32)param_2;
    a.r[2] = r3 & 0xffu;
    (void)tc_call(0x8008ca00u, &a);
    a.r[0] = (u32)param_2;
    r3 = tc_call(0x8007d150u, &a);
    if (rd32(r3 + 4u) == 0u || (u32)param_2 == 0x3fu) {
        a.r[0] = (u32)param_1;
        a.r[1] = 1u;
        (void)tc_call(0x8008c9e0u, &a);
    } else {
        a.r[0] = (u32)param_1;
        a.r[1] = 0u;
        (void)tc_call(0x8008c9e0u, &a);
    }
    a.r[0] = (u32)param_1 + (rd32((u32)param_1 + 0x4150u) * 0x4150u);
    a.r[1] = (u32)param_2;
    (void)tc_call(0x80085790u, &a);
    a.r[0] = 0x80488cdcu;
    a.r[1] = (u32)param_2;
    a.r[2] = param_3;
    (void)tc_call(0x801ca7c0u, &a);
    return;
}

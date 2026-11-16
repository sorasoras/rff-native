#include "tc_rt.h"

void fn_80329848(s32 param_1, u32 param_2, s32 param_3)
{
    TcArgs a = {0};
    wr32(0x817fdfc0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    a.r[0] = (u32)param_1;
    a.r[1] = (u32)param_3;
    a.r[2] = rd32((u32)param_3 + 0x24u) + 0x9cu;
    a.r[3] = param_2;
    (void)tc_call(0x80325f9cu, &a);
    a.r[0] = 0u;
    a.r[1] = 1u;
    a.r[2] = 1u;
    (void)tc_call(0x80250e00u, &a);
    a.r[0] = 0xdu;
    a.r[1] = 0x80570f60u;
    a.r[2] = 2u;
    (void)tc_call(0x8024fef4u, &a);
    (void)tc_call(0x8024f870u, &a);
    a.r[0] = 9u;
    a.r[1] = 1u;
    (void)tc_call(0x8024f27cu, &a);
    if ((u32)rd8((u32)param_1 + 0xc0u) != 0u) {
        a.r[0] = 0xdu;
        a.r[1] = 2u;
        (void)tc_call(0x8024f27cu, &a);
    }
    a.r[0] = 0u;
    a.r[1] = 9u;
    a.r[2] = 1u;
    a.r[3] = 4u;
    a.r[4] = 0u;
    (void)tc_call(0x8024f8a4u, &a);
    a.r[0] = 0u;
    a.r[1] = 0xdu;
    a.r[2] = 1u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    (void)tc_call(0x8024f8a4u, &a);
    a.r[0] = 0x817fdfc8u;
    (void)tc_call(0x80233740u, &a);
    a.r[0] = 0x817fdfc8u;
    a.r[1] = 0u;
    (void)tc_call(0x802544a0u, &a);
    a.r[0] = 0u;
    (void)tc_call(0x80254548u, &a);
    return;
}

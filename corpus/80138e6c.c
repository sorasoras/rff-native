#include "tc_rt.h"

void fn_80138e6c(s32 param_1)
{
    u32 r30 = 0, r31 = 0;
    TcArgs a = {0};
    if (rd32((u32)param_1 + 0x7a0u) == 4u) {
        a.r[0] = 0u;
        a.r[1] = 0u;
        a.r[2] = 0u;
        a.r[3] = 0xffu;
        a.r[4] = 0xffffffu;
        (void)tc_call(0x80044e78u, &a);
    } else {
        a.r[0] = 0xffu;
        a.r[1] = 0xffu;
        a.r[2] = 0xffu;
        a.r[3] = 0xffu;
        a.r[4] = 0xffffffu;
        (void)tc_call(0x80044e78u, &a);
    }
    a.r[0] = (u32)param_1 + 0x44cu;
    (void)tc_call(0x80139a04u, &a);
    r31 = (u32)param_1 + 0x488u;
    r30 = 0u;
    do {
        a.r[0] = r31;
        (void)tc_call(0x80139e04u, &a);
        r30 = r30 + 1u;
        r31 = r31 + 0x54u;
    } while ((s32)r30 < 3);
    a.r[0] = (u32)param_1 + 0x5c4u;
    (void)tc_call(0x8019124cu, &a);
    a.r[0] = rd32((u32)param_1 + 0x794u);
    (void)tc_call(0x800fe9bcu, &a);
    return;
}

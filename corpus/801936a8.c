#include "tc_rt.h"

void fn_801936a8(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    if (rd32((u32)param_1 + 0x10u) != 0u) {
        a.r[0] = (u32)param_1 + 0x24u;
        (void)tc_call(0x80163f60u, &a);
        r3 = rd32((u32)param_1 + 0x14u);
        if (r3 != 0u) {
            a.r[0] = r3;
            (void)tc_call(0x80193cb0u, &a);
        }
        (void)tc_call(0x800f974cu, &a);
        a.r[0] = (u32)param_1 + 0x84u;
        (void)tc_call(0x801e64d0u, &a);
        a.r[0] = (u32)param_1 + 0xf8u;
        (void)tc_call(0x801e64d0u, &a);
        a.r[0] = (u32)param_1 + 0xf8u;
        (void)tc_call(0x801e64d0u, &a);
        a.r[0] = (u32)param_1 + 0x84u;
        (void)tc_call(0x801e64d0u, &a);
        a.r[0] = rd32((u32)param_1 + 0x7cu);
        (void)tc_call(0x800fe9bcu, &a);
        a.r[0] = rd32((u32)param_1 + 0x80u);
        (void)tc_call(0x800fe9bcu, &a);
    }
    return;
}

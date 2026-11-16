#include "tc_rt.h"

void fn_80097010(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = 1u;
    (void)tc_call(0x8004ca7cu, &a);
    a.r[0] = rd32((u32)param_1 + 0x48u);
    r3 = tc_call(0x800ae038u, &a);
    if (r3 == 1u) {
        a.r[0] = rd32((u32)param_1 + 0x48u);
        (void)tc_call(0x800ae138u, &a);
    }
    a.r[0] = rd32((u32)param_1 + 0x68u);
    (void)tc_call(0x801f95b4u, &a);
    a.r[0] = rd32((u32)param_1 + 0x40u);
    (void)tc_call(0x8015a1a0u, &a);
    a.r[0] = rd32((u32)param_1 + 0x30u);
    (void)tc_call(0x8015d908u, &a);
    (void)tc_call(0x802151fcu, &a);
    a.r[0] = rd32((u32)param_1 + 0x48u);
    r3 = tc_call(0x800ae038u, &a);
    if (r3 == 0u) {
        a.r[0] = rd32((u32)param_1 + 0x48u);
        (void)tc_call(0x800ae138u, &a);
    }
    a.r[0] = rd32((u32)param_1 + 0x30u);
    (void)tc_call(0x8015d910u, &a);
    a.r[0] = 0u;
    (void)tc_call(0x8004ca7cu, &a);
    a.r[0] = rd32((u32)param_1 + 0x24u);
    (void)tc_call(0x80114e8cu, &a);
    return;
}

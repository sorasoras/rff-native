#include "tc_rt.h"

void fn_8012d034(s32 param_1)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 0x7ccu;
    (void)tc_call(0x800f8388u, &a);
    r3 = rd32((u32)param_1 + 0x814u);
    if (r3 != 0u) {
        a.r[0] = r3;
        (void)tc_call(0x801f0ff4u, &a);
        a.r[0] = rd32((u32)param_1 + 0x814u);
        a.r[1] = 1u;
        (void)tc_call(0x801f0de8u, &a);
        wr32((u32)param_1 + 0x814u, 0u);
    }
    r31 = (u32)param_1 + 0x3cu;
    r30 = 0u;
    do {
        a.r[0] = r31;
        (void)tc_call(0x8012da30u, &a);
        r30 = r30 + 1u;
        r31 = r31 + 0x114u;
    } while ((s32)r30 < 7);
    a.r[0] = 0u;
    r3 = tc_call(0x801b3a7cu, &a);
    a.r[0] = r3;
    a.r[1] = rd32((u32)param_1 + 0x38u);
    (void)tc_call(0x801b3a38u, &a);
    return;
}

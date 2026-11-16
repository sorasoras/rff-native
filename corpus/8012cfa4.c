#include "tc_rt.h"

void fn_8012cfa4(s32 param_1)
{
    u32 r30 = 0, r31 = 0;
    TcArgs a = {0};
    a.r[0] = rd32((u32)param_1 + 0x34u);
    a.r[1] = rd32((u32)param_1 + 0x2cu);
    a.r[2] = 1u;
    (void)tc_call(0x800f8f10u, &a);
    r31 = (u32)param_1 + 0x3cu;
    r30 = 0u;
    while ((s32)r30 < (s32)rd32((u32)param_1 + 0xcu)) {
        a.r[0] = r31;
        (void)tc_call(0x8012dc48u, &a);
        r31 = r31 + 0x114u;
        r30 = r30 + 1u;
    }
    a.r[0] = rd32((u32)param_1 + 0x830u);
    a.r[1] = rd32((u32)param_1 + 0x82cu);
    a.r[2] = 1u;
    (void)tc_call(0x800f8f10u, &a);
    a.r[0] = rd32((u32)param_1 + 0x888u);
    a.r[1] = rd32((u32)param_1 + 0x884u);
    a.r[2] = 1u;
    (void)tc_call(0x800f8f10u, &a);
    return;
}

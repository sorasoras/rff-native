#include "tc_rt.h"

void fn_801ffecc(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x9c8u;
    (void)tc_call(0x8019124cu, &a);
    r3 = rd32((u32)param_1 + 0x68u);
    if (r3 != 0u) {
        a.r[0] = r3;
        (void)tc_call(0x80200ee0u, &a);
    }
    r3 = rd32((u32)param_1 + 0x28u);
    if (r3 != 0u) {
        a.r[0] = r3;
        (void)tc_call(0x8020145cu, &a);
    }
    return;
}

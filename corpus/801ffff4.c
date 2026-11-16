#include "tc_rt.h"

void fn_801ffff4(s32 param_1)
{
    u32 r0 = 0;
    TcArgs a = {0};
    r0 = rd32((u32)param_1 + 0x68u);
    if (r0 != 0u) {
        a.r[0] = r0;
        (void)tc_call(0x80200e6cu, &a);
    }
    a.r[0] = rd32((u32)param_1 + 0x1cu) + 4u;
    a.r[1] = 0xau;
    (void)tc_call(0x800f8544u, &a);
    return;
}

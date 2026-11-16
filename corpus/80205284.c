#include "tc_rt.h"

void fn_80205284(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = rd32(rd32((u32)param_1 + 0x1cu) + 0x1cu) + 0xb98u;
    a.r[1] = 0u;
    (void)tc_call(0x8020f18cu, &a);
    a.r[0] = rd32(rd32((u32)param_1 + 0x1cu) + 0x1cu) + 0xc08u;
    a.r[1] = 0xau;
    (void)tc_call(0x8020f18cu, &a);
    a.r[0] = rd32((u32)param_1 + 0x1cu);
    r3 = tc_call(0x80200098u, &a);
    a.r[0] = r3;
    a.r[1] = 1u;
    (void)tc_call(0x8011a004u, &a);
    return;
}

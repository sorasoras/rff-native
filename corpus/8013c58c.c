#include "tc_rt.h"

u32 fn_8013c58c(s32 param_1)
{
    u32 r3 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x198u;
    a.r[1] = 0u;
    (void)tc_call(0x8011a004u, &a);
    a.r[0] = rd32((u32)param_1 + 0x1cu);
    r3 = tc_call(0x8013a760u, &a);
    f1 = tc_lastf();
    wr32(rd32((u32)param_1 + 0x1cu) + 0x588u, 0u);
    a.r[0] = r3;
    a.r[1] = rd32((u32)param_1 + 0x1cu) + 0x198u;
    a.r[2] = 0u;
    a.f[0] = f1;
    (void)tc_call(rd32(rd32(r3 + 0x28u) + 0xcu), &a);
    return 1u;
}

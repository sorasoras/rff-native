#include "tc_rt.h"

u32 fn_801337cc(s32 param_1)
{
    u32 r3 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = rd32((u32)param_1 + 0x24u);
    r3 = tc_call(0x800ff744u, &a);
    f1 = tc_lastf();
    if (r3 != 0u) {
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = rd32((u32)param_1 + 0x24u);
        a.r[1] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        (void)tc_call(0x800ff574u, &a);
        a.r[0] = rd32((u32)param_1 + 0x20u) + 0x20u;
        a.r[1] = 1u;
        (void)tc_call(0x800f8544u, &a);
        a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x48u;
        a.r[1] = 0u;
        (void)tc_call(0x8011a004u, &a);
    }
    return 1u;
}

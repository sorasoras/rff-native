#include "tc_rt.h"

void fn_8013ad20(s32 param_1)
{
    u32 r4 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r4 = rd32((u32)param_1 + 0x5f0u) + 1u;
    if ((s32)r4 >= 4) {
        r4 = 0u;
    }
    wr32((u32)param_1 + 0x5f4u, r4);
    a.r[0] = (u32)param_1 + 0x54u;
    a.r[1] = r4;
    f1 = tc_callf(0x8013bc70u, &a);
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    a.r[0] = rd32((u32)param_1 + ((rd32((u32)param_1 + 0x5f4u) << 2u) & 0xfffffffcu) + 0x44u);
    a.r[1] = 1u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.r[6] = 0u;
    a.r[7] = 0u;
    (void)tc_call(0x8013ba88u, &a);
    a.r[0] = rd32((u32)param_1 + ((rd32((u32)param_1 + 0x5f0u) << 2u) & 0xfffffffcu) + 0x44u);
    (void)tc_call(0x8013ba40u, &a);
    a.r[0] = rd32((u32)param_1 + ((rd32((u32)param_1 + 0x5f4u) << 2u) & 0xfffffffcu) + 0x44u);
    (void)tc_call(0x8013b9f8u, &a);
    a.r[0] = (u32)param_1 + 0xf4u;
    a.r[1] = 0x8033a408u;
    (void)tc_call(0x8013b0dcu, &a);
    a.r[0] = (u32)param_1 + 0x198u;
    a.r[1] = 1u;
    (void)tc_call(0x8011a004u, &a);
    return;
}

#include "tc_rt.h"

void fn_80193bf8(s32 param_1)
{
    u32 r3 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32((u32)param_1 + 0x1a4u, 1u);
    wr32((u32)param_1 + 0x1a8u, 1u);
    a.r[0] = 0u;
    r3 = tc_call(0x801b3a7cu, &a);
    a.r[0] = r3;
    a.r[1] = 0xd0u;
    r3 = tc_call(0x801b39d8u, &a);
    r31 = r3;
    if (r3 != 0u) {
        a.r[0] = r3;
        (void)tc_call(0x8016172cu, &a);
    }
    wr32((u32)param_1 + 0x1a0u, r31);
    a.r[0] = (u32)param_1 + 0x38u;
    f1 = tc_callf(0x801614ccu, &a);
    wr32(rd32((u32)param_1 + 0x2cu), rd32((u32)param_1 + 0x1a0u));
    wr32(rd32((u32)param_1 + 0x1a0u) + 0xa8u, (u32)param_1 + 0x38u);
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    a.r[0] = 0x80571250u;
    a.r[1] = rd32((u32)param_1 + 0x34u);
    a.r[2] = 0x63u;
    a.r[5] = 0u;
    a.r[6] = 0u;
    a.r[7] = 0u;
    r3 = tc_call(0x801033bcu, &a);
    r31 = r3;
    a.r[0] = (u32)param_1;
    a.r[1] = 0u;
    a.r[2] = r3;
    (void)tc_call(0x801894c8u, &a);
    wr32(rd32((u32)param_1 + 0x1a0u) + 0x54u, r31);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x80197454u, &a);
    return;
}

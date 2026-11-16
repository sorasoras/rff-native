#include "tc_rt.h"

void fn_8013af14(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r5 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    r5 = rd32(0x805743b4u);
    r0 = rd32((u32)param_1 + 0x80u);
    wr32(0x817fdfe8u, rd32(0x805743b0u));
    r0 = (r0 << 2u) & 0xfffffffcu;
    wr32(0x817fdfecu, r5);
    a.r[0] = rd32(r0 - 0x7e802018u);
    r3 = tc_call(0x800f92e8u, &a);
    f1 = tc_lastf();
    wr32((u32)param_1 + 0x2cu, r3);
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    a.r[0] = r3;
    a.r[1] = 1u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.r[6] = 0u;
    a.r[7] = 0u;
    (void)tc_call(0x800fef2cu, &a);
    a.r[0] = (u32)param_1 + 0x30u;
    a.r[1] = rd32((u32)param_1 + 0x2cu);
    (void)tc_call(0x801f0e3cu, &a);
    a.r[0] = 0x49u;
    r3 = tc_call(0x801bfa94u, &a);
    r30 = r3;
    a.r[0] = 0x68u;
    r3 = tc_call(0x801ed134u, &a);
    f1 = tc_lastf();
    r31 = r3;
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = r30;
        a.r[2] = 0xffffffffu;
        f1 = tc_callf(0x801ec1f4u, &a);
    }
    wr32((u32)param_1 + 0x84u, r31);
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    a.r[0] = 0x80571250u;
    a.r[1] = rd32((u32)param_1 + 0x2cu);
    a.r[2] = 0x8033a40eu;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.r[6] = 0u;
    a.r[7] = 0u;
    r3 = tc_call(0x801032a4u, &a);
    wr32((u32)param_1 + 0x88u, r3);
    return;
}

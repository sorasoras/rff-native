#include "tc_rt.h"

void fn_801bae94(s32 param_1)
{
    u32 r3 = 0, r4 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = rd32(rd32((u32)param_1 + 0x1cu) + 0x24u);
    a.r[1] = 0x8033b812u;
    a.r[2] = 0u;
    r3 = tc_call(0x800fe848u, &a);
    f1 = tc_lastf();
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
    (void)tc_call(0x800ff574u, &a);
    r3 = rd32((u32)param_1 + 0x1cu);
    r4 = rd32(r3 + 0x28u);
    r3 = rd32(r3 + 0x1cu);
    r4 = rd32(r4 + 0x2cu);
    r3 = r3 + 0x44cu;
    r4 = rd32(r4);
    r4 = (u32)rd16(r4 + 0xbcu);
    a.r[0] = r3;
    a.r[1] = r4;
    (void)tc_call(0x8014b810u, &a);
    a.r[0] = rd32(rd32(0x80571398u) + 0x38u);
    a.r[1] = rd32(rd32(rd32(rd32((u32)param_1 + 0x1cu) + 0x28u) + 0x2cu)) + 0xbcu;
    (void)tc_call(0x801c1334u, &a);
    a.r[0] = rd32(rd32((u32)param_1 + 0x1cu) + 0x1cu) + 0xb98u;
    a.r[1] = 0u;
    (void)tc_call(0x8020f18cu, &a);
    a.r[0] = rd32(rd32((u32)param_1 + 0x1cu) + 0x1cu) + 0xbd0u;
    a.r[1] = 0x19u;
    (void)tc_call(0x8020f18cu, &a);
    a.r[0] = rd32(rd32((u32)param_1 + 0x1cu) + 0x1cu) + 0xc08u;
    a.r[1] = 0x19u;
    (void)tc_call(0x8020f18cu, &a);
    return;
}

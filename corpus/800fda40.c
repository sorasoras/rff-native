#include "tc_rt.h"

void fn_800fda40(s32 param_1)
{
    u32 r5 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = rd32(rd32((u32)param_1 + 0x1cu) + 0x1cu) + 0x5c8u;
    a.r[1] = rd32(rd32((u32)param_1 + 0x20u) + 0x5cu);
    f1 = tc_callf(0x80188bf4u, &a);
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    a.r[0] = rd32(rd32((u32)param_1 + 0x1cu) + 0x1cu) + 0x44u;
    a.r[1] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.r[6] = 0u;
    a.r[7] = 0u;
    (void)tc_call(0x80119edcu, &a);
    r5 = rd32((u32)param_1 + 0x1cu);
    wr32((u32)param_1 + 0x28u, rd32(rd32(r5 + 0x1cu) + 0x42cu));
    wr32((u32)param_1 + 0x24u, rd32(rd32(r5 + 0x1cu) + 0x430u));
    a.r[0] = rd32(r5 + 0x1cu) + 0xb98u;
    a.r[1] = 0xeu;
    (void)tc_call(0x8020f18cu, &a);
    a.r[0] = rd32(rd32((u32)param_1 + 0x1cu) + 0x1cu) + 0xc08u;
    a.r[1] = 0xau;
    (void)tc_call(0x8020f18cu, &a);
    return;
}

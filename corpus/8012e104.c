#include "tc_rt.h"

void fn_8012e104(s32 param_1)
{
    u32 r3 = 0, r4 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = 0x804b9da0u;
    a.r[1] = 0x2721u;
    (void)tc_call(0x8010a75cu, &a);
    a.r[0] = rd32((u32)param_1 + 0x1cu);
    a.r[1] = 0u;
    a.r[2] = 1u;
    f1 = tc_callf(0x8012c270u, &a);
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x98u;
    a.r[1] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.r[6] = 0u;
    a.r[7] = 0u;
    (void)tc_call(0x80119edcu, &a);
    a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x7f4u;
    a.r[1] = 0u;
    (void)tc_call(0x8020f18cu, &a);
    r3 = 0xabu;
    r4 = rd32(rd32(0x80571398u) + 0x1a0u);
    if ((s32)r4 >= 0 && (s32)r4 < 70) {
        a.r[0] = 0x8049c500u;
        a.r[1] = r4;
        r3 = tc_call(0x800c8794u, &a);
    }
    if ((s32)r3 < 171) {
        a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x82cu;
        a.r[1] = 0xau;
        (void)tc_call(0x8020f18cu, &a);
        a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x864u;
        a.r[1] = 1u;
        (void)tc_call(0x8020f18cu, &a);
    } else {
        a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x82cu;
        a.r[1] = 0x19u;
        (void)tc_call(0x8020f18cu, &a);
        a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x864u;
        a.r[1] = 0x19u;
        (void)tc_call(0x8020f18cu, &a);
    }
    return;
}

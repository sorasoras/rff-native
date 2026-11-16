#include "tc_rt.h"

s32 fn_80138c7c(s32 param_1)
{
    u32 r3 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 0x584u;
    a.r[1] = 1u;
    r3 = tc_call(0x800f857cu, &a);
    r30 = r3;
    a.r[0] = (u32)param_1 + 0x44cu;
    (void)tc_call(0x801399c8u, &a);
    a.r[0] = (u32)param_1 + 0x44u;
    (void)tc_call(0x80119f48u, &a);
    a.r[0] = (u32)param_1 + (rd32((u32)param_1 + 0x430u) * 0x54u) + 0x488u;
    r3 = tc_call(0x80139e14u, &a);
    wr32((u32)param_1 + 0x798u, r3);
    r31 = (u32)param_1 + 0x488u;
    r29 = 0u;
    do {
        a.r[0] = r31;
        (void)tc_call(0x80139e1cu, &a);
        r29 = r29 + 1u;
        r31 = r31 + 0x54u;
    } while ((s32)r29 < 3);
    a.r[0] = (u32)param_1 + 0x5c4u;
    (void)tc_call(0x80190ff8u, &a);
    r3 = rd32((u32)param_1 + 0x794u);
    if (r3 != 0u) {
        a.r[0] = r3;
        (void)tc_call(0x800fec80u, &a);
    }
    f1 = tc_callf(0x80103018u, &a);
    a.r[0] = (u32)param_1;
    a.r[1] = tc_lastr4();
    a.f[0] = f1;
    (void)tc_call(rd32(rd32((u32)param_1 + 0x40u) + 0x1cu), &a);
    if (r30 == 0u) {
        a.r[0] = rd32(0x80571398u);
        a.r[1] = rd32((u32)param_1 + 0x7a0u);
        (void)tc_call(0x801bfdf0u, &a);
        a.r[0] = rd32(0x80571398u);
        a.r[1] = 0xau;
        (void)tc_call(0x801bfdf8u, &a);
    }
    return (s32)r30;
}

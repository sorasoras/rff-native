#include "tc_rt.h"

s32 fn_800f9e74(s32 param_1)
{
    u32 r3 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    r3 = tc_call(0x800f9e6cu, &a);
    if (r3 == 0u) {
        r3 = 1u;
    } else {
        a.r[0] = (u32)param_1 + 4u;
        a.r[1] = 1u;
        r3 = tc_call(0x800f857cu, &a);
        r31 = r3;
        a.r[0] = (u32)param_1 + 0xc44u;
        a.r[1] = 1u;
        (void)tc_call(0x801f0fa0u, &a);
        a.r[0] = (u32)param_1 + 0x9b0u;
        (void)tc_call(0x80209050u, &a);
        a.r[0] = (u32)param_1 + 0xb98u;
        (void)tc_call(0x8020f030u, &a);
        a.r[0] = (u32)param_1 + 0xbd0u;
        (void)tc_call(0x8020f030u, &a);
        a.r[0] = (u32)param_1 + 0xc08u;
        f1 = tc_callf(0x8020f030u, &a);
        a.r[0] = (u32)param_1 + 0x5c8u;
        a.r[1] = tc_lastr4();
        a.f[0] = f1;
        (void)tc_call(rd32(rd32((u32)param_1 + 0x5f0u) + 0x18u), &a);
        a.r[0] = (u32)param_1 + 0x44u;
        (void)tc_call(0x80119f48u, &a);
        a.r[0] = (u32)param_1 + 0x44cu;
        (void)tc_call(0x8014b36cu, &a);
        a.r[0] = (u32)param_1 + 0x9c8u;
        (void)tc_call(0x80190ff8u, &a);
        f1 = tc_callf(0x80103018u, &a);
        a.r[0] = (u32)param_1;
        a.r[1] = tc_lastr4();
        a.f[0] = f1;
        (void)tc_call(rd32(rd32((u32)param_1 + 0x40u) + 0x1cu), &a);
        if (r31 == 0u) {
            a.r[0] = 0x804b9da0u;
            a.r[1] = 9u;
            (void)tc_call(0x8010a75cu, &a);
        }
        r3 = r31;
    }
    return (s32)r3;
}

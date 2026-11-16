#include "tc_rt.h"

u32 fn_80124ee4(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r0 = rd32((u32)param_1 + 0x7b0u);
    if (r0 != 0u) {
        a.r[0] = r0;
        (void)tc_call(0x800fec80u, &a);
    }
    a.r[0] = (u32)param_1 + 4u;
    a.r[1] = 1u;
    r3 = tc_call(0x800f857cu, &a);
    f1 = tc_lastf();
    r30 = r3;
    r3 = rd32((u32)param_1 + 0xc48u);
    a.r[0] = r3;
    a.r[1] = tc_lastr4();
    a.r[2] = 0u;
    a.f[0] = f1;
    f1 = tc_callf(rd32(rd32(r3 + 0x28u) + 0x18u), &a);
    r3 = rd32((u32)param_1 + 0xc4cu);
    a.r[0] = r3;
    a.r[1] = tc_lastr4();
    a.r[2] = 0u;
    a.f[0] = f1;
    (void)tc_call(rd32(rd32(r3 + 0x28u) + 0x18u), &a);
    r31 = rd32((u32)param_1 + 0xc48u);
    a.r[0] = (u32)param_1;
    r3 = tc_call(0x8012542cu, &a);
    if (r3 == r31) {
        wr32(r31 + 0x454u, 1u);
        wr32(rd32((u32)param_1 + 0xc4cu) + 0x454u, 0u);
    } else {
        wr32(r31 + 0x454u, 0u);
        wr32(rd32((u32)param_1 + 0xc4cu) + 0x454u, 1u);
    }
    a.r[0] = rd32((u32)param_1 + 0xc4cu);
    r3 = tc_call(0x80126278u, &a);
    wr32(rd32(0x80571398u) + 0xc8u, r3);
    a.r[0] = rd32((u32)param_1 + 0xc4cu);
    r3 = tc_call(0x8012630cu, &a);
    wr32(rd32(0x80571398u) + 0x1a4u, r3);
    wr32(rd32(0x80571398u) + 0x1a8u, rd32(rd32((u32)param_1 + 0xc4cu) + 0xcu));
    a.r[0] = (u32)param_1 + 0x44cu;
    (void)tc_call(0x8014b36cu, &a);
    a.r[0] = (u32)param_1 + 0x44u;
    (void)tc_call(0x80119f48u, &a);
    a.r[0] = (u32)param_1 + 0x5c8u;
    f1 = tc_callf(0x80209050u, &a);
    a.r[0] = (u32)param_1 + 0x7b4u;
    a.r[1] = tc_lastr4();
    a.r[2] = 0u;
    a.f[0] = f1;
    (void)tc_call(rd32(rd32((u32)param_1 + 0x7dcu) + 0x18u), &a);
    a.r[0] = (u32)param_1 + 0x5e0u;
    (void)tc_call(0x80190ff8u, &a);
    a.r[0] = (u32)param_1 + 0xb9cu;
    (void)tc_call(0x8020f030u, &a);
    a.r[0] = (u32)param_1 + 0xbd4u;
    (void)tc_call(0x8020f030u, &a);
    a.r[0] = (u32)param_1 + 0xc0cu;
    (void)tc_call(0x8020f030u, &a);
    f1 = tc_callf(0x80103018u, &a);
    a.r[0] = (u32)param_1;
    a.r[1] = tc_lastr4();
    a.r[2] = 0u;
    a.f[0] = f1;
    (void)tc_call(rd32(rd32((u32)param_1 + 0x40u) + 0x1cu), &a);
    return r30;
}

#include "tc_rt.h"

void fn_8014b12c(s32 param_1, u32 param_2, u32 param_3)
{
    u32 r3 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = 0x80571250u;
    a.r[1] = param_2;
    a.r[2] = 0x8033a550u;
    r3 = tc_call(0x80103258u, &a);
    wr32((u32)param_1 + 0x4cu, r3);
    wr32((u32)param_1 + 0x168u, param_3);
    wr32((u32)param_1 + 0x16cu, param_3);
    a.r[0] = 0x622u;
    r3 = tc_call(0x800f92e8u, &a);
    f1 = tc_lastf();
    wr32((u32)param_1 + 0xcu, r3);
    wr32(r3 + 0xd4u, 0u);
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    a.r[0] = (u32)param_1;
    a.r[1] = 2u;
    a.r[2] = 6u;
    a.r[5] = 0u;
    a.r[6] = 0u;
    a.r[7] = 0u;
    f1 = tc_callf(0x8014b268u, &a);
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    a.r[0] = rd32((u32)param_1 + 0xcu);
    a.r[1] = 1u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.r[6] = 0u;
    a.r[7] = 0u;
    (void)tc_call(0x800fef2cu, &a);
    a.r[0] = 0x20u;
    r3 = tc_call(0x800f80f8u, &a);
    r31 = r3;
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = 0u;
        (void)tc_call(0x800f8170u, &a);
        wr32(r31 + 0x1cu, (u32)param_1);
        wr32(r31, 0x803655d0u);
    }
    a.r[0] = (u32)param_1 + 0x10u;
    a.r[1] = r31;
    (void)tc_call(0x800f8658u, &a);
    a.r[0] = 0x20u;
    r3 = tc_call(0x800f80f8u, &a);
    r31 = r3;
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = 0u;
        (void)tc_call(0x800f8170u, &a);
        wr32(r31 + 0x1cu, (u32)param_1);
        wr32(r31, 0x803655acu);
    }
    a.r[0] = (u32)param_1 + 0x10u;
    a.r[1] = r31;
    (void)tc_call(0x800f8658u, &a);
    a.r[0] = 0x20u;
    r3 = tc_call(0x800f80f8u, &a);
    r31 = r3;
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = 0u;
        (void)tc_call(0x800f8170u, &a);
        wr32(r31 + 0x1cu, (u32)param_1);
        wr32(r31, 0x80365588u);
    }
    a.r[0] = (u32)param_1 + 0x10u;
    a.r[1] = r31;
    (void)tc_call(0x800f8658u, &a);
    a.r[0] = (u32)param_1 + 0x10u;
    a.r[1] = 0u;
    (void)tc_call(0x800f8348u, &a);
    wr32((u32)param_1 + 0x174u, 1u);
    return;
}

#include "tc_rt.h"

void fn_8012c9c8(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = rd32((u32)param_1 + 0x30u);
    r3 = tc_call(0x800f93bcu, &a);
    f1 = tc_lastf();
    wr32((u32)param_1 + 0x2cu, r3);
    wr32((u32)param_1 + 0x810u, 0u);
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    a.r[0] = r3;
    a.r[1] = 0u;
    a.r[2] = 1u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.r[6] = 0u;
    a.r[7] = 0u;
    (void)tc_call(0x800fed0cu, &a);
    a.r[0] = 0x50u;
    r3 = tc_call(0x801f0d34u, &a);
    r31 = r3;
    if (r3 != 0u) {
        a.r[0] = r3;
        (void)tc_call(0x801f0da4u, &a);
    }
    wr32((u32)param_1 + 0x814u, r31);
    a.r[0] = r31;
    a.r[1] = rd32((u32)param_1 + 0x2cu);
    f1 = tc_callf(0x801f0e3cu, &a);
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
    a.r[2] = 0x8033a014u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.r[6] = 0u;
    a.r[7] = 0u;
    r3 = tc_call(0x801032a4u, &a);
    f1 = tc_lastf();
    wr32((u32)param_1 + 0x830u, r3);
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
    a.r[2] = 0x8033a01eu;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.r[6] = 0u;
    a.r[7] = 0u;
    r3 = tc_call(0x801032a4u, &a);
    wr32((u32)param_1 + 0x888u, r3);
    a.r[0] = 0x20u;
    r3 = tc_call(0x800f80f8u, &a);
    r31 = r3;
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = 0u;
        (void)tc_call(0x800f8170u, &a);
        wr32(r31 + 0x1cu, (u32)param_1);
        wr32(r31, 0x803636a8u);
    }
    a.r[0] = (u32)param_1 + 0x7ccu;
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
        wr32(r31, 0x80363684u);
    }
    a.r[0] = (u32)param_1 + 0x7ccu;
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
        wr32(r31, 0x80363660u);
    }
    a.r[0] = (u32)param_1 + 0x7ccu;
    a.r[1] = r31;
    (void)tc_call(0x800f8658u, &a);
    a.r[0] = (u32)param_1 + 0x7ccu;
    a.r[1] = 2u;
    (void)tc_call(0x800f8348u, &a);
    r0 = rd32((u32)param_1 + 0xcu);
    r3 = 1u;
    if (r0 == 7u) {
        r3 = 5u;
    } else {
        if (r0 == 6u) {
            r3 = 5u;
        }
    }
    wr32((u32)param_1 + 0x7c8u, r3);
    a.r[0] = rd32((u32)param_1 + 0x38u);
    a.r[1] = 0x644u;
    a.r[2] = 0x8012cb64u;
    a.r[3] = (u32)param_1;
    (void)tc_call(0x801e5b50u, &a);
    return;
}

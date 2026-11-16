#include "tc_rt.h"

void fn_8012519c(s32 param_1)
{
    u32 r0 = 0, r3 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r0 = rd32((u32)param_1 + 0xc48u);
    if (r0 != 0u) {
        a.r[0] = r0;
        f1 = tc_callf(0x80125e74u, &a);
        r3 = rd32((u32)param_1 + 0xc48u);
        if (r3 != 0u) {
            a.r[0] = r3;
            a.r[1] = 1u;
            a.f[0] = f1;
            (void)tc_call(rd32(rd32(r3 + 0x28u) + 8u), &a);
        }
    }
    r3 = rd32((u32)param_1 + 0xc4cu);
    if (r3 != 0u) {
        a.r[0] = r3;
        f1 = tc_callf(0x80125e74u, &a);
        r3 = rd32((u32)param_1 + 0xc4cu);
        if (r3 != 0u) {
            a.r[0] = r3;
            a.r[1] = 1u;
            a.f[0] = f1;
            (void)tc_call(rd32(rd32(r3 + 0x28u) + 8u), &a);
        }
    }
    wr32((u32)param_1 + 0xc48u, 0u);
    wr32((u32)param_1 + 0xc4cu, 0u);
    a.r[0] = (u32)param_1 + 4u;
    (void)tc_call(0x800f8388u, &a);
    (void)tc_call(0x8020f160u, &a);
    (void)tc_call(0x8020f160u, &a);
    f1 = tc_callf(0x8020f160u, &a);
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.r[6] = 0u;
    a.r[7] = 0u;
    f1 = tc_callf(0x80191368u, &a);
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    a.r[0] = (u32)param_1 + 0x44u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.r[6] = 0u;
    a.r[7] = 0u;
    (void)tc_call(0x80119f2cu, &a);
    a.r[0] = (u32)param_1 + 0x44cu;
    (void)tc_call(0x8014b3bcu, &a);
    a.r[0] = 0x80571250u;
    (void)tc_call(0x80103074u, &a);
    a.r[0] = 0x804b9d30u;
    (void)tc_call(0x80100404u, &a);
    return;
}

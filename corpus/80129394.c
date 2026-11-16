#include "tc_rt.h"

u32 fn_80129394(s32 param_1)
{
    u32 r3 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    (void)tc_call(0x80103018u, &a);
    a.r[0] = (u32)param_1 + 0x1a0u;
    (void)tc_call(0x8012a354u, &a);
    a.r[0] = (u32)param_1 + 0x5f0u;
    a.r[1] = 1u;
    r3 = tc_call(0x800f857cu, &a);
    r31 = r3;
    a.r[0] = (u32)param_1 + 0x44u;
    (void)tc_call(0x801e6364u, &a);
    a.r[0] = (u32)param_1 + 0xb8u;
    (void)tc_call(0x801e6364u, &a);
    a.r[0] = (u32)param_1 + 0x12cu;
    (void)tc_call(0x801e6364u, &a);
    a.r[0] = (u32)param_1 + 0x1e8u;
    (void)tc_call(0x80119f48u, &a);
    a.r[0] = (u32)param_1 + 0x638u;
    a.r[1] = 1u;
    f1 = tc_callf(0x801f0fa0u, &a);
    a.r[0] = (u32)param_1;
    a.r[1] = tc_lastr4();
    a.f[0] = f1;
    (void)tc_call(rd32(rd32((u32)param_1 + 0x40u) + 0x1cu), &a);
    if (r31 == 0u) {
        wr32(0x80571178u, 8u);
        r3 = rd32(0x80571398u);
        wr32(0x8057117cu, 0u);
        a.r[0] = r3;
        a.r[1] = 2u;
        (void)tc_call(0x801bfdf0u, &a);
        a.r[0] = rd32(0x80571398u);
        a.r[1] = 2u;
        (void)tc_call(0x801bfdf8u, &a);
        r3 = 0u;
    } else {
        r3 = 1u;
        wr32((u32)param_1 + 0x688u, rd32((u32)param_1 + 0x688u) + 1u);
    }
    return r3;
}

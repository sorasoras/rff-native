#include "tc_rt.h"

u32 fn_800fb270(s32 param_1)
{
    u32 r3 = 0, r4 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 0x34u;
    a.r[1] = 1u;
    r3 = tc_call(0x800f857cu, &a);
    f1 = tc_lastf();
    r4 = tc_lastr4();
    if (r3 == 0u) {
        r3 = 0u;
    } else {
        r3 = rd32((u32)param_1 + 0x24u);
        if (r3 != 0u) {
            a.r[0] = r3;
            a.r[1] = r4;
            a.f[0] = f1;
            f1 = tc_callf(rd32(rd32(r3 + 0x28u) + 0x18u), &a);
            r4 = tc_lastr4();
        }
        r3 = rd32((u32)param_1 + 0x28u);
        if (r3 != 0u) {
            a.r[0] = r3;
            a.r[1] = r4;
            a.f[0] = f1;
            (void)tc_call(rd32(rd32(r3 + 0x28u) + 0x18u), &a);
        }
        a.r[0] = (u32)param_1 + 0x70u;
        (void)tc_call(0x80210928u, &a);
        a.r[0] = (u32)param_1 + 0x70u;
        (void)tc_call(0x8021076cu, &a);
        a.r[0] = (u32)param_1;
        (void)tc_call(0x800fa8b4u, &a);
        r3 = 1u;
    }
    return r3;
}

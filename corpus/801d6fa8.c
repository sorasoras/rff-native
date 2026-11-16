#include "tc_rt.h"

u32 fn_801d6fa8(s32 param_1)
{
    u32 r0 = 0, r3 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    r3 = tc_call(0x801d55f8u, &a);
    a.f[0] = (f64)rdf32(r3 + 0x20u);
    a.f[1] = (f64)rdf32(0x8057600cu);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x801d5560u, &a);
    r0 = rd32((u32)param_1 + 0x70u);
    if ((s32)r0 >= 22 && (s32)r0 <= 53) {
        a.r[0] = (u32)param_1;
        a.r[1] = 3u;
        (void)tc_call(0x801d5610u, &a);
    } else {
        a.r[0] = (u32)param_1;
        a.r[1] = 3u;
        (void)tc_call(0x801d561cu, &a);
    }
    if (rd32((u32)param_1 + 0x70u) == 0x16u) {
        a.r[0] = (u32)param_1;
        r3 = tc_call(0x801d55e4u, &a);
        a.r[0] = 0x804b9da0u;
        a.r[1] = 0x23f7u;
        a.r[2] = r3;
        (void)tc_call(0x8010a794u, &a);
    }
    r0 = rd32((u32)param_1 + 0x70u);
    if ((s32)r0 >= 27 && (s32)r0 < 53) {
        a.r[0] = (u32)param_1;
        a.r[1] = 0x9cu;
        a.r[2] = 0x15u;
        a.r[3] = 0x804890c8u;
        a.r[4] = 1u;
        a.r[5] = 1u;
        (void)tc_call(0x801d5628u, &a);
    } else {
        if ((s32)r0 >= 53) {
            a.r[0] = (u32)param_1;
            (void)tc_call(0x801d5a0cu, &a);
        }
    }
    wr32((u32)param_1 + 0x70u, rd32((u32)param_1 + 0x70u) + 1u);
    return 1u;
}

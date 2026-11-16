#include "tc_rt.h"

u32 fn_801d6944(s32 param_1)
{
    u32 r0 = 0, r3 = 0;
    TcArgs a = {0};
    r0 = rd32((u32)param_1 + 0x70u);
    if ((s32)r0 >= 6 && (s32)r0 <= 22) {
        a.r[0] = (u32)param_1;
        r3 = tc_call(0x801d55f8u, &a);
        a.f[0] = (f64)rdf32(r3 + 0x14u);
        a.r[0] = (u32)param_1;
        (void)tc_call(0x801d55ccu, &a);
    } else {
        a.f[0] = (f64)rdf32(0x8057600cu);
        a.r[0] = (u32)param_1;
        (void)tc_call(0x801d55ccu, &a);
    }
    r0 = rd32((u32)param_1 + 0x70u);
    if ((s32)r0 >= 7 && (s32)r0 <= 17) {
        a.r[0] = (u32)param_1;
        a.r[1] = 0u;
        (void)tc_call(0x801d5610u, &a);
    } else {
        a.r[0] = (u32)param_1;
        a.r[1] = 0u;
        (void)tc_call(0x801d561cu, &a);
    }
    r0 = rd32((u32)param_1 + 0x70u);
    if ((s32)r0 >= 7 && (s32)r0 < 14) {
        a.r[0] = (u32)param_1;
        a.r[1] = 0xd8u;
        a.r[2] = 0xffffffffu;
        a.r[3] = 0x804890c8u;
        a.r[4] = 0u;
        a.r[5] = 1u;
        (void)tc_call(0x801d5628u, &a);
    }
    wr32((u32)param_1 + 0x70u, rd32((u32)param_1 + 0x70u) + 1u);
    return 1u;
}

#include "tc_rt.h"

u32 fn_801d6b1c(s32 param_1)
{
    u32 r0 = 0, r3 = 0;
    TcArgs a = {0};
    if (rd32((u32)param_1 + 0x10u) == 0u) {
        a.r[0] = (u32)param_1;
        (void)tc_call(0x801d5868u, &a);
    }
    r0 = rd32((u32)param_1 + 0x70u);
    if ((s32)r0 >= 12 && (s32)r0 <= 26) {
        a.r[0] = (u32)param_1;
        r3 = tc_call(0x801d55f8u, &a);
        a.f[0] = (f64)rdf32(r3 + 0x18u);
        a.r[0] = (u32)param_1;
        (void)tc_call(0x801d55ccu, &a);
    } else {
        a.f[0] = (f64)rdf32(0x8057600cu);
        a.r[0] = (u32)param_1;
        (void)tc_call(0x801d55ccu, &a);
    }
    if (rd32((u32)param_1 + 0x70u) == 0xbu) {
        a.r[0] = (u32)param_1;
        r3 = tc_call(0x801d55e4u, &a);
        a.r[0] = 0x804b9da0u;
        a.r[1] = 0x23f4u;
        a.r[2] = r3;
        (void)tc_call(0x8010a794u, &a);
    }
    if (rd32((u32)param_1 + 0x70u) == 0x1bu) {
        a.r[0] = (u32)param_1;
        r3 = tc_call(0x801d55e4u, &a);
        a.r[0] = 0x804b9da0u;
        a.r[1] = 0x23f5u;
        a.r[2] = r3;
        (void)tc_call(0x8010a794u, &a);
    }
    r0 = rd32((u32)param_1 + 0x70u);
    if ((s32)r0 >= 11 && (s32)r0 <= 21) {
        a.r[0] = (u32)param_1;
        a.r[1] = 1u;
        (void)tc_call(0x801d5610u, &a);
    } else {
        a.r[0] = (u32)param_1;
        a.r[1] = 1u;
        (void)tc_call(0x801d561cu, &a);
    }
    a.r[0] = (u32)param_1;
    (void)tc_call(0x801d594cu, &a);
    wr32((u32)param_1 + 0x70u, rd32((u32)param_1 + 0x70u) + 1u);
    return 1u;
}

#include "tc_rt.h"

void fn_8016a1f4(u32 param_1, s32 param_2)
{
    u32 r3 = 0, r5 = 0, r6 = 0, r7 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = (u32)param_2 + 0x428u;
    a.r[1] = 0u;
    f1 = tc_callf(0x8014c23cu, &a);
    r6 = rd32((u32)param_2 + 0xf78u);
    r5 = rd32((u32)param_2 + 0xe88u);
    r7 = r6 ^ (r6 & 0x4000u);
    r6 = r7 ^ (r7 & 1u);
    wr32((u32)param_2 + 0xf78u, r6);
    wr32((u32)param_2 + 0xe88u, r5 ^ (r5 & 0x2000u));
    a.r[0] = param_1;
    a.r[1] = (u32)param_2;
    a.r[2] = r5;
    a.r[3] = r6;
    a.r[4] = r7;
    a.f[0] = f1;
    (void)tc_call(rd32(rd32(param_1) + 0x38u), &a);
    a.r[0] = param_1;
    a.r[1] = (u32)param_2;
    r3 = tc_call(0x80169d68u, &a);
    a.r[0] = (u32)param_2;
    a.r[1] = r3;
    (void)tc_call(0x800b1d64u, &a);
    return;
}

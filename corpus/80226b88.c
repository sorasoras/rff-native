#include "tc_rt.h"

void fn_80226b88(u32 param_1, u32 param_2)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r8 = 0, r28 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    (void)param_1;
    wr32(0x817fdd20u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff0u, 0u);
    r3 = tc_call(0x802302bcu, &a);
    r31 = rd32(0x80571490u);
    r28 = tc_lastr4();
    r30 = r3;
    if (r31 == 0u) {
        a.r[0] = param_2;
        (void)tc_call(0x80228008u, &a);
    }
    r0 = r30 ^ 0x80000000u;
    if ((0u - (u32)((u64)~r0 + (u64)r0 + (u64)(u32)(((u64)~(rd32(r31 + 8u) ^ 0x80000000u) + (u64)r0 + (u64)(rd32(r31 + 0xcu) <= r28)) >> 0x20ull))) != 0u) {
        r3 = tc_call(0x802302bcu, &a);
        r4 = tc_lastr4();
        r5 = rd32(r31 + 0xcu);
        r8 = r5 - r4;
        r5 = (u32)((u64)~r3 + (u64)rd32(r31 + 8u) + (u64)(r4 <= r5)) ^ 0x80000000u;
        if ((0u - (u32)((u64)~r5 + (u64)r5 + (u64)(u32)(((u64)r5 + 0x7fffffffull + (u64)(r8 >= 0u)) >> 0x20ull))) != 0u) {
            a.r[0] = 0u;
            (void)tc_call(0x80225098u, &a);
        } else {
            if ((0u - (u32)((u64)~r5 + (u64)r5 + (u64)(u32)(((u64)r5 + 0x7fffffffull + (u64)(r8 >= 0x80000000u)) >> 0x20ull))) != 0u) {
                a.r[0] = r8;
                (void)tc_call(0x80225098u, &a);
            } else {
                a.r[0] = 0x7fffffffu;
                (void)tc_call(0x80225098u, &a);
            }
        }
        a.r[0] = param_2;
        (void)tc_call(0x80228008u, &a);
    }
    r3 = rd32(r31 + 0x14u);
    wr32(0x80571490u, r3);
    if (r3 == 0u) {
        wr32(0x80571494u, 0u);
    } else {
        wr32(r3 + 0x10u, 0u);
    }
    r30 = rd32(r31);
    wr32(r31, 0u);
    r4 = 0u - (u32)((u64)(u32)(((u64)~(rd32(r31 + 0x18u) ^ 0x80000000u) + 0x80000000ull + (u64)(rd32(r31 + 0x1cu) <= 0u)) >> 0x20ull) + 0xffffffffull);
    if (r4 != 0u) {
        a.r[0] = r31;
        a.r[1] = r4;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = r30;
        (void)tc_call(0x8022672cu, &a);
    }
    r28 = rd32(0x80571490u);
    if (r28 != 0u) {
        r3 = tc_call(0x802302bcu, &a);
        r4 = tc_lastr4();
        r5 = rd32(r28 + 0xcu);
        r8 = r5 - r4;
        r5 = (u32)((u64)~r3 + (u64)rd32(r28 + 8u) + (u64)(r4 <= r5)) ^ 0x80000000u;
        if ((0u - (u32)((u64)~r5 + (u64)r5 + (u64)(u32)(((u64)r5 + 0x7fffffffull + (u64)(r8 >= 0u)) >> 0x20ull))) != 0u) {
            a.r[0] = 0u;
            (void)tc_call(0x80225098u, &a);
        } else {
            if ((0u - (u32)((u64)~r5 + (u64)r5 + (u64)(u32)(((u64)r5 + 0x7fffffffull + (u64)(r8 >= 0x80000000u)) >> 0x20ull))) != 0u) {
                a.r[0] = r8;
                (void)tc_call(0x80225098u, &a);
            } else {
                a.r[0] = 0x7fffffffu;
                (void)tc_call(0x80225098u, &a);
            }
        }
    }
    (void)tc_call(0x8022eff0u, &a);
    a.r[0] = 0x817fdd28u;
    (void)tc_call(0x80228148u, &a);
    a.r[0] = 0x817fdd28u;
    f1 = tc_callf(0x80227f20u, &a);
    a.r[0] = r31;
    a.r[1] = param_2;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.f[0] = f1;
    (void)tc_call(r30, &a);
    a.r[0] = 0x817fdd28u;
    (void)tc_call(0x80228148u, &a);
    a.r[0] = param_2;
    (void)tc_call(0x80227f20u, &a);
    (void)tc_call(0x8022f02cu, &a);
    (void)tc_call(0x8022f538u, &a);
    a.r[0] = param_2;
    (void)tc_call(0x80228008u, &a);
    return;
}

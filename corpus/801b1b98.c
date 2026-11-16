#include "tc_rt.h"

static f64 px_b2f(u64 x)
{
    union { f64 d; u64 b; } v;
    v.b = x;
    return v.d;
}

u32 fn_801b1b98(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0;
    TcArgs a = {0};
    r0 = rd32(0x8057118cu) & 0xfffffff7u;
    wr32(0x817fdff0u, 0x43300000u);
    wr32(0x8057118cu, r0);
    a.r[0] = (u32)param_1;
    f1 = tc_callf(0x801a0d9cu, &a);
    a.r[0] = (u32)param_1 + 0x604u;
    a.r[1] = tc_lastr4();
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    (void)tc_call(rd32(rd32((u32)param_1 + 0x604u) + 0x14u), &a);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x801b2c18u, &a);
    r0 = rd32((u32)param_1 + 0x70cu);
    if ((s32)r0 > 0) {
        r0 = r0 - 1u;
        wr32((u32)param_1 + 0x70cu, r0);
        if (r0 == 0u) {
            r3 = tc_call(0x801b0c80u, &a);
            a.r[0] = r3;
            (void)tc_call(0x801830e4u, &a);
            a.r[0] = (u32)param_1;
            (void)tc_call(0x801b2dd4u, &a);
            wr32((u32)param_1 + 0x724u, 0u);
        }
    }
    a.r[0] = (u32)param_1;
    r3 = tc_call(0x801b2e30u, &a);
    if (r3 != 0u) {
        r3 = tc_call(0x801b0c80u, &a);
        f1 = (f64)rdf32(r3 + 0x174u);
        if (!(f1 < (f64)rdf32(0x80575bbcu))) {
            if (!(f1 > (f64)rdf32(0x80575bc4u))) {
                r0 = rd32((u32)param_1 + 0x724u);
                if (r0 != 2u) {
                    if (r0 == 1u) {
                        r0 = rd32((u32)param_1 + 0x714u) - 1u;
                        wr32((u32)param_1 + 0x714u, r0);
                        if ((s32)r0 <= 0) {
                            wr32((u32)param_1 + 0x714u, 0u);
                            a.r[0] = (u32)param_1;
                            a.r[1] = 0u;
                            (void)tc_call(0x801b2928u, &a);
                        }
                    }
                } else {
                    r0 = rd32((u32)param_1 + 0x71cu) - 1u;
                    wr32((u32)param_1 + 0x71cu, r0);
                    if ((s32)r0 <= 0) {
                        wr32((u32)param_1 + 0x71cu, 0u);
                        a.r[0] = (u32)param_1;
                        a.r[1] = 0u;
                        (void)tc_call(0x801b2928u, &a);
                    }
                }
            } else {
                r0 = rd32((u32)param_1 + 0x724u);
                if (r0 != 3u && r0 != 1u) {
                    r3 = rd32((u32)param_1 + 0x714u);
                    f3 = rdf64(0x80575bc8u);
                    wr32(0x817fdff4u, rd32((u32)param_1 + 0x718u) ^ 0x80000000u);
                    r3 = r3 + 1u;
                    f0 = (f64)rdf32(0x80575bc0u);
                    f1 = (f64)(f32)(rdf64(0x817fdff0u) - f3);
                    wr32((u32)param_1 + 0x714u, r3);
                    f0 = (f64)(f32)(f0 * f1);
                    if ((f64)(f32)(px_b2f((u64)(r3 ^ 0x80000000u) | 0x4330000000000000ull) - f3) > f0) {
                        a.r[0] = (u32)param_1;
                        a.r[1] = 1u;
                        (void)tc_call(0x801b2928u, &a);
                    }
                }
            }
        } else if (rd32((u32)param_1 + 0x724u) == 2u) {
            r0 = rd32((u32)param_1 + 0x700u) - 1u;
            wr32((u32)param_1 + 0x700u, r0);
            if (r0 == 0u) {
                r4 = rd32((u32)param_1 + 0x704u);
                if (r4 != 0xffffffffu) {
                    a.r[0] = 0x804b9da0u;
                    a.r[1] = r4;
                    (void)tc_call(0x8010a74cu, &a);
                    wr32((u32)param_1 + 0x700u, rd32((u32)param_1 + 0x6fcu));
                }
            }
        } else {
            r3 = rd32((u32)param_1 + 0x71cu);
            f3 = rdf64(0x80575bc8u);
            wr32(0x817fdff4u, rd32((u32)param_1 + 0x720u) ^ 0x80000000u);
            r3 = r3 + 1u;
            f0 = (f64)rdf32(0x80575bc0u);
            f1 = (f64)(f32)(rdf64(0x817fdff0u) - f3);
            wr32((u32)param_1 + 0x71cu, r3);
            f2 = (f64)(f32)(px_b2f((u64)(r3 ^ 0x80000000u) | 0x4330000000000000ull) - f3);
            f0 = (f64)(f32)(f0 * f1);
            if ((f2 > f0) || (f2 == f0)) {
                a.r[0] = (u32)param_1;
                a.r[1] = 2u;
                (void)tc_call(0x801b2928u, &a);
                wr32((u32)param_1 + 0x700u, rd32((u32)param_1 + 0x6fcu));
            }
        }
    }
    a.r[0] = (u32)param_1;
    r3 = tc_call(0x801b31f4u, &a);
    if (r3 == 0u) {
        a.r[0] = (u32)param_1;
        (void)tc_call(0x801b23b8u, &a);
    }
    a.r[0] = (u32)param_1;
    (void)tc_call(0x801b33b8u, &a);
    return 1u;
}

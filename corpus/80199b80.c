#include "tc_rt.h"

static f64 px_b2f(u64 x)
{
    union { f64 d; u64 b; } v;
    v.b = x;
    return v.d;
}

void fn_80199b80(u32 param_1)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r29 = 0, r30 = 0;
    f64 f0 = 0.0, f1 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    r3 = tc_call(0x8019a338u, &a);
    r4 = (u32)rd8(param_1 + 0x38u);
    r0 = r3 ^ 0x80000000u;
    f5 = rdf64(0x805756c0u);
    f6 = rdf64(0x805756b8u);
    f4 = (f64)rdf32(0x80575698u);
    f1 = (f64)(f32)(px_b2f((u64)r0 | 0x4330000000000000ull) - f6);
    f0 = (f64)(f32)((f64)(f32)(px_b2f((u64)r4 | 0x4330000000000000ull) - f5) * f4);
    if ((f1 < f0) || (f1 == f0)) {
        r4 = 0xffffffffu;
    } else {
        f3 = (f64)rdf32(0x805756b4u);
        f1 = ppc_fnmsubs((f64)(f32)(px_b2f((u64)r4 | 0x4330000000000000ull) - f5), f4, f3);
        f0 = (f64)(f32)(px_b2f((u64)r0 | 0x4330000000000000ull) - f6);
        if (!((f1 < f0) || (f1 == f0))) {
            r3 = (u32)rd8(param_1 + 0x3au);
            if ((f64)(f32)(px_b2f((u64)r0 | 0x4330000000000000ull) - f6) < ppc_fmadds((f64)(f32)(px_b2f((u64)r4 | 0x4330000000000000ull) - f5), f4, (f64)(f32)((f64)(f32)(px_b2f((u64)r3 | 0x4330000000000000ull) - f5) * f4))) {
                r4 = 1u;
            } else if (!((f64)(f32)(f3 - ppc_fmadds((f64)(f32)(px_b2f((u64)r4 | 0x4330000000000000ull) - f5), f4, (f64)(f32)((f64)(f32)(px_b2f((u64)r3 | 0x4330000000000000ull) - f5) * f4))) < (f64)(f32)(px_b2f((u64)r0 | 0x4330000000000000ull) - f6))) {
                r4 = 0u;
            } else {
                r4 = 1u;
            }
        } else {
            r4 = 0xffffffffu;
        }
    }
    c0lt = (s32)r4 < 0;
    if ((s32)r4 <= 0) {
        if (!c0lt) {
            a.r[0] = param_1 + 0x18u;
            (void)tc_call(0x80082354u, &a);
            a.r[0] = 0x804b9da0u;
            a.r[1] = 0xd4au;
            (void)tc_call(0x8010a74cu, &a);
            r4 = rd32(param_1 + 0x28u);
            wr32(param_1 + 0x40u, 1u);
            if ((s32)r4 >= 0) {
                a.r[0] = 0x80492800u;
                a.r[1] = r4;
                a.r[2] = rd32(param_1 + 0x2cu);
                a.r[3] = rd32(param_1 + 0x30u);
                (void)tc_call(0x800835c0u, &a);
            }
        } else {
            if ((u32)rd16(param_1 + 0x1cu) == 0x2e8u) {
                r30 = param_1;
                r29 = 0u;
                do {
                    if ((u32)rd16(r30) != 0x2e8u) {
                        a.r[0] = r30;
                        (void)tc_call(0x80082354u, &a);
                    }
                    r29 = r29 + 1u;
                    r30 = r30 + 4u;
                } while ((s32)r29 < 6);
            } else {
                a.r[0] = param_1 + 0x1cu;
                (void)tc_call(0x80082354u, &a);
                r30 = param_1;
                r29 = 0u;
                do {
                    a.r[0] = (u32)rd16(r30);
                    r3 = tc_call(0x800cd6f4u, &a);
                    if ((r3 & 0xffu) != 0u) {
                        a.r[0] = r30;
                        (void)tc_call(0x80082354u, &a);
                    }
                    r29 = r29 + 1u;
                    r30 = r30 + 4u;
                } while ((s32)r29 < 6);
            }
            a.r[0] = 0x804b9da0u;
            a.r[1] = 0xd4cu;
            (void)tc_call(0x8010a74cu, &a);
            wr32(param_1 + 0x40u, 0u);
        }
    } else {
        r0 = 0xau;
        r3 = (u32)rd8(param_1 + 0x1bu) + r4;
        r4 = r3 & 0xffu;
        wr8(param_1 + 0x1bu, (u8)r3);
        if (r4 <= 0xau) {
            r0 = r4;
        }
        wr8(param_1 + 0x1bu, (u8)r0);
        a.r[0] = param_1 + 0x18u;
        (void)tc_call(0x80082354u, &a);
        a.r[0] = 0x804b9da0u;
        a.r[1] = 0xd4bu;
        (void)tc_call(0x8010a74cu, &a);
        r4 = rd32(param_1 + 0x28u);
        wr32(param_1 + 0x40u, 2u);
        if ((s32)r4 >= 0) {
            a.r[0] = 0x80492800u;
            a.r[1] = r4;
            a.r[2] = rd32(param_1 + 0x2cu);
            a.r[3] = rd32(param_1 + 0x30u);
            (void)tc_call(0x800835c0u, &a);
        }
    }
    a.r[0] = param_1;
    (void)tc_call(0x8019b39cu, &a);
    return;
}

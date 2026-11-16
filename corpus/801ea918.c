#include "tc_rt.h"

static f64 px_b2f(u64 x)
{
    union { f64 d; u64 b; } v;
    v.b = x;
    return v.d;
}

void fn_801ea918(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r28 = 0, r29 = 0, r30 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0;
    TcArgs a = {0};
    r4 = rd32(0x803541c8u);
    r5 = r4 & 1u;
    if (r5 != 0u && (r4 & 2u) != 0u) {
        a.f[0] = rdf64(0x80576428u);
        f1 = tc_callf(0x80262ec0u, &a);
        f3 = (f64)(f32)((f64)rdf32(0x805763f0u) * (f64)(f32)f1);
        f1 = rdf64(0x80576428u);
        wrf32d((u32)param_1 + 0x234u, ppc_fmadds(f3, (f64)rdf32(0x80576360u), (f64)rdf32((u32)param_1 + 0x234u)));
        a.f[0] = f1;
        f1 = tc_callf(0x80262ec0u, &a);
        wrf32d((u32)param_1 + 0x238u, ppc_fnmsubs((f64)(f32)((f64)rdf32(0x805763f0u) * (f64)(f32)f1), (f64)rdf32(0x80576360u), (f64)rdf32((u32)param_1 + 0x238u)));
    } else {
        r6 = r4 & 2u;
        if (r6 != 0u && (r4 & 4u) != 0u) {
            a.f[0] = rdf64(0x80576428u);
            f1 = tc_callf(0x80262ec0u, &a);
            f3 = (f64)(f32)((f64)rdf32(0x805763f0u) * (f64)(f32)f1);
            f1 = rdf64(0x80576428u);
            wrf32d((u32)param_1 + 0x234u, ppc_fmadds(f3, (f64)rdf32(0x80576360u), (f64)rdf32((u32)param_1 + 0x234u)));
            a.f[0] = f1;
            f1 = tc_callf(0x80262ec0u, &a);
            wrf32d((u32)param_1 + 0x238u, ppc_fmadds((f64)(f32)((f64)rdf32(0x805763f0u) * (f64)(f32)f1), (f64)rdf32(0x80576360u), (f64)rdf32((u32)param_1 + 0x238u)));
        } else {
            r7 = r4 & 4u;
            if (r7 != 0u && (r4 & 8u) != 0u) {
                a.f[0] = rdf64(0x80576428u);
                f1 = tc_callf(0x80262ec0u, &a);
                f3 = (f64)(f32)((f64)rdf32(0x805763f0u) * (f64)(f32)f1);
                f1 = rdf64(0x80576428u);
                wrf32d((u32)param_1 + 0x234u, ppc_fnmsubs(f3, (f64)rdf32(0x80576360u), (f64)rdf32((u32)param_1 + 0x234u)));
                a.f[0] = f1;
                f1 = tc_callf(0x80262ec0u, &a);
                wrf32d((u32)param_1 + 0x238u, ppc_fmadds((f64)(f32)((f64)rdf32(0x805763f0u) * (f64)(f32)f1), (f64)rdf32(0x80576360u), (f64)rdf32((u32)param_1 + 0x238u)));
            } else {
                r0 = r4 & 8u;
                if (r0 != 0u && r5 != 0u) {
                    a.f[0] = rdf64(0x80576428u);
                    f1 = tc_callf(0x80262ec0u, &a);
                    f3 = (f64)(f32)((f64)rdf32(0x805763f0u) * (f64)(f32)f1);
                    f1 = rdf64(0x80576428u);
                    wrf32d((u32)param_1 + 0x234u, ppc_fnmsubs(f3, (f64)rdf32(0x80576360u), (f64)rdf32((u32)param_1 + 0x234u)));
                    a.f[0] = f1;
                    f1 = tc_callf(0x80262ec0u, &a);
                    wrf32d((u32)param_1 + 0x238u, ppc_fnmsubs((f64)(f32)((f64)rdf32(0x805763f0u) * (f64)(f32)f1), (f64)rdf32(0x80576360u), (f64)rdf32((u32)param_1 + 0x238u)));
                } else {
                    if (r5 != 0u) {
                        wrf32d((u32)param_1 + 0x238u, (f64)(f32)((f64)rdf32((u32)param_1 + 0x238u) - (f64)rdf32(0x805763f0u)));
                    } else {
                        if (r6 != 0u) {
                            wrf32d((u32)param_1 + 0x234u, (f64)(f32)((f64)rdf32((u32)param_1 + 0x234u) + (f64)rdf32(0x805763f0u)));
                        } else {
                            if (r7 != 0u) {
                                wrf32d((u32)param_1 + 0x238u, (f64)(f32)((f64)rdf32((u32)param_1 + 0x238u) + (f64)rdf32(0x805763f0u)));
                            } else {
                                if (r0 != 0u) {
                                    wrf32d((u32)param_1 + 0x234u, (f64)(f32)((f64)rdf32((u32)param_1 + 0x234u) - (f64)rdf32(0x805763f0u)));
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    f0 = (f64)rdf32((u32)param_1 + 0x234u);
    f4 = (f64)rdf32((u32)param_1 + 0x1a0u);
    if (f0 < f4) {
        wrf32d((u32)param_1 + 0x234u, f4);
    } else {
        f3 = (f64)rdf32((u32)param_1 + 0x240u);
        f1 = (f64)rdf32((u32)param_1 + 0x1acu);
        if ((f64)(f32)(f0 + f3) > (f64)(f32)(f4 + f1)) {
            wrf32d((u32)param_1 + 0x234u, (f64)(f32)(f4 + (f64)(f32)(f1 - f3)));
        }
    }
    f0 = (f64)rdf32((u32)param_1 + 0x238u);
    f4 = (f64)rdf32((u32)param_1 + 0x1a4u);
    if (f0 < f4) {
        wrf32d((u32)param_1 + 0x238u, f4);
    } else {
        f3 = (f64)rdf32((u32)param_1 + 0x244u);
        f1 = (f64)rdf32((u32)param_1 + 0x1b0u);
        if ((f64)(f32)(f0 + f3) > (f64)(f32)(f4 + f1)) {
            wrf32d((u32)param_1 + 0x238u, (f64)(f32)(f4 + (f64)(f32)(f1 - f3)));
        }
    }
    a.r[0] = (u32)param_1;
    r3 = tc_call(0x801eacf8u, &a);
    r3 = (u32)(s8)r3;
    if ((u32)rd8((u32)param_1 + 0x159cu) != r3) {
        a.r[0] = (u32)param_1;
        r3 = tc_call(0x801eacf8u, &a);
        wr8((u32)param_1 + 0x159cu, (u8)r3);
        a.r[0] = (u32)param_1;
        (void)tc_call(0x801eaed4u, &a);
        a.r[0] = (u32)param_1;
        (void)tc_call(0x801eb160u, &a);
        a.r[0] = 0x804b9da0u;
        a.r[1] = 0xd51u;
        (void)tc_call(0x8010a74cu, &a);
        if ((u32)rd8((u32)param_1 + 0x159cu) <= 9u) {
            r29 = (u32)param_1 + 0x41cu;
            r28 = 0u;
            do {
                a.r[0] = 0x80475e24u;
                a.r[1] = (u32)rd8((u32)param_1 + 0x159cu);
                r3 = tc_call(0x8017c25cu, &a);
                a.r[0] = (u32)param_1;
                a.r[1] = r29;
                a.r[2] = r28 & 0xffu;
                a.r[3] = r3;
                (void)tc_call(0x801eb340u, &a);
                r28 = r28 + 1u;
                r29 = r29 + 0x378u;
            } while ((s32)r28 < 4);
        } else {
            r30 = (u32)param_1 + 0x41cu;
            r28 = 0u;
            do {
                a.r[0] = (u32)param_1;
                a.r[1] = r30;
                a.r[2] = r28 & 0xffu;
                a.r[3] = 0u;
                (void)tc_call(0x801eb340u, &a);
                r28 = r28 + 1u;
                r30 = r30 + 0x378u;
            } while ((s32)r28 < 4);
        }
    }
    r5 = (u32)rd8((u32)param_1 + 0x15a4u);
    r7 = rd32((u32)param_1 + 0x15a0u);
    f4 = (f64)rdf32((u32)param_1 + 0x2d0u);
    r4 = r7 + (u32)(s8)r5;
    f5 = (f64)rdf32((u32)param_1 + 0x234u);
    f2 = rdf64(0x805763e8u);
    f0 = (f64)rdf32((u32)param_1 + 0x238u);
    r0 = (u32)((s32)ppc_mulhw(1717986919, (s32)r4) >> 1);
    wrf32d((u32)param_1 + 0x258u, (f64)rdf32((u32)param_1 + 0x2ccu));
    r0 = r0 + ((r0 >> 0x1fu) & 1u);
    r0 = r0 * 5u;
    wrf32d((u32)param_1 + 0x25cu, f4);
    f0 = (f64)(f32)(f0 + (f64)(f32)(px_b2f((u64)(r7 ^ 0x80000000u) | 0x4330000000000000ull) - f2));
    wrf32d((u32)param_1 + 0x1c0u, f5);
    r0 = r4 - r0;
    wr32((u32)param_1 + 0x15a0u, r4);
    wrf32d((u32)param_1 + 0x1c4u, f0);
    if (r0 == 0u) {
        wr8((u32)param_1 + 0x15a4u, (u8)(r5 - ((r5 << 1u) & 0xfffffffeu)));
    }
    return;
}

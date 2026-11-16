#include "tc_rt.h"

static f64 px_b2f(u64 x)
{
    union { f64 d; u64 b; } v;
    v.b = x;
    return v.d;
}

void fn_801963a4(s32 param_1, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r6, u32 param_r7, u32 param_r8, u32 param_r9)
{
    u32 r0 = 0, r4 = 0, r5 = 0, r7 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0;
    TcArgs a = {0};
    f3 = (f64)rdf32(0x80575470u);
    f0 = (f64)rdf32((u32)param_1 + 0x51cu);
    wrf32d((u32)param_1 + 0x518u, ppc_fmadds(f3, (f64)rdf32(rd32(0x805711ccu) + 0x58u), (f64)rdf32((u32)param_1 + 0x518u)));
    f0 = ppc_fnmsubs(f3, (f64)rdf32(rd32(0x805711ccu) + 0x5cu), f0);
    wrf32d((u32)param_1 + 0x51cu, f0);
    r5 = rd32(0x803541bcu);
    if (r5 == 0u) {
        r4 = 0u;
    } else {
        r0 = rd32(rd32(0x805711ccu) + 0xfcu);
        if (r0 == 1u) {
            r4 = rd32(0x80354160u);
        } else {
            if (r0 == 2u) {
                r4 = rd32(0x80354194u);
            } else {
                r4 = 0u;
            }
        }
    }
    if (r5 == 0u) {
        r0 = 0u;
    } else {
        r0 = rd32(rd32(0x805711ccu) + 0xfcu);
        if (r0 == 1u) {
            r0 = r4 & rd32(rd32(0x80354198u));
        } else {
            if (r0 == 2u) {
                r0 = r4 & rd32(rd32(0x803541a8u));
            } else {
                r0 = 0u;
            }
        }
    }
    if (r0 != 0u) {
        a.f[0] = (f64)rdf32((u32)param_1 + 0x518u);
        a.f[1] = (f64)rdf32((u32)param_1 + 0x51cu);
        a.f[2] = f3;
        a.f[3] = param_f4;
        a.f[4] = param_f5;
        a.f[5] = param_f6;
        a.f[6] = param_f7;
        a.f[7] = param_f8;
        a.r[0] = 0x8033ada0u;
        a.r[1] = r4;
        a.r[2] = r5;
        a.r[3] = param_r6;
        a.r[4] = param_r7;
        a.r[5] = param_r8;
        a.r[6] = param_r9;
        a.r[7] = param_r10;
        (void)tc_call(0x80228554u, &a);
    }
    f2 = (f64)rdf32((u32)param_1 + 0x518u);
    f0 = (f64)rdf32(0x80575440u);
    if (f2 < f0) {
        wrf32d((u32)param_1 + 0x518u, f0);
    } else {
        f3 = (f64)rdf32((u32)param_1 + 0x524u);
        f0 = (f64)rdf32(0x80575418u);
        f1 = (f64)rdf32(0x8057540cu);
        f2 = ppc_fmadds(f3, f0, f2);
        f0 = ppc_fnmsubs(f3, f0, f1);
        if (f2 > f0) {
            wrf32d((u32)param_1 + 0x518u, (f64)(f32)(f1 - f3));
        }
    }
    f1 = (f64)rdf32((u32)param_1 + 0x51cu);
    f0 = (f64)rdf32(0x805754b4u);
    if (f1 < f0) {
        wrf32d((u32)param_1 + 0x51cu, f0);
    } else {
        f3 = (f64)rdf32((u32)param_1 + 0x528u);
        f2 = (f64)rdf32(0x80575418u);
        f1 = ppc_fmadds(f3, f2, f1);
        f0 = (f64)(f32)((f64)rdf32(0x805754b8u) - f3);
        if (f1 > f0) {
            f0 = ppc_fnmsubs(f3, f2, f0);
            wrf32d((u32)param_1 + 0x51cu, f0);
        }
    }
    r7 = rd32((u32)param_1 + 0x78cu);
    r5 = (u32)rd8((u32)param_1 + 0x790u);
    r4 = r7 + (u32)(s8)r5;
    f3 = (f64)rdf32(0x80575418u);
    r0 = (u32)((s32)ppc_mulhw(1717986919, (s32)r4) >> 1);
    r0 = r0 + ((r0 >> 0x1fu) & 1u);
    f4 = (f64)(f32)((f64)(f32)(px_b2f((u64)(r7 ^ 0x80000000u) | 0x4330000000000000ull) - rdf64(0x80575498u)) + ppc_fnmsubs((f64)rdf32((u32)param_1 + 0x528u), f3, (f64)rdf32((u32)param_1 + 0x51cu)));
    r0 = r0 * 5u;
    r0 = r4 - r0;
    f5 = ppc_fnmsubs((f64)rdf32((u32)param_1 + 0x5bcu), f3, (f64)rdf32((u32)param_1 + 0x5b0u));
    f1 = (f64)rdf32((u32)param_1 + 0x5b8u);
    f0 = (f64)rdf32((u32)param_1 + 0x5acu);
    wrf32d((u32)param_1 + 0x4a4u, ppc_fnmsubs((f64)rdf32((u32)param_1 + 0x524u), f3, (f64)rdf32((u32)param_1 + 0x518u)));
    f0 = ppc_fnmsubs(f1, f3, f0);
    wrf32d((u32)param_1 + 0x4a8u, f4);
    wrf32d((u32)param_1 + 0x538u, f0);
    wrf32d((u32)param_1 + 0x53cu, f5);
    wr32((u32)param_1 + 0x78cu, r4);
    if (r0 == 0u) {
        wr8((u32)param_1 + 0x790u, (u8)(r5 - ((r5 << 1u) & 0xfffffffeu)));
    }
    return;
}

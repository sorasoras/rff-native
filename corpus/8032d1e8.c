#include "tc_rt.h"

static u64 px_f2b(f64 x)
{
    union { f64 d; u64 b; } v;
    v.d = x;
    return v.b;
}

static f64 px_b2f(u64 x)
{
    union { f64 d; u64 b; } v;
    v.b = x;
    return v.d;
}

static f64 px_ctiw(f64 b, s32 w)
{
    u64 r = 0xfff8000000000000ull | (u32)w;
    if (w == 0 && (px_f2b(b) >> 63) != 0) r |= 0x100000000ull;
    return px_b2f(r);
}

void fn_8032d1e8(u32 param_1, u32 param_2, s32 param_3)
{
    u32 c0eq = 0, c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0;
    u32 r12 = 0, r22 = 0, r23 = 0, r24 = 0, r25 = 0, r26 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f5 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf10u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wrf64(0x817fdfe0u, 0.0);
    wrf32d(0x817fdfe8u, 0.0);
    wrf32d(0x817fdfecu, 0.0);
    wr32(0x817fdfb8u, 0u);
    wr32(0x817fdfbcu, 0u);
    wr32(0x817fdfc0u, 0u);
    wr32(0x817fdfc4u, 0u);
    wr32(0x817fdfc8u, 0u);
    wr32(0x817fdfccu, 0u);
    wr32(0x817fdfd0u, 0u);
    wr32(0x817fdfd4u, 0u);
    wr32(0x817fdfd8u, 0u);
    wr32(0x817fdfdcu, 0u);
    a.r[0] = param_1;
    a.r[1] = (u32)param_3;
    a.r[2] = rd32((u32)param_3 + 0x24u) + 0x9cu;
    a.r[3] = param_2;
    (void)tc_call(0x80325f9cu, &a);
    a.r[0] = 0u;
    a.r[1] = 1u;
    a.r[2] = 1u;
    (void)tc_call(0x80250e00u, &a);
    (void)tc_call(0x8024f870u, &a);
    a.r[0] = 9u;
    a.r[1] = 1u;
    (void)tc_call(0x8024f27cu, &a);
    if ((u32)rd8(param_1 + 0xc0u) != 0u) {
        a.r[0] = 0xdu;
        a.r[1] = 1u;
        (void)tc_call(0x8024f27cu, &a);
    }
    a.r[0] = 0u;
    a.r[1] = 9u;
    a.r[2] = 1u;
    a.r[3] = 4u;
    a.r[4] = 0u;
    (void)tc_call(0x8024f8a4u, &a);
    a.r[0] = 0u;
    a.r[1] = 0xdu;
    a.r[2] = 1u;
    a.r[3] = 4u;
    a.r[4] = 0u;
    (void)tc_call(0x8024f8a4u, &a);
    a.r[0] = 0u;
    (void)tc_call(0x80254548u, &a);
    r31 = rd32((u32)param_3 + 0x24u) + 0x9cu;
    a.r[0] = (u32)param_3;
    a.r[1] = 0x817fdf78u;
    (void)tc_call(0x8031efa8u, &a);
    r12 = rd32(param_2 + 4u);
    c0eq = (f64)rdf32(0x80577ca0u) == (f64)rdf32(param_2 + 0x88u);
    r11 = rd32(param_2 + 8u);
    r10 = rd32(param_2 + 0xcu);
    r9 = rd32(param_2 + 0x10u);
    r8 = rd32(param_2 + 0x14u);
    r7 = rd32(param_2 + 0x18u);
    r6 = rd32(param_2 + 0x1cu);
    r5 = rd32(param_2 + 0x20u);
    r4 = rd32(param_2 + 0x24u);
    r3 = rd32(param_2 + 0x28u);
    r0 = rd32(param_2 + 0x2cu);
    wr32(0x817fdf48u, rd32(param_2));
    wr32(0x817fdf4cu, r12);
    wr32(0x817fdf50u, r11);
    wr32(0x817fdf54u, r10);
    wr32(0x817fdf58u, r9);
    wr32(0x817fdf5cu, r8);
    wr32(0x817fdf60u, r7);
    wr32(0x817fdf64u, r6);
    wr32(0x817fdf68u, r5);
    wr32(0x817fdf6cu, r4);
    wr32(0x817fdf70u, r3);
    wr32(0x817fdf74u, r0);
    if (!c0eq) {
        a.r[0] = 0x817fdf28u;
        (void)tc_call(0x80254460u, &a);
        f0 = (f64)rdf32(0x817fdf28u);
        f0 = px_ctiw(f0, ppc_fctiwz(f0));
        wrf64(0x817fdfa8u, f0);
        r0 = rd32(0x817fdfacu);
        c0lt = (s32)r0 < 1;
        if (r0 == 1u) {
            wrf32d(0x817fdf74u, (f64)(f32)((f64)rdf32(0x817fdf74u) + (f64)rdf32(param_2 + 0x88u)));
        } else if (c0lt && (s32)r0 >= 0) {
            a.r[0] = param_2;
            a.r[1] = param_2 + 0x8cu;
            a.r[2] = 0x817fdf1cu;
            (void)tc_call(0x8023411cu, &a);
            a.r[0] = 0x817fdf1cu;
            a.r[1] = 0x817fdf1cu;
            r3 = tc_call(0x80320984u, &a);
            if (r3 == 0u) {
                wrf32d(0x817fdf74u, (f64)(f32)((f64)rdf32(0x817fdf74u) + (f64)rdf32(param_2 + 0x88u)));
            } else {
                f1 = (f64)rdf32(0x817fdf24u);
                f0 = (f64)rdf32(0x80577ca0u);
                if (!((f1 > f0) || (f1 == f0))) {
                    f3 = (f64)rdf32(param_2 + 0x88u);
                    f1 = (f64)(f32)(f1 * f3);
                    f5 = (f64)(f32)((f64)rdf32(0x817fdf1cu) * f3);
                    f3 = (f64)(f32)((f64)rdf32(0x817fdf20u) * f3);
                    f2 = (f64)(f32)((f64)rdf32(0x817fdf64u) - f3);
                    f0 = (f64)(f32)((f64)rdf32(0x817fdf74u) - f1);
                    wrf32d(0x817fdf54u, (f64)(f32)((f64)rdf32(0x817fdf54u) - f5));
                    wrf32d(0x817fdf64u, f2);
                    wrf32d(0x817fdf74u, f0);
                } else {
                    f3 = (f64)rdf32(param_2 + 0x88u);
                    f1 = (f64)(f32)(f1 * f3);
                    f5 = (f64)(f32)((f64)rdf32(0x817fdf1cu) * f3);
                    f3 = (f64)(f32)((f64)rdf32(0x817fdf20u) * f3);
                    f2 = (f64)(f32)((f64)rdf32(0x817fdf64u) + f3);
                    f0 = (f64)(f32)((f64)rdf32(0x817fdf74u) + f1);
                    wrf32d(0x817fdf54u, (f64)(f32)((f64)rdf32(0x817fdf54u) + f5));
                    wrf32d(0x817fdf64u, f2);
                    wrf32d(0x817fdf74u, f0);
                }
            }
        }
    }
    a.r[0] = 0x817fdf48u;
    a.r[1] = 0x817fdf78u;
    a.r[2] = 0x817fdf48u;
    (void)tc_call(0x802337a0u, &a);
    a.r[0] = 0x817fdf48u;
    a.r[1] = 0u;
    f1 = tc_callf(0x802544a0u, &a);
    a.r[0] = param_1;
    a.r[1] = (u32)rd16(r31) & 0x800u;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.r[6] = 0u;
    a.r[7] = 0u;
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    r3 = tc_call(rd32(rd32(param_1) + 0x10u), &a);
    f1 = tc_lastf();
    r26 = r3;
    a.r[0] = param_1;
    a.r[1] = (u32)rd16(r31) & 0x800u;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.r[6] = 0u;
    a.r[7] = 0u;
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    r3 = tc_call(rd32(rd32(param_1) + 0x14u), &a);
    f1 = tc_lastf();
    r25 = r3;
    r24 = 0u;
    r23 = 1u;
    a.r[0] = (u32)param_3;
    a.r[1] = tc_lastr4();
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.r[6] = 0u;
    a.r[7] = 0u;
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    r3 = tc_call(r26, &a);
    f2 = 0.0;
    f31 = (f64)rdf32(0x80577ca8u);
    r22 = r3;
    f30 = (f64)rdf32(0x80577ca4u);
    while (r3 != 0u) {
        f1 = (f64)rdf32(r3 + 0x30u);
        f0 = (f64)rdf32(r3 + 0x38u);
        r3 = rd32(r3 + 0xc8u);
        f1 = (f64)(f32)(f1 * f0);
        f1 = (f64)(f32)(f1 * (f64)rdf32(r3 + 0x58u));
        wrf32d(0x817fdf18u, f1);
        if (!(f1 < f30)) {
            if (!(f1 < (f64)rdf32(0x80570fb0u))) {
                r3 = 0x80570fb0u;
            } else {
                r3 = 0x817fdf18u;
            }
            f0 = (f64)(f32)(f31 * (f64)rdf32(r3));
            f0 = px_ctiw(f0, ppc_fctiwz(f0));
            wrf64(0x817fdfa8u, f0);
            r4 = rd32(0x817fdfacu);
            r3 = r4 & 0xffu;
            if (r3 != 0u) {
                if ((r24 & 0xffu) == r3) {
                    a.r[0] = param_1;
                    a.r[1] = r22;
                    a.r[2] = r31;
                    a.r[3] = param_2;
                    a.r[4] = r23;
                    (void)tc_call(0x80326730u, &a);
                } else {
                    r24 = r4;
                    a.r[0] = r3;
                    a.r[1] = 5u;
                    (void)tc_call(0x80250dccu, &a);
                    a.r[0] = param_1;
                    a.r[1] = r22;
                    a.r[2] = r31;
                    a.r[3] = param_2;
                    a.r[4] = r23;
                    (void)tc_call(0x80326730u, &a);
                }
                r6 = (u32)rd8(param_1 + 0xc0u);
                r23 = 0u;
                a.r[0] = 0xb8u;
                a.r[1] = 0u;
                a.r[2] = 1u;
                (void)tc_call(0x80250b74u, &a);
                f2 = (f64)rdf32(r22 + 0xb4u);
                f1 = (f64)rdf32(r22 + 0xb0u);
                wrf32d(0xcc008000u, (f64)rdf32(r22 + 0xacu));
                wrf32d(0xcc008000u, f1);
                wrf32d(0xcc008000u, f2);
                if (((((0u - r6) | r6) >> 0x1fu) & 1u) != 0u) {
                    wrf32d(0xcc008000u, (f64)rdf32(0x80577ca0u));
                    wrf32d(0xcc008000u, (f64)rdf32(0x80577ca0u));
                }
            }
        }
        a.r[0] = (u32)param_3;
        a.r[1] = r22;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        a.f[0] = f1;
        a.f[1] = f2;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        r3 = tc_call(r25, &a);
        f2 = 0.0;
        r22 = r3;
    }
    return;
}

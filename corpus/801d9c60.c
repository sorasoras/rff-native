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

static f32 px_w2f(u32 x)
{
    union { f32 f; u32 w; } v;
    v.w = x;
    return v.f;
}

static f64 px_ctiw(f64 b, s32 w)
{
    u64 r = 0xfff8000000000000ull | (u32)w;
    if (w == 0 && (px_f2b(b) >> 63) != 0) r |= 0x100000000ull;
    return px_b2f(r);
}

void fn_801d9c60(u32 param_1)
{
    u32 c0eq = 0, c0gt = 0, c0lt = 0, ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0;
    u32 r10 = 0, r11 = 0, r12 = 0, sw_ = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0;
    f64 f12 = 0.0, f13 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    r3 = rd32(0x804863d8u);
    a.r[0] = r3;
    a.r[1] = 0x80480000u;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.f[0] = 0.0;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    r3 = tc_call(rd32(rd32(r3) + 0x28u), &a);
    f1 = tc_lastf();
    r4 = rd32(param_1 + 0xcfcu);
    r6 = rd32(r3);
    r5 = rd32(r3 + 4u);
    wr32(0x817fdfd4u, rd32(r3 + 8u));
    if (r4 <= 0x10u) {
        r3 = rd32(((r4 << 2u) & 0xfffffffcu) - 0x7fc8b008u);
        sw_ = r3;
        switch (sw_) {
        case 0x801d9e04u:
            f1 = (f64)rdf32(param_1 + 0x2d8u);
            if (!((f64)rdf32(0x805760e8u) < f1)) {
                f0 = (f64)rdf32(0x805760f0u);
                if ((f0 > f1) || (f0 == f1)) {
                    f1 = (f64)(f32)((f64)rdf32(0x805760ecu) + f1);
                }
            } else {
                f1 = (f64)(f32)(f1 - (f64)rdf32(0x805760ecu));
            }
            f0 = (f64)rdf32(0x80576144u);
            wrf32d(param_1 + 0x19cu, f1);
            wrf32d(param_1 + 0x188u, f0);
            a.r[0] = param_1;
            r3 = tc_call(0x8007ef78u, &a);
            if (r3 == 0u) break;
            a.r[0] = param_1;
            a.r[1] = rd32(param_1 + 0xcfcu);
            (void)tc_call(0x801daeb8u, &a);
            wr32(param_1 + 0xda8u, 0u);
            wr32(param_1 + 0x2b0u, 1u);
            break;
        case 0x801d9e74u:
            if ((s32)rd32(param_1 + 0xd00u) <= 0) break;
            wr32(param_1 + 0xdf4u, rd32(param_1 + 0xdf4u) + 1u);
            a.r[0] = param_1;
            a.r[1] = r4;
            (void)tc_call(0x801daeb8u, &a);
            wr32(param_1 + 0x2b0u, 1u);
            break;
        case 0x801d9ea0u:
            if ((s32)rd32(param_1 + 0xd00u) <= 0) break;
            wr32(param_1 + 0xdf4u, rd32(param_1 + 0xdf4u) + 1u);
            a.r[0] = param_1;
            a.r[1] = r4;
            (void)tc_call(0x801daeb8u, &a);
            wr32(param_1 + 0x2b0u, 1u);
            break;
        case 0x801da388u:
            break;
        case 0x801d9f80u:
            f1 = (f64)rdf32(param_1 + 0x2d8u);
            if (!((f64)rdf32(0x805760e8u) < f1)) {
                f0 = (f64)rdf32(0x805760f0u);
                if ((f0 > f1) || (f0 == f1)) {
                    f1 = (f64)(f32)((f64)rdf32(0x805760ecu) + f1);
                }
            } else {
                f1 = (f64)(f32)(f1 - (f64)rdf32(0x805760ecu));
            }
            f0 = (f64)rdf32(0x805760f4u);
            c0gt = (s32)rd32(param_1 + 0xd00u) > 0;
            wrf32d(param_1 + 0x19cu, f1);
            wrf32d(param_1 + 0x188u, f0);
            if (!c0gt) break;
            a.r[0] = param_1;
            a.r[1] = rd32(param_1 + 0xcfcu);
            (void)tc_call(0x801daeb8u, &a);
            wr32(param_1 + 0x2b0u, 1u);
            break;
        case 0x801d9fe4u:
            a.r[0] = param_1;
            a.r[1] = r4;
            a.r[2] = r5;
            a.r[3] = r6;
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
            r5 = rd32(r3);
            r4 = rd32(r3 + 4u);
            c0eq = rd32(param_1 + 0xda4u) == 0u;
            r0 = rd32(r3 + 8u);
            wr32(0x817fdfc0u, r5);
            wr32(0x817fdfc4u, r4);
            wr32(0x817fdfc8u, r0);
            if (c0eq) {
                f2 = (f64)rdf32(0x8057614cu);
            } else {
                f2 = (f64)(f32)((f64)rdf32(0x8057614cu) * (f64)(f32)((f64)rdf32(0x805760d8u) * (f64)rdf32(param_1 + 0xdf0u)));
            }
            f1 = (f64)(f32)((f64)px_w2f(r5) - f2);
            c0lt = f1 < (f64)rdf32(param_1 + 0xd50u);
            wrf32d(0x817fdfc0u, f1);
            if (c0lt) {
                a.r[0] = param_1;
                a.r[1] = 0u;
                (void)tc_call(0x801d98ecu, &a);
                f0 = (f64)rdf32(0x80576150u);
                wr8(param_1 + 0xd10u, 4u);
                r4 = rd32(param_1 + 0xcfcu);
                r5 = param_1 + 0x30u;
                f2 = (f64)rdf32(r5 + 0xd14u);
                wrf32d(0x817fdfc4u, (f64)rdf32(r5 + 0xd18u));
                f1 = (f64)rdf32(r5 + 0xd1cu);
                wrf32d(0x817fdfc0u, f2);
                wrf32d(0x817fdfc8u, f1);
                wrf32d(0x817fdfc4u, f0);
                a.r[0] = param_1;
                a.r[1] = r4;
                (void)tc_call(0x801daeb8u, &a);
                wr32(param_1 + 0x2b0u, 1u);
                a.f[0] = (f64)rdf32(0x805760e0u);
                a.f[1] = (f64)rdf32(0x80576118u);
                a.f[2] = (f64)rdf32(0x805760dcu);
                a.f[3] = (f64)rdf32(0x80576104u);
                a.r[0] = (rd32(0x805710e0u) * 0x6d0u) - 0x7fc2e738u;
                (void)tc_call(0x80056b18u, &a);
                a.r[0] = 0x804b9da0u;
                a.r[1] = 0xfbau;
                (void)tc_call(0x8010a74cu, &a);
                r4 = rd32(param_1 + 0xdacu);
                if (r4 != 0xffffffffu) {
                    a.r[0] = 0x804b9e80u;
                    a.r[1] = r4;
                    r3 = tc_call(0x80121060u, &a);
                    if (r3 != 0u) {
                        a.r[0] = 0x804b9e80u;
                        a.r[1] = rd32(param_1 + 0xdacu);
                        (void)tc_call(0x801206f4u, &a);
                        wr32(param_1 + 0xdacu, 0xffffffffu);
                    }
                }
            }
            f2 = (f64)rdf32(0x817fdfc0u);
            f1 = (f64)rdf32(0x817fdfc4u);
            f0 = (f64)rdf32(0x817fdfc8u);
            wrf32d(param_1 + 0x84u, f2);
            wrf32d(param_1 + 0x88u, f1);
            wrf32d(param_1 + 0x8cu, f0);
            wrf32d(param_1 + 4u, f2);
            wrf32d(param_1 + 8u, f1);
            wrf32d(param_1 + 0xcu, f0);
            break;
        case 0x801da134u:
            a.r[0] = param_1;
            a.r[1] = r4;
            a.r[2] = r5;
            a.r[3] = r6;
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
            r5 = rd32(r3);
            r4 = rd32(r3 + 4u);
            c0eq = rd32(param_1 + 0xda4u) == 0u;
            r0 = rd32(r3 + 8u);
            wr32(0x817fdfb4u, r5);
            wr32(0x817fdfb8u, r4);
            wr32(0x817fdfbcu, r0);
            if (c0eq) {
                f2 = (f64)rdf32(0x8057614cu);
            } else {
                f2 = (f64)(f32)((f64)rdf32(0x8057614cu) * (f64)(f32)((f64)rdf32(0x805760d8u) * (f64)rdf32(param_1 + 0xdf0u)));
            }
            f1 = (f64)(f32)((f64)px_w2f(r5) + f2);
            c0gt = f1 > (f64)rdf32(param_1 + 0xd5cu);
            wrf32d(0x817fdfb4u, f1);
            if (c0gt) {
                a.r[0] = param_1;
                a.r[1] = 0u;
                (void)tc_call(0x801d98ecu, &a);
                f0 = (f64)rdf32(0x80576150u);
                wr8(param_1 + 0xd10u, 4u);
                r4 = rd32(param_1 + 0xcfcu);
                r5 = param_1 + 0x30u;
                f2 = (f64)rdf32(r5 + 0xd14u);
                wrf32d(0x817fdfb8u, (f64)rdf32(r5 + 0xd18u));
                f1 = (f64)rdf32(r5 + 0xd1cu);
                wrf32d(0x817fdfb4u, f2);
                wrf32d(0x817fdfbcu, f1);
                wrf32d(0x817fdfb8u, f0);
                a.r[0] = param_1;
                a.r[1] = r4;
                (void)tc_call(0x801daeb8u, &a);
                wr32(param_1 + 0x2b0u, 1u);
                a.f[0] = (f64)rdf32(0x805760e0u);
                a.f[1] = (f64)rdf32(0x80576118u);
                a.f[2] = (f64)rdf32(0x805760dcu);
                a.f[3] = (f64)rdf32(0x80576104u);
                a.r[0] = (rd32(0x805710e0u) * 0x6d0u) - 0x7fc2e738u;
                (void)tc_call(0x80056b18u, &a);
                a.r[0] = 0x804b9da0u;
                a.r[1] = 0xfbau;
                (void)tc_call(0x8010a74cu, &a);
                r4 = rd32(param_1 + 0xdacu);
                if (r4 != 0xffffffffu) {
                    a.r[0] = 0x804b9e80u;
                    a.r[1] = r4;
                    r3 = tc_call(0x80121060u, &a);
                    if (r3 != 0u) {
                        a.r[0] = 0x804b9e80u;
                        a.r[1] = rd32(param_1 + 0xdacu);
                        (void)tc_call(0x801206f4u, &a);
                        wr32(param_1 + 0xdacu, 0xffffffffu);
                    }
                }
            }
            f2 = (f64)rdf32(0x817fdfb4u);
            f1 = (f64)rdf32(0x817fdfb8u);
            f0 = (f64)rdf32(0x817fdfbcu);
            wrf32d(param_1 + 0x84u, f2);
            wrf32d(param_1 + 0x88u, f1);
            wrf32d(param_1 + 0x8cu, f0);
            wrf32d(param_1 + 4u, f2);
            wrf32d(param_1 + 8u, f1);
            wrf32d(param_1 + 0xcu, f0);
            break;
        case 0x801da284u:
            a.r[0] = param_1;
            a.r[1] = r4;
            a.r[2] = r5;
            a.r[3] = r6;
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
            r5 = rd32(r3);
            r0 = rd32(r3 + 8u);
            if ((s32)rd32(param_1 + 0xd00u) <= 0) break;
            f2 = (f64)rdf32(0x80576090u);
            f1 = (f64)px_w2f(r5);
            f0 = (f64)px_w2f(r0);
            r4 = rd32(param_1 + 0xcfcu);
            wrf32d(param_1 + 0x84u, f1);
            wrf32d(param_1 + 0x88u, f2);
            wrf32d(param_1 + 0x8cu, f0);
            wrf32d(param_1 + 4u, f1);
            wrf32d(param_1 + 8u, f2);
            wrf32d(param_1 + 0xcu, f0);
            a.r[0] = param_1;
            a.r[1] = r4;
            (void)tc_call(0x801daeb8u, &a);
            wrf32d(rd32(param_1 + 0x70u) + 0x54u, (f64)rdf32(0x80576090u));
            wr32(param_1 + 0x2b0u, 1u);
            break;
        case 0x801d9eccu:
            a.r[0] = param_1;
            r3 = tc_call(0x8007ef78u, &a);
            if (r3 == 0u) break;
            a.r[0] = param_1;
            a.r[1] = rd32(param_1 + 0xcfcu);
            (void)tc_call(0x801daeb8u, &a);
            wr32(param_1 + 0x2b0u, 1u);
            break;
        case 0x801d9ef4u:
            if ((s32)rd32(param_1 + 0xd00u) <= 0) break;
            r0 = (u32)rd8(param_1 + 0xd11u);
            wr8(param_1 + 0xd10u, (u8)r0);
            r0 = r0 * 0xcu;
            a.r[0] = param_1;
            a.r[1] = param_1 + r0 + 0xd14u;
            a.r[2] = r5;
            a.r[3] = r6;
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            (void)tc_call(rd32(rd32(param_1) + 0x1cu), &a);
            a.r[0] = param_1;
            a.r[1] = rd32(param_1 + 0xcfcu);
            (void)tc_call(0x801daeb8u, &a);
            r4 = rd32(param_1 + 0xdacu);
            if (r4 != 0xffffffffu) {
                a.r[0] = 0x804b9e80u;
                a.r[1] = r4;
                r3 = tc_call(0x80121060u, &a);
                if (r3 != 0u) {
                    a.r[0] = 0x804b9e80u;
                    a.r[1] = rd32(param_1 + 0xdacu);
                    (void)tc_call(0x801206f4u, &a);
                    wr32(param_1 + 0xdacu, 0xffffffffu);
                }
            }
            wr32(param_1 + 0xdf4u, 0u);
            wr32(param_1 + 0x2b0u, 1u);
            break;
        case 0x801da308u:
            if ((s32)rd32(param_1 + 0xd00u) <= 0) break;
            wr32(param_1 + 0xdf4u, rd32(param_1 + 0xdf4u) + 1u);
            a.r[0] = param_1;
            a.r[1] = r4;
            (void)tc_call(0x801daeb8u, &a);
            wr32(param_1 + 0x2b0u, 1u);
            break;
        case 0x801da334u:
            if ((s32)rd32(param_1 + 0xd00u) <= 0) break;
            wr32(param_1 + 0xdf4u, rd32(param_1 + 0xdf4u) + 1u);
            a.r[0] = param_1;
            a.r[1] = r4;
            (void)tc_call(0x801daeb8u, &a);
            wr32(param_1 + 0x2b0u, 1u);
            break;
        case 0x801d9d38u:
            f3 = (f64)rdf32(param_1 + 0x2d8u);
            if (!((f64)rdf32(0x805760e8u) < f3)) {
                f0 = (f64)rdf32(0x805760f0u);
                if ((f0 > f3) || (f0 == f3)) {
                    f3 = (f64)(f32)((f64)rdf32(0x805760ecu) + f3);
                }
            } else {
                f3 = (f64)(f32)(f3 - (f64)rdf32(0x805760ecu));
            }
            f1 = (f64)rdf32(0x817fdfd4u);
            f0 = (f64)rdf32(0x80576148u);
            f2 = (f64)rdf32(0x80576144u);
            wrf32d(param_1 + 0x19cu, f3);
            wrf32d(param_1 + 0x188u, f2);
            if (!((f1 < f0) || (f1 == f0))) break;
            f31 = (f64)rdf32(rd32(param_1 + 0x70u) + 0x54u);
            a.r[0] = param_1;
            f1 = tc_callf(0x80064f9cu, &a);
            f1 = px_ctiw(f1, ppc_fctiwz(f1));
            if ((u32)px_f2b(px_ctiw(f31, ppc_fctiwz(f31))) != ((u32)px_f2b(f1) - 2u)) break;
            a.r[0] = param_1;
            a.r[1] = rd32(param_1 + 0xcfcu);
            (void)tc_call(0x801daeb8u, &a);
            r3 = rd32(param_1 + 0xd68u);
            wr32(param_1 + 0x2b0u, 1u);
            if (r3 != 0u) {
                a.r[0] = r3;
                (void)tc_call(0x80157f30u, &a);
                wr32(param_1 + 0xd68u, 0u);
            }
            r3 = rd32(0x804863d8u);
            wr32(r3 + 0x9cu, rd32(r3 + 0x9cu) & 0xbfffffffu);
            break;
        case 0x801d9cd4u:
            f1 = (f64)rdf32(param_1 + 0x2d8u);
            if (!((f64)rdf32(0x805760e8u) < f1)) {
                f0 = (f64)rdf32(0x805760f0u);
                if ((f0 > f1) || (f0 == f1)) {
                    f1 = (f64)(f32)((f64)rdf32(0x805760ecu) + f1);
                }
            } else {
                f1 = (f64)(f32)(f1 - (f64)rdf32(0x805760ecu));
            }
            f0 = (f64)rdf32(0x805760f4u);
            c0gt = (s32)rd32(param_1 + 0xd00u) > 0;
            wrf32d(param_1 + 0x19cu, f1);
            wrf32d(param_1 + 0x188u, f0);
            if (!c0gt) break;
            a.r[0] = param_1;
            a.r[1] = rd32(param_1 + 0xcfcu);
            (void)tc_call(0x801daeb8u, &a);
            wr32(param_1 + 0x2b0u, 1u);
            break;
        case 0x801da360u:
            if ((s32)rd32(param_1 + 0xd00u) <= 0) break;
            wr32(param_1 + 0xdf4u, rd32(param_1 + 0xdf4u) + 1u);
            a.r[0] = param_1;
            a.r[1] = r4;
            (void)tc_call(0x801daeb8u, &a);
            wr32(param_1 + 0x2b0u, 1u);
            break;
        default:
            a.r[0] = r3;
            a.r[1] = r4;
            a.r[2] = r5;
            a.r[3] = r6;
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            r3 = tc_call(sw_, &a);
            r0 = 0u;
            r4 = tc_lastr4();
            r5 = 0u;
            r6 = 0u;
            r7 = 0u;
            r8 = 0u;
            r9 = 0u;
            r10 = 0u;
            r11 = 0u;
            r12 = 0u;
            f0 = 0.0;
            f2 = 0.0;
            f3 = 0.0;
            f4 = 0.0;
            f5 = 0.0;
            f6 = 0.0;
            f7 = 0.0;
            f8 = 0.0;
            f9 = 0.0;
            f10 = 0.0;
            f11 = 0.0;
            f12 = 0.0;
            f13 = 0.0;
            ctr = 0u;
            return;
        }
    }
    return;
}

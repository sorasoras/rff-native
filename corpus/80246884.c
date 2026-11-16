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

void fn_80246884(u32 param_r3, u32 param_r4)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, r25 = 0;
    u32 r26 = 0, r27 = 0, r28 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0;
    f64 f12 = 0.0;
    r3 = param_r3;
    wr32(0x817fdf90u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    r0 = rd32(param_r4 + 0x10cu);
    if (r0 != 0u) {
        r0 = r0 & 0xfffffffdu;
        wr32(param_r4 + 0x10cu, r0);
    } else {
        r7 = rd32(param_r4 + 0x138u);
        r6 = rd32(param_r3);
        r5 = rd32(param_r3 + 4u);
        r0 = rd32(param_r3 + 8u);
        wr32(0x817fdfbcu, r6);
        wr32(0x817fdfc0u, r5);
        wr32(0x817fdfc4u, r0);
        if (r7 != 0u) {
            r5 = rd32(r7);
            r3 = rd32(r7 + 4u);
            r0 = rd32(r7 + 8u);
            wr32(0x817fdf98u, r5);
            wr32(0x817fdf9cu, r3);
            wr32(0x817fdfa0u, r0);
        }
        r7 = rd32(param_r4 + 0x13cu);
        if (r7 != 0u) {
            r3 = rd32(r7);
            r5 = rd32(r7 + 4u);
            r6 = rd32(r7 + 8u);
        }
        r31 = 0u;
        f1 = (f64)rdf32(param_r4 + 0x108u);
        f4 = (f64)(f32)((f64)rdf32(0x80576bc8u) - f1);
        f5 = (f64)(f32)((f64)rdf32(0x80576bccu) * (f64)rdf32(param_r4 + 0x134u));
        f3 = (f64)rdf32(param_r4 + 0xf8u);
        f6 = (f64)(f32)((f64)rdf32(0x80576bd0u) * (f64)rdf32(param_r4 + 0x12cu));
        f0 = rdf64(0x80576bd8u);
        do {
            r9 = param_r4;
            r10 = param_r4;
            r11 = param_r4;
            r7 = 0x817fdf98u;
            r8 = 0x817fdfbcu;
            r12 = 0x817fdfa4u;
            ctr = 3u;
            do {
                if (rd32(param_r4 + 0x138u) != 0u) {
                    r27 = rd32(r7);
                    r26 = rd32(r27);
                    r27 = r27 + 4u;
                    r28 = rd32(rd32(r8));
                    wr32(0x817fdfc8u, 0x43300000u);
                    r26 = r28 + r26;
                    r26 = r26 ^ 0x80000000u;
                    wr32(r7, r27);
                    wr32(0x817fdfccu, r26);
                    f11 = (f64)(f32)(rdf64(0x817fdfc8u) - f0);
                } else {
                    r26 = rd32(r8);
                    wr32(0x817fdfd0u, 0x43300000u);
                    r26 = rd32(r26);
                    r26 = r26 ^ 0x80000000u;
                    wr32(0x817fdfd4u, r26);
                    f11 = (f64)(f32)(rdf64(0x817fdfd0u) - f0);
                }
                r25 = rd32(r9);
                r26 = (rd32(param_r4 + 0x14u) << 2u) & 0xfffffffcu;
                f8 = (f64)(f32)((f64)rdf32(param_r4 + 0x20u) * (f64)rdf32(r25 + ((rd32(param_r4 + 0xcu) << 2u) & 0xfffffffcu)));
                f10 = (f64)rdf32(param_r4 + 0x28u);
                f9 = (f64)rdf32(r25 + r26);
                f2 = (f64)(f32)((f64)rdf32(param_r4 + 0x24u) * (f64)rdf32(r25 + ((rd32(param_r4 + 0x10u) << 2u) & 0xfffffffcu)));
                wrf32d(r25 + r26, f11);
                f2 = (f64)(f32)(f8 + f2);
                f2 = (f64)(f32)((f64)(f32)(f10 * f9) + f2);
                if (rd32(param_r4 + 0x3cu) != 0u) {
                    r28 = rd32(r9 + 0x2cu);
                    r27 = (rd32(param_r4 + 0x38u) << 2u) & 0xfffffffcu;
                    f9 = (f64)rdf32(r28 + r27);
                    wrf32d(r28 + r27, f11);
                } else {
                    f9 = f11;
                }
                r25 = rd32(r10 + 0x44u);
                r27 = (rd32(param_r4 + 0x68u) << 2u) & 0xfffffffcu;
                f8 = (f64)rdf32(r25 + r27);
                f10 = (f64)(f32)((f64)rdf32(0x80576bc4u) + f8);
                wrf32d(r25 + r27, (f64)(f32)(f9 + (f64)(f32)(f8 * (f64)rdf32(param_r4 + 0x8cu))));
                r26 = rd32(r10 + 0x48u);
                r27 = (rd32(param_r4 + 0x6cu) << 2u) & 0xfffffffcu;
                f8 = (f64)rdf32(r26 + r27);
                f10 = (f64)(f32)(f10 + f8);
                wrf32d(r26 + r27, (f64)(f32)(f9 + (f64)(f32)(f8 * (f64)rdf32(param_r4 + 0x90u))));
                r28 = rd32(r10 + 0x4cu);
                r27 = (rd32(param_r4 + 0x70u) << 2u) & 0xfffffffcu;
                f8 = (f64)rdf32(r28 + r27);
                f10 = (f64)(f32)(f10 + f8);
                wrf32d(r28 + r27, (f64)(f32)(f9 + (f64)(f32)(f8 * (f64)rdf32(param_r4 + 0x94u))));
                r25 = rd32(r11 + 0x98u);
                r27 = (rd32(param_r4 + 0xb0u) << 2u) & 0xfffffffcu;
                f8 = (f64)rdf32(r25 + r27);
                f7 = (f64)(f32)(f10 + (f64)(f32)(f8 * f3));
                wrf32d(r25 + r27, f7);
                f7 = (f64)(f32)(f7 * f3);
                r26 = rd32(r11 + 0x9cu);
                f8 = (f64)(f32)(f8 - f7);
                r27 = (rd32(param_r4 + 0xb4u) << 2u) & 0xfffffffcu;
                f9 = (f64)rdf32(r26 + r27);
                f7 = (f64)(f32)(f8 + (f64)(f32)(f9 * f3));
                wrf32d(r26 + r27, f7);
                f9 = (f64)(f32)((f64)(f32)(f4 * (f64)(f32)(f9 - (f64)(f32)(f7 * f3))) + (f64)(f32)(f1 * (f64)rdf32(r9 + 0xfcu)));
                wrf32d(r9 + 0xfcu, f9);
                r28 = rd32(r9 + 0xc8u);
                r27 = (rd32(r9 + 0xd4u) << 2u) & 0xfffffffcu;
                f8 = (f64)rdf32(r28 + r27);
                f7 = (f64)(f32)(f9 + (f64)(f32)(f8 * f3));
                wrf32d(r28 + r27, f7);
                f7 = (f64)(f32)(f7 * f3);
                f7 = (f64)(f32)(f8 - f7);
                r27 = rd32(r9 + 0xd4u) + 1u;
                wr32(r9 + 0xd4u, r27);
                r28 = rd32(r9 + 0xe0u);
                wrf32d(r12, f7);
                if (r27 >= r28) {
                    wr32(r9 + 0xd4u, 0u);
                }
                r7 = r7 + 4u;
                r8 = r8 + 4u;
                r9 = r9 + 4u;
                r10 = r10 + 0xcu;
                r11 = r11 + 8u;
                f2 = (f64)(f32)((f64)(f32)((f64)rdf32(r12) * f5) + f2);
                wrf32d(r12, f2);
                r12 = r12 + 4u;
                ctr = ctr - 1u;
            } while (ctr != 0u);
            f12 = (f64)rdf32(0x817fdfa8u);
            f11 = (f64)rdf32(0x817fdfacu);
            f10 = (f64)rdf32(0x817fdfa4u);
            r12 = rd32(0x817fdfbcu);
            r8 = rd32(0x817fdfc4u);
            r10 = rd32(0x817fdfc0u);
            f2 = (f64)rdf32(param_r4 + 0x140u);
            f9 = (f64)(f32)(f10 + (f64)(f32)((f64)(f32)(f12 + f11) * f6));
            wr32(0x817fdfbcu, r12 + 4u);
            f8 = (f64)(f32)(f12 + (f64)(f32)((f64)(f32)(f10 + f11) * f6));
            wr32(0x817fdfc4u, r8 + 4u);
            f2 = (f64)(f32)(f9 * f2);
            wrf32d(0x817fdfb0u, f9);
            f7 = (f64)(f32)(f11 + (f64)(f32)((f64)(f32)(f10 + f12) * f6));
            f2 = px_ctiw(f2, ppc_fctiwz(f2));
            wrf32d(0x817fdfb4u, f8);
            wrf32d(0x817fdfb8u, f7);
            wrf64(0x817fdfd0u, f2);
            r11 = rd32(0x817fdfd4u);
            wr32(0x817fdfc0u, r10 + 4u);
            wr32(r12, r11);
            f2 = (f64)(f32)(f8 * (f64)rdf32(param_r4 + 0x140u));
            f2 = px_ctiw(f2, ppc_fctiwz(f2));
            wrf64(0x817fdfc8u, f2);
            wr32(r10, rd32(0x817fdfccu));
            f2 = (f64)(f32)(f7 * (f64)rdf32(param_r4 + 0x140u));
            f2 = px_ctiw(f2, ppc_fctiwz(f2));
            wrf64(0x817fdfd8u, f2);
            wr32(r8, rd32(0x817fdfdcu));
            if (rd32(param_r4 + 0x13cu) != 0u) {
                f2 = (f64)(f32)(f9 * (f64)rdf32(param_r4 + 0x144u));
                f2 = px_ctiw(f2, ppc_fctiwz(f2));
                wrf64(0x817fdfd8u, f2);
                wr32(r3, rd32(0x817fdfdcu));
                r3 = r3 + 4u;
                f2 = (f64)(f32)(f8 * (f64)rdf32(param_r4 + 0x144u));
                f2 = px_ctiw(f2, ppc_fctiwz(f2));
                wrf64(0x817fdfd0u, f2);
                wr32(r5, rd32(0x817fdfd4u));
                r5 = r5 + 4u;
                f2 = (f64)(f32)(f7 * (f64)rdf32(param_r4 + 0x144u));
                f2 = px_ctiw(f2, ppc_fctiwz(f2));
                wrf64(0x817fdfc8u, f2);
                wr32(r6, rd32(0x817fdfccu));
                r6 = r6 + 4u;
            }
            r8 = rd32(param_r4 + 0xcu) + 1u;
            wr32(param_r4 + 0xcu, r8);
            if (r8 >= rd32(param_r4 + 0x18u)) {
                wr32(param_r4 + 0xcu, 0u);
            }
            r8 = rd32(param_r4 + 0x10u) + 1u;
            wr32(param_r4 + 0x10u, r8);
            if (r8 >= rd32(param_r4 + 0x18u)) {
                wr32(param_r4 + 0x10u, 0u);
            }
            r9 = param_r4 + 8u;
            r8 = rd32(param_r4 + 0x14u) + 1u;
            wr32(param_r4 + 0x14u, r8);
            if (r8 >= rd32(param_r4 + 0x18u)) {
                wr32(r9 + 0xcu, 0u);
            }
            r8 = rd32(param_r4 + 0x3cu);
            if (r8 != 0u) {
                r7 = rd32(param_r4 + 0x38u) + 1u;
                wr32(param_r4 + 0x38u, r7);
                if (r7 >= r8) {
                    wr32(param_r4 + 0x38u, 0u);
                }
            }
            r8 = rd32(param_r4 + 0x68u) + 1u;
            wr32(param_r4 + 0x68u, r8);
            if (r8 >= rd32(param_r4 + 0x74u)) {
                wr32(param_r4 + 0x68u, 0u);
            }
            r8 = rd32(param_r4 + 0x6cu) + 1u;
            wr32(param_r4 + 0x6cu, r8);
            if (r8 >= rd32(param_r4 + 0x78u)) {
                wr32(param_r4 + 0x6cu, 0u);
            }
            r9 = param_r4 + 8u;
            r8 = rd32(param_r4 + 0x70u) + 1u;
            wr32(param_r4 + 0x70u, r8);
            if (r8 >= rd32(param_r4 + 0x7cu)) {
                wr32(r9 + 0x68u, 0u);
            }
            r8 = rd32(param_r4 + 0xb0u) + 1u;
            wr32(param_r4 + 0xb0u, r8);
            if (r8 >= rd32(param_r4 + 0xb8u)) {
                wr32(param_r4 + 0xb0u, 0u);
            }
            r8 = rd32(param_r4 + 0xb4u) + 1u;
            wr32(param_r4 + 0xb4u, r8);
            if (r8 >= rd32(param_r4 + 0xbcu)) {
                wr32(param_r4 + 0xb4u, 0u);
            }
            r31 = r31 + 1u;
        } while (r31 < 0x60u);
    }
    return;
}

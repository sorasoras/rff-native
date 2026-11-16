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

void fn_802482ac(u32 param_r3, u32 param_r4)
{
    u32 c0lt = 0, ctr = 0, r0 = 0, r3 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0;
    u32 r24 = 0, r25 = 0, r26 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0;
    f64 f12 = 0.0, f13 = 0.0;
    wr32(0x817fdfa0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfe0u, 0u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    r0 = rd32(param_r4 + 0xb0u);
    if (r0 != 0u) {
        r0 = r0 & 0xfffffffdu;
        wr32(param_r4 + 0xb0u, r0);
    } else {
        r7 = rd32(param_r4 + 0xd8u);
        r5 = rd32(param_r3 + 4u);
        r0 = rd32(param_r3 + 8u);
        wr32(0x817fdfc0u, rd32(param_r3));
        wr32(0x817fdfc4u, r5);
        wr32(0x817fdfc8u, r0);
        if (r7 != 0u) {
            r3 = rd32(r7 + 4u);
            r0 = rd32(r7 + 8u);
            wr32(0x817fdfb4u, rd32(r7));
            wr32(0x817fdfb8u, r3);
            wr32(0x817fdfbcu, r0);
        }
        r6 = rd32(param_r4 + 0xdcu);
        if (r6 != 0u) {
            r3 = rd32(r6 + 4u);
            r0 = rd32(r6 + 8u);
            wr32(0x817fdfa8u, rd32(r6));
            wr32(0x817fdfacu, r3);
            wr32(0x817fdfb0u, r0);
        }
        r28 = 0u;
        f0 = (f64)rdf32(param_r4 + 0xacu);
        f3 = (f64)rdf32(0x80576c24u);
        f5 = (f64)(f32)((f64)rdf32(0x80576c20u) - f0);
        f6 = (f64)(f32)(f3 * (f64)rdf32(param_r4 + 0xd0u));
        f1 = (f64)rdf32(param_r4 + 0x18u);
        f7 = (f64)(f32)(f3 * (f64)rdf32(param_r4 + 0xd4u));
        f2 = (f64)rdf32(param_r4 + 0x64u);
        f3 = (f64)rdf32(param_r4 + 0x68u);
        f4 = (f64)rdf32(param_r4 + 0x9cu);
        f11 = rdf64(0x80576c28u);
        do {
            r7 = param_r4;
            r8 = param_r4;
            r5 = 0x817fdfb4u;
            r6 = 0x817fdfc0u;
            r9 = 0x817fdfa8u;
            r10 = (rd32(param_r4 + 0xcu) << 2u) & 0xfffffffcu;
            r11 = (rd32(param_r4 + 0x28u) << 2u) & 0xfffffffcu;
            r12 = (rd32(param_r4 + 0x4cu) << 2u) & 0xfffffffcu;
            r31 = (rd32(param_r4 + 0x50u) << 2u) & 0xfffffffcu;
            r30 = (rd32(param_r4 + 0x84u) << 2u) & 0xfffffffcu;
            r29 = (rd32(param_r4 + 0x88u) << 2u) & 0xfffffffcu;
            ctr = 3u;
            do {
                if (rd32(param_r4 + 0xd8u) != 0u) {
                    r25 = rd32(r5);
                    r24 = rd32(r25);
                    r25 = r25 + 4u;
                    r26 = rd32(rd32(r6));
                    wr32(0x817fdfd0u, 0x43300000u);
                    r24 = r26 + r24;
                    r24 = r24 ^ 0x80000000u;
                    wr32(r5, r25);
                    wr32(0x817fdfd4u, r24);
                    f9 = (f64)(f32)(rdf64(0x817fdfd0u) - f11);
                } else {
                    r24 = rd32(r6);
                    wr32(0x817fdfd8u, 0x43300000u);
                    r24 = rd32(r24);
                    r24 = r24 ^ 0x80000000u;
                    wr32(0x817fdfdcu, r24);
                    f9 = (f64)(f32)(rdf64(0x817fdfd8u) - f11);
                }
                r24 = rd32(r7);
                f10 = (f64)rdf32(r10 + r24);
                wrf32d(r10 + r24, (f64)(f32)(f9 + (f64)(f32)(f10 * f1)));
                if (rd32(param_r4 + 0x2cu) != 0u) {
                    r24 = rd32(r7 + 0x1cu);
                    f12 = (f64)rdf32(r11 + r24);
                    wrf32d(r11 + r24, f9);
                } else {
                    f12 = f9;
                }
                r24 = rd32(r8 + 0x34u);
                f10 = (f64)(f32)(f10 * f6);
                r26 = rd32(r6);
                f9 = (f64)rdf32(r12 + r24);
                wr32(r6, r26 + 4u);
                wrf32d(r12 + r24, (f64)(f32)(f12 + (f64)(f32)(f9 * f2)));
                r25 = rd32(r8 + 0x38u);
                f13 = (f64)rdf32(r31 + r25);
                f9 = (f64)(f32)(f9 + f13);
                wrf32d(r31 + r25, (f64)(f32)(f12 + (f64)(f32)(f13 * f3)));
                r24 = rd32(r8 + 0x6cu);
                f12 = (f64)rdf32(r30 + r24);
                f8 = (f64)(f32)(f9 + (f64)(f32)(f12 * f4));
                wrf32d(r30 + r24, f8);
                f9 = (f64)(f32)((f64)(f32)(f5 * (f64)(f32)(f12 - (f64)(f32)(f8 * f4))) + (f64)(f32)(f0 * (f64)rdf32(r7 + 0xa0u)));
                wrf32d(r7 + 0xa0u, f9);
                r25 = rd32(r8 + 0x70u);
                f12 = (f64)rdf32(r29 + r25);
                f8 = (f64)(f32)(f9 + (f64)(f32)(f12 * f4));
                wrf32d(r29 + r25, f8);
                f9 = (f64)(f32)(f10 + (f64)(f32)((f64)(f32)(f12 - (f64)(f32)(f8 * f4)) * f7));
                f8 = (f64)(f32)(f9 * (f64)rdf32(param_r4 + 0xe0u));
                f8 = px_ctiw(f8, ppc_fctiwz(f8));
                wrf64(0x817fdfd8u, f8);
                wr32(r26, rd32(0x817fdfdcu));
                if (rd32(param_r4 + 0xdcu) != 0u) {
                    r25 = rd32(r9);
                    f8 = (f64)(f32)(f9 * (f64)rdf32(param_r4 + 0xe4u));
                    wr32(r9, r25 + 4u);
                    f8 = px_ctiw(f8, ppc_fctiwz(f8));
                    wrf64(0x817fdfd8u, f8);
                    wr32(r25, rd32(0x817fdfdcu));
                }
                r5 = r5 + 4u;
                r6 = r6 + 4u;
                r7 = r7 + 4u;
                r8 = r8 + 8u;
                r9 = r9 + 4u;
                ctr = ctr - 1u;
            } while (ctr != 0u);
            r6 = rd32(param_r4 + 0xcu) + 1u;
            c0lt = r6 < rd32(param_r4 + 0x10u);
            wr32(param_r4 + 0xcu, r6);
            if (!c0lt) {
                wr32(param_r4 + 0xcu, 0u);
            }
            r6 = rd32(param_r4 + 0x2cu);
            if (r6 != 0u) {
                r5 = rd32(param_r4 + 0x28u) + 1u;
                wr32(param_r4 + 0x28u, r5);
                if (r5 >= r6) {
                    wr32(param_r4 + 0x28u, 0u);
                }
            }
            r6 = rd32(param_r4 + 0x4cu) + 1u;
            c0lt = r6 < rd32(param_r4 + 0x54u);
            wr32(param_r4 + 0x4cu, r6);
            if (!c0lt) {
                wr32(param_r4 + 0x4cu, 0u);
            }
            r6 = rd32(param_r4 + 0x50u) + 1u;
            c0lt = r6 < rd32(param_r4 + 0x58u);
            wr32(param_r4 + 0x50u, r6);
            if (!c0lt) {
                wr32(param_r4 + 0x50u, 0u);
            }
            r6 = rd32(param_r4 + 0x84u) + 1u;
            c0lt = r6 < rd32(param_r4 + 0x8cu);
            wr32(param_r4 + 0x84u, r6);
            if (!c0lt) {
                wr32(param_r4 + 0x84u, 0u);
            }
            r6 = rd32(param_r4 + 0x88u) + 1u;
            c0lt = r6 < rd32(param_r4 + 0x90u);
            wr32(param_r4 + 0x88u, r6);
            if (!c0lt) {
                wr32(param_r4 + 0x88u, 0u);
            }
            r28 = r28 + 1u;
        } while (r28 < 0x60u);
    }
    return;
}

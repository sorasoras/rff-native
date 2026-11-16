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

void fn_802490a0(u32 param_r3, u32 param_r4)
{
    u32 c0lt = 0, ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0;
    u32 r28 = 0, r29 = 0, r30 = 0;
    f64 f0 = 0.0, f1 = 0.0, f5 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fde00u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wr32(0x817fdfd4u, 0u);
    wr32(0x817fdfd8u, 0u);
    wr32(0x817fdfdcu, 0u);
    wr32(0x817fdfe0u, 0u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    r0 = rd32(param_r4 + 0x7cu);
    if (r0 != 0u) {
        r0 = r0 & 0xfffffffdu;
        wr32(param_r4 + 0x7cu, r0);
    } else {
        r7 = rd32(param_r4 + 0x90u);
        r5 = rd32(param_r3 + 4u);
        r0 = rd32(param_r3 + 8u);
        wr32(0x817fde20u, rd32(param_r3));
        wr32(0x817fde24u, r5);
        wr32(0x817fde28u, r0);
        if (r7 != 0u) {
            r3 = rd32(r7 + 4u);
            r0 = rd32(r7 + 8u);
            wr32(0x817fde14u, rd32(r7));
            wr32(0x817fde18u, r3);
            wr32(0x817fde1cu, r0);
        }
        r6 = rd32(param_r4 + 0x94u);
        if (r6 != 0u) {
            r3 = rd32(r6 + 4u);
            r0 = rd32(r6 + 8u);
            wr32(0x817fde08u, rd32(r6));
            wr32(0x817fde0cu, r3);
            wr32(0x817fde10u, r0);
        }
        a.r[0] = 0x817fde30u;
        a.r[1] = param_r4 + 0x20u;
        (void)tc_call(0x802495f8u, &a);
        f31 = rdf64(0x80576c60u);
        r30 = 0x817fde30u;
        r29 = 0u;
        do {
            r4 = rd32(param_r4 + 0x18u);
            r6 = rd32(param_r4 + 0x10u) + rd32(r30);
            if ((s32)r6 >= (s32)r4) {
                r6 = r6 - r4;
            } else {
                if ((s32)r6 < 0) {
                    r6 = r6 + r4;
                }
            }
            r0 = rd32(param_r4 + 0x14u);
            r3 = r6 - r0;
            if ((s32)r3 < 0) {
                r3 = r3 + r4;
            }
            r7 = (r3 >> 0x10u) & 0xffffu;
            r8 = r3 & 0xffffu;
            r9 = (r0 >> 0x10u) & 0xffffu;
            r28 = rd32(param_r4 + 0x78u);
            ctr = r7;
            if (r7 != 0u) {
                do {
                    r4 = (r9 << 2u) & 0xfffffffcu;
                    r0 = (r28 << 2u) & 0xfffffffcu;
                    r28 = r28 + 1u;
                    r5 = param_r4 + r0;
                    r9 = r9 + 1u;
                    r28 = r28 & 3u;
                    wrf32d(r5 + 0x48u, (f64)rdf32(rd32(param_r4) + r4));
                    r7 = r7 - 1u;
                    wrf32d(r5 + 0x58u, (f64)rdf32(rd32(param_r4 + 4u) + r4));
                    wrf32d(r5 + 0x68u, (f64)rdf32(rd32(param_r4 + 8u) + r4));
                    if (r9 >= rd32(param_r4 + 0x1cu)) {
                        r9 = 0u;
                    }
                    ctr = ctr - 1u;
                } while (ctr != 0u);
            }
            wr32(param_r4 + 0x14u, r6 & 0xffff0000u);
            a.r[0] = (r8 >> 9u) & 0x7fu;
            r3 = tc_call(0x80249708u, &a);
            r4 = param_r4;
            r7 = param_r4;
            r5 = 0x817fde14u;
            r6 = 0x817fde20u;
            r8 = 0x817fde08u;
            ctr = 3u;
            do {
                r0 = (r28 << 2u) & 0xfffffffcu;
                r28 = r28 + 1u;
                r28 = r28 & 3u;
                r9 = (r28 << 2u) & 0xfffffffcu;
                r28 = r28 + 1u;
                r11 = r4 + r9;
                r28 = r28 & 3u;
                r9 = (r28 << 2u) & 0xfffffffcu;
                r28 = r28 + 1u;
                r28 = r28 & 3u;
                f0 = (f64)rdf32(r4 + ((r28 << 2u) & 0xfffffffcu) + 0x48u);
                r28 = r28 + 1u;
                f0 = (f64)(f32)((f64)rdf32(r3 + 0xcu) * f0);
                f5 = (f64)(f32)((f64)(f32)((f64)(f32)((f64)rdf32(0x80576c5cu) + (f64)(f32)((f64)rdf32(r3) * (f64)rdf32(r4 + r0 + 0x48u))) + (f64)(f32)((f64)rdf32(r3 + 4u) * (f64)rdf32(r11 + 0x48u))) + (f64)(f32)((f64)rdf32(r3 + 8u) * (f64)rdf32(r4 + r9 + 0x48u)));
                r28 = r28 & 3u;
                f5 = (f64)(f32)(f5 + f0);
                if (rd32(param_r4 + 0x90u) != 0u) {
                    r9 = rd32(r5);
                    r0 = rd32(r9);
                    r9 = r9 + 4u;
                    r10 = rd32(rd32(r6));
                    wr32(0x817fdfb0u, 0x43300000u);
                    r0 = r10 + r0;
                    r0 = r0 ^ 0x80000000u;
                    wr32(r5, r9);
                    wr32(0x817fdfb4u, r0);
                    f1 = (f64)(f32)(rdf64(0x817fdfb0u) - f31);
                } else {
                    r9 = rd32(r6);
                    wr32(0x817fdfb8u, 0x43300000u);
                    wr32(0x817fdfbcu, rd32(r9) ^ 0x80000000u);
                    f1 = (f64)(f32)(rdf64(0x817fdfb8u) - f31);
                }
                r11 = rd32(r7);
                r10 = (rd32(param_r4 + 0xcu) << 2u) & 0xfffffffcu;
                r9 = rd32(r6);
                f0 = (f64)(f32)(f1 + (f64)(f32)(f5 * (f64)rdf32(param_r4 + 0x8cu)));
                wr32(r6, r9 + 4u);
                wrf32d(r11 + r10, f0);
                f0 = (f64)(f32)(f5 * (f64)rdf32(param_r4 + 0x98u));
                f0 = px_ctiw(f0, ppc_fctiwz(f0));
                wrf64(0x817fdfc0u, f0);
                wr32(r9, rd32(0x817fdfc4u));
                if (rd32(param_r4 + 0x94u) != 0u) {
                    r9 = rd32(r8);
                    f0 = (f64)(f32)(f5 * (f64)rdf32(param_r4 + 0x9cu));
                    wr32(r8, r9 + 4u);
                    f0 = px_ctiw(f0, ppc_fctiwz(f0));
                    wrf64(0x817fdfc0u, f0);
                    wr32(r9, rd32(0x817fdfc4u));
                }
                r4 = r4 + 0x10u;
                r5 = r5 + 4u;
                r6 = r6 + 4u;
                r7 = r7 + 4u;
                r8 = r8 + 4u;
                ctr = ctr - 1u;
            } while (ctr != 0u);
            r0 = rd32(param_r4 + 0x1cu);
            r3 = rd32(param_r4 + 0xcu) + 1u;
            wr32(param_r4 + 0x78u, r28);
            wr32(param_r4 + 0xcu, r3);
            if (r3 >= r0) {
                wr32(param_r4 + 0xcu, 0u);
            }
            r3 = rd32(param_r4 + 0x10u) + 0x10000u;
            c0lt = r3 < rd32(param_r4 + 0x18u);
            wr32(param_r4 + 0x10u, r3);
            if (!c0lt) {
                wr32(param_r4 + 0x10u, 0u);
            }
            r29 = r29 + 1u;
            r30 = r30 + 4u;
        } while (r29 < 0x60u);
    }
    return;
}

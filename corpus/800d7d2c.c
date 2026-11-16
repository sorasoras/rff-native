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

void fn_800d7d2c(u32 param_1, u32 param_2, s32 param_3)
{
    u32 c0lt = 0, ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r22 = 0;
    u32 r25 = 0, r26 = 0, r27 = 0, r28 = 0, r29 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdeb0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wrf64(0x817fdfe0u, 0.0);
    wrf32d(0x817fdfe8u, 0.0);
    wrf32d(0x817fdfecu, 0.0);
    wr32(0x817fdfacu, 0u);
    wr32(0x817fdfb0u, 0u);
    wr32(0x817fdfb4u, 0u);
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
    r7 = 0x817fdef4u;
    r5 = 0x80338b14u;
    ctr = 0x14u;
    do {
        r4 = rd32(r5 + 4u);
        r5 = r5 + 8u;
        r0 = rd32(r5);
        wr32(r7 + 4u, r4);
        wr32(r7 + 8u, r0);
        r7 = r7 + 8u;
        ctr = ctr - 1u;
    } while (ctr != 0u);
    wr32(0x817fdf9cu, param_1 ^ 0x80000000u);
    r28 = 0u;
    f1 = rdf64(0x805739d8u);
    wr32(0x817fdf98u, 0x43300000u);
    f0 = (f64)(f32)ppc_fabs((f64)(f32)(rdf64(0x817fdf98u) - f1));
    f0 = px_ctiw(f0, ppc_fctiwz(f0));
    wrf64(0x817fdfa0u, f0);
    r22 = rd32(0x817fdfa4u);
    if (r22 != 0u) {
        r0 = r22;
        while ((s32)r0 > 0) {
            r0 = ppc_mulhw(1717986919, (s32)r0);
            r28 = r28 + 1u;
            r0 = (u32)((s32)r0 >> 2);
            r0 = r0 + ((r0 >> 0x1fu) & 1u);
        }
    } else {
        r28 = 1u;
    }
    r3 = tc_call(0x80311554u, &a);
    f30 = rdf64(0x805739d8u);
    wr32(0x817fdeccu, 0u);
    r27 = r3;
    f31 = (f64)rdf32(0x805739d4u);
    r26 = 0u;
    while ((s32)r26 < (s32)r28) {
        r3 = tc_call(0x800d7c88u, &a);
        f1 = tc_lastf();
        r25 = r3;
        if (r3 != 0u) {
            r0 = ppc_mulhw(1717986919, (s32)r22);
            r3 = (u32)((s32)r0 >> 2);
            r0 = (u32)((s32)r0 >> 2);
            r3 = r3 + ((r3 >> 0x1fu) & 1u);
            r29 = r22 - (r3 * 0xau);
            r22 = r0 + ((r0 >> 0x1fu) & 1u);
            if ((s32)r26 < 0 || (s32)r26 >= 4) break;
            c0lt = param_3 < 2;
            if ((u32)param_3 == 2u) {
                r3 = tc_call(0x8031f650u, &a);
                a.r[0] = 0x817fdebcu;
                a.r[1] = r3;
                a.r[2] = rd32(((r29 << 2u) & 0xfffffffcu) - 0x7e8020b8u);
                a.r[3] = 0u;
                f1 = tc_callf(0x8031faccu, &a);
                wr32(0x817fdeccu, rd32(0x817fdebcu));
            } else if (!c0lt) {
                if (param_3 < 4) {
                    r3 = tc_call(0x8031f650u, &a);
                    a.r[0] = 0x817fdeb8u;
                    a.r[1] = r3;
                    a.r[2] = rd32(((r29 << 2u) & 0xfffffffcu) - 0x7e802090u);
                    a.r[3] = 0u;
                    f1 = tc_callf(0x8031faccu, &a);
                    wr32(0x817fdeccu, rd32(0x817fdeb8u));
                }
            } else {
                c0lt = param_3 < 0;
                if ((u32)param_3 == 0u) {
                    r3 = tc_call(0x8031f650u, &a);
                    a.r[0] = 0x817fdec4u;
                    a.r[1] = r3;
                    a.r[2] = rd32(((r29 << 2u) & 0xfffffffcu) - 0x7e802108u);
                    a.r[3] = 0u;
                    f1 = tc_callf(0x8031faccu, &a);
                    wr32(0x817fdeccu, rd32(0x817fdec4u));
                } else if (!c0lt) {
                    r3 = tc_call(0x8031f650u, &a);
                    a.r[0] = 0x817fdec0u;
                    a.r[1] = r3;
                    a.r[2] = rd32(((r29 << 2u) & 0xfffffffcu) - 0x7e8020e0u);
                    a.r[3] = 0u;
                    f1 = tc_callf(0x8031faccu, &a);
                    wr32(0x817fdeccu, rd32(0x817fdec0u));
                }
            }
            r29 = rd32(0x817fdeccu);
            r4 = 1u;
            r5 = 1u;
            r6 = 1u;
            r10 = r29 & 0xff000000u;
            r7 = 1u;
            r8 = 1u;
            r9 = 1u;
            if ((r10 - 0x80000000u) != 0u && ((r29 & 0xff800000u) + 0x7f000000u) != 0u) {
                r9 = 0u;
            }
            if (r9 == 0u && ((r29 & 0xf8000000u) + 0x70000000u) != 0u) {
                r8 = 0u;
            }
            if (r8 == 0u && (r10 + 0x40000000u) != 0u) {
                r7 = 0u;
            }
            if (r7 == 0u && ((r29 & 0xff800000u) + 0x3f000000u) != 0u) {
                r6 = 0u;
            }
            if (r6 == 0u && ((r29 & 0xf8000000u) + 0x30000000u) != 0u) {
                r5 = 0u;
            }
            if (r5 == 0u && ((r29 & 0xffffc000u) + 0x20000000u) != 0u) {
                r4 = 0u;
            }
            if (r4 == 0u) {
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                a.r[0] = 0x803568fcu;
                a.r[1] = 0x5fu;
                a.r[2] = 0x803568c8u;
                a.r[3] = r29;
                a.r[4] = r7;
                a.r[5] = r8;
                a.r[6] = r9;
                a.r[7] = r10;
                (void)tc_call(0x802e41c0u, &a);
            }
            a.r[0] = r27;
            a.r[1] = r29;
            a.r[2] = 1u;
            a.r[3] = 0u;
            r3 = tc_call(0x80311714u, &a);
            a.r[0] = 0x817fdee0u;
            a.r[1] = r3;
            (void)tc_call(0x80320fa8u, &a);
            a.r[0] = 0x817fdee0u;
            r3 = tc_call(0x80321010u, &a);
            if (r3 == 0u) break;
            a.r[0] = 0x817fdec8u;
            a.r[1] = 0x817fdeccu;
            (void)tc_call(0x80335834u, &a);
            a.r[0] = 0x817fdec8u;
            r3 = tc_call(0x8033584cu, &a);
            r4 = rd32(r3 + 4u);
            wr32(0x817fded8u, rd32(r3));
            f4 = (f64)rdf32(param_2 + 8u);
            f0 = (f64)rdf32(0x817fded8u);
            wr32(0x817fdfa4u, r26 ^ 0x80000000u);
            f1 = (f64)(f32)(f31 + f0);
            f3 = (f64)rdf32(param_2 + 4u);
            wr32(0x817fdfa0u, 0x43300000u);
            f0 = (f64)rdf32(param_2);
            f2 = rdf64(0x817fdfa0u);
            wr32(0x817fdedcu, r4);
            f2 = (f64)(f32)(f2 - f30);
            wrf32d(0x817fdeecu, f3);
            f0 = ppc_fnmsubs(f2, f1, f0);
            wrf32d(0x817fdef0u, f4);
            wrf32d(0x817fdee8u, f0);
            a.r[0] = 0x817fdee0u;
            r3 = tc_call(0x80321010u, &a);
            a.r[0] = r3;
            r3 = tc_call(0x803111f8u, &a);
            f1 = (f64)rdf32(0x817fdeecu);
            wrf32d(r3 + 0x90u, (f64)rdf32(0x817fdee8u));
            f0 = (f64)rdf32(0x817fdef0u);
            wrf32d(r3 + 0x94u, f1);
            wrf32d(r3 + 0x98u, f0);
            a.r[0] = r3;
            (void)tc_call(0x80313cecu, &a);
            a.r[0] = 0x817fded0u;
            a.r[1] = 0x817fdee0u;
            (void)tc_call(0x80320f94u, &a);
            a.r[0] = r25;
            a.r[1] = 0x817fded0u;
            a.r[2] = 0x92u;
            a.r[3] = param_2;
            (void)tc_call(0x800d83c0u, &a);
            if (rd32(0x817fdeccu) == 0u) break;
        }
        r26 = r26 + 1u;
    }
    return;
}

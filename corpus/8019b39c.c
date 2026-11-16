#include "tc_rt.h"

void fn_8019b39c(s32 param_1)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r29 = 0, r30 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf70u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    r0 = rd32((u32)param_1 + 0x40u);
    c0lt = (s32)r0 < 1;
    if (r0 == 1u) {
        a.r[0] = 0x80472f48u;
        a.r[1] = (u32)rd16((u32)param_1 + 0x18u);
        r3 = tc_call(0x800bede4u, &a);
        r29 = r3;
        r3 = tc_call(0x800545e4u, &a);
        r4 = r3;
        if (rd32(r3 + 0x10u) == 0u) {
            if (rd32(r3 + 0x20u) == 0u) {
                r3 = rd32(r3);
                a.r[0] = r3;
                a.r[1] = 0x48u;
                a.r[2] = rd32(r4 + 0xcu);
                a.r[3] = r4 + 0x18u;
                r3 = tc_call(0x80040cd8u, &a);
            } else {
                r3 = r3 + 0x24u;
                a.r[0] = r3;
                a.r[1] = 0x20u;
                a.r[2] = 0x48u;
                r3 = tc_call(0x80094e80u, &a);
            }
            r30 = r3;
        } else {
            r3 = rd32(r3);
            a.r[0] = r3;
            a.r[1] = 0x48u;
            a.r[2] = rd32(r4 + 0xcu);
            a.r[3] = r4 + 0x18u;
            r3 = tc_call(0x80040db8u, &a);
            r30 = r3;
        }
        if (r3 != 0u) {
            r3 = r3;
            a.r[0] = r3;
            a.r[1] = r29;
            (void)tc_call(0x800514a0u, &a);
        }
        r0 = (u32)rd16((u32)param_1 + 0x18u);
        wr32((u32)param_1 + 0x500u, r30);
        r0 = r0 * 0x34u;
        f3 = (f64)rdf32((u32)param_1 + 0x504u);
        f1 = (f64)rdf32((u32)param_1 + 0x508u);
        r8 = r0 - 0x7fb60e50u;
        r5 = rd32(r8 + 0x286cu);
        wr32(0x817fdfb4u, rd32(r8 + 0x2868u));
        r7 = rd32(r8 + 0x2874u);
        wr32(0x817fdfb8u, r5);
        r0 = rd32(r8 + 0x2870u);
        r5 = rd32(r8 + 0x287cu);
        f2 = (f64)rdf32(0x817fdfb4u);
        wr32(0x817fdfc4u, rd32(r8 + 0x2878u));
        f3 = (f64)(f32)(f3 + f2);
        f0 = (f64)rdf32(0x817fdfb8u);
        wr32(0x817fdfc0u, r7);
        f2 = (f64)(f32)(f1 + f0);
        f6 = (f64)rdf32(0x8057570cu);
        wr32(0x817fdfbcu, r0);
        f0 = (f64)rdf32(0x817fdfbcu);
        f4 = (f64)rdf32(0x817fdfc4u);
        f5 = (f64)(f32)(f6 * (f64)rdf32(0x817fdfc0u));
        wr32(0x817fdfc8u, r5);
        f4 = (f64)(f32)(f6 * f4);
        f1 = (f64)rdf32(0x817fdfc8u);
        wrf32d((u32)param_1 + 0x504u, f3);
        f3 = (f64)(f32)(f6 * f1);
        f1 = (f64)rdf32(0x80575710u);
        wrf32d((u32)param_1 + 0x508u, f2);
        wrf32d((u32)param_1 + 0x50cu, f0);
        r6 = rd32(r8 + 0x2880u);
        r5 = rd32(r8 + 0x2884u);
        r0 = rd32(r8 + 0x2888u);
        wrf32d(0x817fdfc0u, f5);
        wrf32d(0x817fdfc4u, f4);
        wrf32d(0x817fdfc8u, f3);
        wr32(0x817fdf84u, r6);
        wr32(0x817fdf88u, r5);
        wr32(0x817fdf8cu, r0);
        a.f[0] = f1;
        a.r[0] = 0x817fdf84u;
        a.r[1] = 0x817fdf84u;
        (void)tc_call(0x802343c8u, &a);
        r3 = rd32((u32)param_1 + 0x500u);
        f2 = (f64)rdf32(0x817fdfc0u);
        wrf32d(r3 + 0x1cu, (f64)rdf32(0x817fdf84u));
        f1 = (f64)rdf32(0x817fdfc4u);
        f0 = (f64)rdf32(0x817fdfc8u);
        wrf32d(r3 + 0x20u, (f64)rdf32(0x817fdf88u));
        wrf32d(r3 + 0x24u, (f64)rdf32(0x817fdf8cu));
        r3 = rd32((u32)param_1 + 0x500u);
        wrf32d(r3 + 0x10u, f2);
        wrf32d(r3 + 0x14u, f1);
        wrf32d(r3 + 0x18u, f0);
        f2 = (f64)rdf32((u32)param_1 + 0x50cu);
        f1 = (f64)rdf32((u32)param_1 + 0x508u);
        r3 = rd32((u32)param_1 + 0x500u);
        wrf32d(r3 + 4u, (f64)(f32)((f64)rdf32((u32)param_1 + 0x504u) + (f64)rdf32((u32)param_1 + 0x510u)));
        wrf32d(r3 + 8u, f1);
        wrf32d(r3 + 0xcu, f2);
        r3 = rd32((u32)param_1 + 0x480u);
        if (r3 != 0u) {
            a.r[0] = r3;
            r3 = tc_call(0x8004c630u, &a);
            if ((s32)r3 > 1) {
                wr32((u32)param_1 + 0x484u, 1u);
            }
        }
    } else if (!c0lt) {
        if ((s32)r0 < 3) {
            a.r[0] = 0x80472f48u;
            a.r[1] = (u32)rd16((u32)param_1 + 0x18u);
            r3 = tc_call(0x800bede4u, &a);
            r29 = r3;
            r3 = tc_call(0x800545e4u, &a);
            r4 = r3;
            if (rd32(r3 + 0x10u) == 0u) {
                if (rd32(r3 + 0x20u) == 0u) {
                    r3 = rd32(r3);
                    a.r[0] = r3;
                    a.r[1] = 0x48u;
                    a.r[2] = rd32(r4 + 0xcu);
                    a.r[3] = r4 + 0x18u;
                    r3 = tc_call(0x80040cd8u, &a);
                } else {
                    r3 = r3 + 0x24u;
                    a.r[0] = r3;
                    a.r[1] = 0x20u;
                    a.r[2] = 0x48u;
                    r3 = tc_call(0x80094e80u, &a);
                }
                r30 = r3;
            } else {
                r3 = rd32(r3);
                a.r[0] = r3;
                a.r[1] = 0x48u;
                a.r[2] = rd32(r4 + 0xcu);
                a.r[3] = r4 + 0x18u;
                r3 = tc_call(0x80040db8u, &a);
                r30 = r3;
            }
            if (r3 != 0u) {
                r3 = r3;
                a.r[0] = r3;
                a.r[1] = r29;
                (void)tc_call(0x800514a0u, &a);
            }
            r0 = (u32)rd16((u32)param_1 + 0x18u);
            wr32((u32)param_1 + 0x500u, r30);
            r0 = r0 * 0x34u;
            f3 = (f64)rdf32((u32)param_1 + 0x504u);
            f1 = (f64)rdf32((u32)param_1 + 0x508u);
            r8 = r0 - 0x7fb60e50u;
            r5 = rd32(r8 + 0x286cu);
            wr32(0x817fdf9cu, rd32(r8 + 0x2868u));
            r7 = rd32(r8 + 0x2874u);
            wr32(0x817fdfa0u, r5);
            r0 = rd32(r8 + 0x2870u);
            r5 = rd32(r8 + 0x287cu);
            f2 = (f64)rdf32(0x817fdf9cu);
            wr32(0x817fdfacu, rd32(r8 + 0x2878u));
            f3 = (f64)(f32)(f3 + f2);
            f0 = (f64)rdf32(0x817fdfa0u);
            wr32(0x817fdfa8u, r7);
            f2 = (f64)(f32)(f1 + f0);
            f6 = (f64)rdf32(0x8057570cu);
            wr32(0x817fdfa4u, r0);
            f0 = (f64)rdf32(0x817fdfa4u);
            f4 = (f64)rdf32(0x817fdfacu);
            f5 = (f64)(f32)(f6 * (f64)rdf32(0x817fdfa8u));
            wr32(0x817fdfb0u, r5);
            f4 = (f64)(f32)(f6 * f4);
            f1 = (f64)rdf32(0x817fdfb0u);
            wrf32d((u32)param_1 + 0x504u, f3);
            f3 = (f64)(f32)(f6 * f1);
            f1 = (f64)rdf32(0x80575710u);
            wrf32d((u32)param_1 + 0x508u, f2);
            wrf32d((u32)param_1 + 0x50cu, f0);
            r6 = rd32(r8 + 0x2880u);
            r5 = rd32(r8 + 0x2884u);
            r0 = rd32(r8 + 0x2888u);
            wrf32d(0x817fdfa8u, f5);
            wrf32d(0x817fdfacu, f4);
            wrf32d(0x817fdfb0u, f3);
            wr32(0x817fdf78u, r6);
            wr32(0x817fdf7cu, r5);
            wr32(0x817fdf80u, r0);
            a.f[0] = f1;
            a.r[0] = 0x817fdf78u;
            a.r[1] = 0x817fdf78u;
            (void)tc_call(0x802343c8u, &a);
            r3 = rd32((u32)param_1 + 0x500u);
            f2 = (f64)rdf32(0x817fdfa8u);
            wrf32d(r3 + 0x1cu, (f64)rdf32(0x817fdf78u));
            f1 = (f64)rdf32(0x817fdfacu);
            f0 = (f64)rdf32(0x817fdfb0u);
            wrf32d(r3 + 0x20u, (f64)rdf32(0x817fdf7cu));
            wrf32d(r3 + 0x24u, (f64)rdf32(0x817fdf80u));
            r3 = rd32((u32)param_1 + 0x500u);
            wrf32d(r3 + 0x10u, f2);
            wrf32d(r3 + 0x14u, f1);
            wrf32d(r3 + 0x18u, f0);
            f2 = (f64)rdf32((u32)param_1 + 0x50cu);
            f1 = (f64)rdf32((u32)param_1 + 0x508u);
            r3 = rd32((u32)param_1 + 0x500u);
            wrf32d(r3 + 4u, (f64)(f32)((f64)rdf32((u32)param_1 + 0x504u) + (f64)rdf32((u32)param_1 + 0x510u)));
            wrf32d(r3 + 8u, f1);
            wrf32d(r3 + 0xcu, f2);
            r3 = rd32((u32)param_1 + 0x480u);
            if (r3 != 0u) {
                a.r[0] = r3;
                r3 = tc_call(0x8004c630u, &a);
                if ((s32)r3 > 0) {
                    wr32((u32)param_1 + 0x484u, 0u);
                }
            }
        }
    } else if ((s32)r0 >= 0) {
        r4 = (u32)rd16((u32)param_1 + 0x1cu);
        if (r4 != 0x2e8u) {
            a.r[0] = 0x80472f48u;
            a.r[1] = r4;
            r3 = tc_call(0x800bede4u, &a);
            r29 = r3;
            r3 = tc_call(0x800545e4u, &a);
            r4 = r3;
            if (rd32(r3 + 0x10u) == 0u) {
                if (rd32(r3 + 0x20u) == 0u) {
                    r3 = rd32(r3);
                    a.r[0] = r3;
                    a.r[1] = 0x48u;
                    a.r[2] = rd32(r4 + 0xcu);
                    a.r[3] = r4 + 0x18u;
                    r3 = tc_call(0x80040cd8u, &a);
                } else {
                    r3 = r3 + 0x24u;
                    a.r[0] = r3;
                    a.r[1] = 0x20u;
                    a.r[2] = 0x48u;
                    r3 = tc_call(0x80094e80u, &a);
                }
                r30 = r3;
            } else {
                r3 = rd32(r3);
                a.r[0] = r3;
                a.r[1] = 0x48u;
                a.r[2] = rd32(r4 + 0xcu);
                a.r[3] = r4 + 0x18u;
                r3 = tc_call(0x80040db8u, &a);
                r30 = r3;
            }
            if (r3 != 0u) {
                r3 = r3;
                a.r[0] = r3;
                a.r[1] = r29;
                (void)tc_call(0x800514a0u, &a);
            }
            r0 = (u32)rd16((u32)param_1 + 0x1cu);
            wr32((u32)param_1 + 0x500u, r30);
            r0 = r0 * 0x34u;
            f3 = (f64)rdf32((u32)param_1 + 0x504u);
            f1 = (f64)rdf32((u32)param_1 + 0x508u);
            r8 = r0 - 0x7fb60e50u;
            r5 = rd32(r8 + 0x286cu);
            wr32(0x817fdfccu, rd32(r8 + 0x2868u));
            r7 = rd32(r8 + 0x2874u);
            wr32(0x817fdfd0u, r5);
            r0 = rd32(r8 + 0x2870u);
            r5 = rd32(r8 + 0x287cu);
            f2 = (f64)rdf32(0x817fdfccu);
            wr32(0x817fdfdcu, rd32(r8 + 0x2878u));
            f3 = (f64)(f32)(f3 + f2);
            f0 = (f64)rdf32(0x817fdfd0u);
            wr32(0x817fdfd8u, r7);
            f2 = (f64)(f32)(f1 + f0);
            f6 = (f64)rdf32(0x8057570cu);
            wr32(0x817fdfd4u, r0);
            f0 = (f64)rdf32(0x817fdfd4u);
            f4 = (f64)rdf32(0x817fdfdcu);
            f5 = (f64)(f32)(f6 * (f64)rdf32(0x817fdfd8u));
            wr32(0x817fdfe0u, r5);
            f4 = (f64)(f32)(f6 * f4);
            f1 = (f64)rdf32(0x817fdfe0u);
            wrf32d((u32)param_1 + 0x504u, f3);
            f3 = (f64)(f32)(f6 * f1);
            f1 = (f64)rdf32(0x80575710u);
            wrf32d((u32)param_1 + 0x508u, f2);
            wrf32d((u32)param_1 + 0x50cu, f0);
            r6 = rd32(r8 + 0x2880u);
            r5 = rd32(r8 + 0x2884u);
            r0 = rd32(r8 + 0x2888u);
            wrf32d(0x817fdfd8u, f5);
            wrf32d(0x817fdfdcu, f4);
            wrf32d(0x817fdfe0u, f3);
            wr32(0x817fdf90u, r6);
            wr32(0x817fdf94u, r5);
            wr32(0x817fdf98u, r0);
            a.f[0] = f1;
            a.r[0] = 0x817fdf90u;
            a.r[1] = 0x817fdf90u;
            (void)tc_call(0x802343c8u, &a);
            r3 = rd32((u32)param_1 + 0x500u);
            f2 = (f64)rdf32(0x817fdfd8u);
            wrf32d(r3 + 0x1cu, (f64)rdf32(0x817fdf90u));
            f1 = (f64)rdf32(0x817fdfdcu);
            f0 = (f64)rdf32(0x817fdfe0u);
            wrf32d(r3 + 0x20u, (f64)rdf32(0x817fdf94u));
            wrf32d(r3 + 0x24u, (f64)rdf32(0x817fdf98u));
            r3 = rd32((u32)param_1 + 0x500u);
            wrf32d(r3 + 0x10u, f2);
            wrf32d(r3 + 0x14u, f1);
            wrf32d(r3 + 0x18u, f0);
            f2 = (f64)rdf32((u32)param_1 + 0x50cu);
            f1 = (f64)rdf32((u32)param_1 + 0x508u);
            r3 = rd32((u32)param_1 + 0x500u);
            wrf32d(r3 + 4u, (f64)(f32)((f64)rdf32((u32)param_1 + 0x504u) + (f64)rdf32((u32)param_1 + 0x510u)));
            wrf32d(r3 + 8u, f1);
            wrf32d(r3 + 0xcu, f2);
            r3 = rd32((u32)param_1 + 0x480u);
            if (r3 != 0u) {
                a.r[0] = r3;
                r3 = tc_call(0x8004c630u, &a);
                if ((s32)r3 > 1) {
                    wr32((u32)param_1 + 0x484u, 1u);
                }
            }
        }
    }
    return;
}

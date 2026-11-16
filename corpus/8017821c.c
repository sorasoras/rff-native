#include "tc_rt.h"

void fn_8017821c(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r29 = 0, r30 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfa0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfe4u, 0u);
    r0 = rd32((u32)param_1 + 0xe8u);
    if (r0 != 0xffffffffu) {
        wr32(0x817fdfa8u, r0);
        r30 = 0u;
        do {
            a.r[0] = 0x817fdfa8u;
            a.r[1] = r30;
            r3 = tc_call(0x8014a0f0u, &a);
            r29 = r3;
            if (r3 != 0xffffffffu) {
                a.r[0] = 0x817fdfa8u;
                a.r[1] = r30;
                r3 = tc_call(0x8014a110u, &a);
                if (rd32((u32)param_1 + 0x19cu) == r3) {
                    a.r[0] = (u32)param_1;
                    a.r[1] = r29;
                    (void)tc_call(0x80177734u, &a);
                }
            }
            r30 = r30 + 1u;
        } while ((s32)r30 < 8);
    }
    if ((u32)rd8((u32)param_1 + 0x1a5u) == 0u) {
        a.r[0] = (u32)param_1;
        (void)tc_call(0x802558bcu, &a);
        if (rd32((u32)param_1 + 0x194u) != 0u) {
            r0 = rd32((u32)param_1 + 0x104u);
            wr32(0x817fdfb8u, rd32((u32)param_1 + 0x100u));
            wr32(0x817fdfbcu, r0);
            wr32(0x817fdfc0u, rd32((u32)param_1 + 0x108u));
            a.r[0] = rd32((u32)param_1 + 0x194u);
            a.r[1] = 0x817fdfb8u;
            (void)tc_call(0x8015811cu, &a);
            if ((((u32)rd8((u32)param_1 + 0x1a4u) >> 7u) & 1u) != 0u) {
                r4 = (u32)(s16)rd16((u32)param_1 + 0x142u);
                wr32(0x817fdfd0u, 0x43300000u);
                f2 = rdf64(0x80574f98u);
                wr32(0x817fdfd4u, r4 ^ 0x80000000u);
                f31 = (f64)(f32)((f64)rdf32(0x80574fa0u) * (f64)(f32)(rdf64(0x817fdfd0u) - f2));
                a.r[0] = (u32)param_1;
                f1 = tc_callf(0x80178164u, &a);
                f0 = (f64)rdf32(0x80574fa4u);
                wrf32d(0x817fdfc4u, f1);
                wrf32d(0x817fdfc8u, f31);
                r5 = rd32(0x817fdfc4u);
                wrf32d(0x817fdfccu, f0);
                r3 = rd32(0x817fdfc8u);
                r0 = rd32(0x817fdfccu);
                wr32(0x817fdfacu, r5);
                wr32(0x817fdfb0u, r3);
                wr32(0x817fdfb4u, r0);
                a.r[0] = rd32((u32)param_1 + 0x194u);
                a.r[1] = 0x817fdfacu;
                (void)tc_call(0x801582b4u, &a);
            }
        }
        r0 = rd32((u32)param_1 + 0x18cu);
        if (r0 != 0xffffffffu) {
            r3 = rd32((u32)param_1 + 0x190u);
            if ((s32)r3 > 0) {
                wr32((u32)param_1 + 0x190u, r3 - 1u);
            } else {
                r3 = rd32((u32)param_1 + 0x180u);
                wr32((u32)param_1 + 0x190u, r0);
                if (r3 != 0xffffffffu) {
                    if (rd32(((r3 << 2u) & 0xfffffffcu) - 0x7fca9e94u) == 0u) {
                        a.f[0] = (f64)rdf32(0x80574fa8u);
                        a.r[0] = r3;
                        a.r[1] = (u32)param_1 + 0x100u;
                        a.r[2] = 0x804b15c0u;
                        a.r[3] = 0x804890c8u;
                        r3 = tc_call(0x800d783cu, &a);
                        r29 = r3;
                    } else {
                        a.f[0] = (f64)rdf32(0x80574fa8u);
                        a.r[0] = r3;
                        a.r[1] = (u32)param_1 + 0x100u;
                        a.r[2] = 0x804b15c0u;
                        a.r[3] = 0x804890c8u;
                        r3 = tc_call(0x800d7768u, &a);
                        r29 = r3;
                        if (r3 != 0u) {
                            a.r[0] = r3;
                            (void)tc_call(0x80157f30u, &a);
                        }
                    }
                    if (r29 != 0u) {
                        r5 = rd32((u32)param_1 + 0x184u);
                        wr32(0x817fdfd0u, 0x43300000u);
                        f1 = rdf64(0x80574f98u);
                        wr32(r29 + 0x20u, r5);
                        wr32(r29 + 0x24u, 0u);
                        wr32(0x817fdfd4u, rd32((u32)param_1 + 0x188u) ^ 0x80000000u);
                        f1 = (f64)(f32)(rdf64(0x817fdfd0u) - f1);
                        a.f[0] = f1;
                        a.r[0] = r29;
                        (void)tc_call(0x80157f78u, &a);
                    }
                }
            }
        }
        r3 = rd32((u32)param_1 + 0x148u);
        if ((s32)r3 > 0) {
            r0 = r3 - 1u;
            wr32((u32)param_1 + 0x148u, r0);
            if ((s32)r0 <= 0) {
                wr8((u32)param_1 + 0x1a5u, 1u);
            }
        }
        a.r[0] = (u32)param_1;
        (void)tc_call(0x8006f778u, &a);
        wr32((u32)param_1 + 0x19cu, rd32((u32)param_1 + 0x19cu) + 1u);
    } else {
        a.r[0] = (u32)param_1;
        (void)tc_call(0x80177c88u, &a);
    }
    return;
}

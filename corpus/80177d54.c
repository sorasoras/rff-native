#include "tc_rt.h"

void fn_80177d54(s32 param_1, u32 param_2)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r30 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfa0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    r7 = 0u;
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdfe8u, 0u);
    r0 = rd32((u32)param_1 + 0xecu);
    c0lt = (s32)r0 < 3;
    if (r0 == 3u) {
        r7 = 0xdu;
    } else if (!c0lt) {
        c0lt = (s32)r0 < 5;
        if (r0 == 5u) {
            r7 = 0xfu;
        } else if (c0lt) {
            r7 = 7u;
        }
    } else {
        c0lt = (s32)r0 < 1;
        if (r0 == 1u) {
            r7 = 5u;
        } else if (!c0lt) {
            r7 = 0xau;
        } else if ((s32)r0 >= 0) {
            r7 = 2u;
        }
    }
    if ((((u32)rd8((u32)param_1 + 0x1a4u) >> 6u) & 1u) == 0u) {
        r7 = r7 | 0x20u;
    }
    a.f[0] = (f64)rdf32((u32)param_1 + 0x134u);
    a.f[1] = (f64)rdf32((u32)param_1 + 0x130u);
    a.r[0] = (u32)param_1;
    a.r[1] = 1u;
    a.r[2] = (u32)param_1 + 0x100u;
    a.r[3] = param_2;
    a.r[4] = 0u;
    a.r[5] = r7 | rd32((u32)param_1 + 0x124u);
    (void)tc_call(0x8006f570u, &a);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x802558bcu, &a);
    r3 = rd32((u32)param_1 + 0x14cu);
    r0 = rd32((u32)param_1 + 0x64u) & 0x7fffffffu;
    wr32((u32)param_1 + 0x40u, 2u);
    wr32((u32)param_1 + 0x64u, r0);
    if (r3 != 0xffffffffu) {
        if (rd32(((r3 << 2u) & 0xfffffffcu) - 0x7fca9e94u) == 0u) {
            a.f[0] = (f64)rdf32(0x80574fa8u);
            a.r[0] = r3;
            a.r[1] = (u32)param_1 + 0x100u;
            a.r[2] = 0x804b15c0u;
            a.r[3] = 0x804890c8u;
            r3 = tc_call(0x800d783cu, &a);
            r30 = r3;
            if (r3 != 0u) {
                a.f[0] = (f64)rdf32((u32)param_1 + 0x144u);
                a.r[0] = r3;
                (void)tc_call(0x80157f78u, &a);
                wr32(r30 + 0x20u, rd32((u32)param_1 + 0x150u));
                wr32(r30 + 0x24u, 0u);
                if ((((u32)rd8((u32)param_1 + 0x1a4u) >> 7u) & 1u) != 0u) {
                    r4 = (u32)(s16)rd16((u32)param_1 + 0x142u);
                    wr32(0x817fdfd8u, 0x43300000u);
                    f2 = rdf64(0x80574f98u);
                    wr32(0x817fdfdcu, r4 ^ 0x80000000u);
                    f31 = (f64)(f32)((f64)rdf32(0x80574fa0u) * (f64)(f32)(rdf64(0x817fdfd8u) - f2));
                    a.r[0] = (u32)param_1;
                    f1 = tc_callf(0x80178164u, &a);
                    f0 = (f64)rdf32(0x80574fa4u);
                    wrf32d(0x817fdfc0u, f1);
                    wrf32d(0x817fdfc4u, f31);
                    r6 = rd32(0x817fdfc0u);
                    wrf32d(0x817fdfc8u, f0);
                    r5 = rd32(0x817fdfc4u);
                    r0 = rd32(0x817fdfc8u);
                    wr32(0x817fdfa8u, r6);
                    wr32(0x817fdfacu, r5);
                    wr32(0x817fdfb0u, r0);
                    a.r[0] = r30;
                    a.r[1] = 0x817fdfa8u;
                    (void)tc_call(0x801582b4u, &a);
                }
            }
        } else {
            a.f[0] = (f64)rdf32(0x80574fa8u);
            a.r[0] = r3;
            a.r[1] = (u32)param_1 + 0x100u;
            a.r[2] = 0x804b15c0u;
            a.r[3] = 0x804890c8u;
            r3 = tc_call(0x800d7768u, &a);
            wr32((u32)param_1 + 0x194u, r3);
            if (r3 != 0u) {
                a.f[0] = (f64)rdf32((u32)param_1 + 0x144u);
                a.r[0] = r3;
                (void)tc_call(0x80157f78u, &a);
                if ((((u32)rd8((u32)param_1 + 0x1a4u) >> 7u) & 1u) != 0u) {
                    r4 = (u32)(s16)rd16((u32)param_1 + 0x142u);
                    wr32(0x817fdfd8u, 0x43300000u);
                    f2 = rdf64(0x80574f98u);
                    wr32(0x817fdfdcu, r4 ^ 0x80000000u);
                    f31 = (f64)(f32)((f64)rdf32(0x80574fa0u) * (f64)(f32)(rdf64(0x817fdfd8u) - f2));
                    a.r[0] = (u32)param_1;
                    f1 = tc_callf(0x80178164u, &a);
                    f0 = (f64)rdf32(0x80574fa4u);
                    wrf32d(0x817fdfccu, f1);
                    wrf32d(0x817fdfd0u, f31);
                    r5 = rd32(0x817fdfccu);
                    wrf32d(0x817fdfd4u, f0);
                    r3 = rd32(0x817fdfd0u);
                    r0 = rd32(0x817fdfd4u);
                    wr32(0x817fdfb4u, r5);
                    wr32(0x817fdfb8u, r3);
                    wr32(0x817fdfbcu, r0);
                    a.r[0] = rd32((u32)param_1 + 0x194u);
                    a.r[1] = 0x817fdfb4u;
                    (void)tc_call(0x801582b4u, &a);
                }
                r4 = rd32((u32)param_1 + 0x194u);
                wr32(r4 + 0x20u, rd32((u32)param_1 + 0x150u));
                wr32(r4 + 0x24u, 0u);
            }
        }
    }
    if ((((u32)rd8((u32)param_1 + 0x1a4u) >> 4u) & 1u) != 0u) {
        wr32((u32)param_1 + 0x64u, rd32((u32)param_1 + 0x64u) | 0x20000000u);
    }
    wr32((u32)param_1 + 0x19cu, 0u);
    wr8((u32)param_1 + 0x1a5u, 0u);
    return;
}

#include "tc_rt.h"

void fn_801670a4(s32 param_1, u32 param_2)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r29 = 0, r30 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfa0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wrf64(0x817fdfe0u, 0.0);
    wrf32d(0x817fdfe8u, 0.0);
    wrf32d(0x817fdfecu, 0.0);
    wr32(0x817fdfdcu, 0u);
    wr32(0x817fdfd8u, 0u);
    wr32(0x817fdfd4u, 0u);
    r29 = 0u;
    if (rd32(param_2 + 0x1468u) == 0u) {
        a.r[0] = param_2;
        r3 = tc_call(0x800b2fe8u, &a);
        if (r3 != 0u) {
            r29 = 1u;
        }
    }
    if (r29 != 0u) {
        r4 = rd32(param_2 + 0xf78u);
        wr32(param_2 + 0xf78u, r4 ^ (r4 & 1u));
        a.r[0] = param_2 + 0xf5cu;
        (void)tc_call(0x800f17bcu, &a);
        a.f[0] = (f64)rdf32(0x80574bdcu);
        a.r[0] = param_2 + 0xf5cu;
        (void)tc_call(0x800f1708u, &a);
        r5 = rd32(param_2 + 0xf78u);
        f0 = (f64)rdf32(0x80574be0u);
        f1 = (f64)rdf32(0x80574bd4u);
        wrf32d(param_2 + 0xf7cu, f0);
        wr32(param_2 + 0xf78u, r5 | (r5 ^ 0x4000u));
        wrf32d(param_2 + 0xd50u, f0);
        a.f[0] = f1;
        a.r[0] = param_2;
        a.r[1] = 1u;
        a.r[2] = 0u;
        a.r[3] = 1u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        (void)tc_call(0x800b5248u, &a);
        f1 = (f64)rdf32(0x80574be4u);
        f0 = (f64)rdf32(0x80574bd4u);
        wrf32d(0x817fdfc0u, f1);
        wrf32d(0x817fdfc4u, f1);
        wrf32d(0x817fdfc8u, f0);
        a.r[0] = param_2;
        a.r[1] = tc_lastr4();
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        f1 = tc_callf(rd32(rd32(param_2) + 0x2cu), &a);
        f31 = f1;
        r3 = rd32(0x817fdfc4u);
        r0 = rd32(0x817fdfc8u);
        wr32(0x817fdfa8u, rd32(0x817fdfc0u));
        wr32(0x817fdfacu, r3);
        wr32(0x817fdfb0u, r0);
        a.f[0] = f1;
        f1 = tc_callf(0x80262704u, &a);
        f30 = (f64)(f32)f1;
        a.f[0] = f31;
        f1 = tc_callf(0x80262b10u, &a);
        f4 = (f64)(f32)f1;
        f1 = (f64)rdf32(0x817fdfb0u);
        f3 = (f64)rdf32(0x817fdfa8u);
        wrf32d(0x817fdfc0u, ppc_fmadds(f3, f30, (f64)(f32)(f1 * f4)));
        wrf32d(0x817fdfc8u, ppc_fmadds(f3, -f4, (f64)(f32)(f1 * f30)));
        a.r[0] = 0x817fdfc0u;
        f1 = tc_callf(0x80234440u, &a);
        if (f1 > (f64)rdf32(0x80574be8u)) {
            f1 = (f64)rdf32(0x80574be4u);
            r0 = 0u;
            if ((f1 == (f64)rdf32(0x817fdfc0u) && f1 == (f64)rdf32(0x817fdfc4u)) && f1 == (f64)rdf32(0x817fdfc8u)) {
                r0 = 1u;
            }
            if (r0 == 0u) {
                a.r[0] = 0x817fdfc0u;
                a.r[1] = 0x817fdfc0u;
                (void)tc_call(0x802343e4u, &a);
            }
            a.f[0] = (f64)rdf32(0x80574becu);
            a.r[0] = 0x817fdfc0u;
            a.r[1] = 0x817fdfc0u;
            (void)tc_call(0x802343c8u, &a);
            r3 = rd32(0x817fdfc4u);
            r0 = rd32(0x817fdfc8u);
            wr32(0x817fdfb4u, rd32(0x817fdfc0u));
            wr32(0x817fdfb8u, r3);
            f2 = (f64)rdf32(0x817fdfb4u);
            wr32(0x817fdfbcu, r0);
            f1 = (f64)rdf32(0x817fdfb8u);
            f0 = (f64)rdf32(0x817fdfbcu);
            wrf32d(param_2 + 0xd18u, f2);
            wrf32d(param_2 + 0xd1cu, f1);
            wrf32d(param_2 + 0xd20u, f0);
        }
    }
    if (rd32(param_2 + 0x100u) == 1u) {
        f30 = (f64)rdf32(param_2 + 0xcf8u);
        a.r[0] = param_2;
        a.r[1] = param_2 + 0xcf4u;
        f1 = tc_callf(0x800b42e4u, &a);
        f0 = (f64)(f32)(f30 - (f64)rdf32(0x80574bf0u));
        wr32((u32)param_1 + 0xcu, rd32((u32)param_1 + 0xcu) + 1u);
        if ((f0 < f1) || (f0 == f1)) {
            a.f[0] = (f64)rdf32(0x80574bd4u);
            a.r[0] = param_2;
            a.r[1] = 0xdu;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            (void)tc_call(0x800b5248u, &a);
            r3 = rd32(param_2 + 0xf78u);
            r3 = r3 ^ (r3 & 0x4000u);
            wr32(param_2 + 0xf78u, r3 | (r3 ^ 0x40u));
        }
    }
    r30 = 0u;
    if (rd32(param_2 + 0x1468u) == 0xdu) {
        a.r[0] = param_2;
        r3 = tc_call(0x800b2fe8u, &a);
        if (r3 != 0u) {
            r30 = 1u;
        }
    }
    if (r30 != 0u) {
        r3 = rd32(param_2 + 0xe88u);
        wr32(param_2 + 0xe88u, r3 | (r3 ^ 0x80000000u));
    }
    return;
}

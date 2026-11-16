#include "tc_rt.h"

void fn_80117094(u32 param_1, u32 param_2, s32 param_3, u32 param_4)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r25 = 0, r30 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfb0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    a.r[0] = 0x8049c500u;
    a.r[1] = (u32)param_3;
    r3 = tc_call(0x800c8794u, &a);
    r30 = r3;
    if ((s32)r3 >= 0 && (s32)r3 < 171) {
        a.r[0] = 0x8049c500u;
        a.r[1] = (u32)param_3;
        r3 = tc_call(0x800c8ca4u, &a);
        if ((r3 & 0x10u) != 0u) {
            r30 = 0x49u;
        }
        f0 = (f64)rdf32(0x80574158u);
        wr32(0x817fdfd8u, 0u);
        wrf32d(0x817fdfc8u, f0);
        wrf32d(0x817fdfccu, f0);
        wrf32d(0x817fdfd0u, f0);
        wrf32d(0x817fdfd4u, f0);
        wr8(0x817fdfdcu, 0u);
        wr8(0x817fdfddu, 0u);
        if (r30 != 0x49u) {
            r0 = rd32(((param_2 << 2u) & 0xfffffffcu) - 0x7fb43fa0u) * 0xcu;
            f0 = (f64)rdf32(r0 - 0x7fcc6b60u);
            wrf32d(0x817fdfc8u, (f64)(f32)((f64)rdf32(param_4) + (f64)rdf32(r0 - 0x7fcc6b68u)));
            wrf32d(0x817fdfccu, (f64)rdf32(param_4 + 4u));
            f0 = (f64)(f32)((f64)rdf32(param_4 + 8u) + f0);
            wrf32d(0x817fdfd0u, f0);
        } else {
            f1 = (f64)rdf32(param_4);
            r0 = (u32)((s32)ppc_mulhw(1717986919, param_3) >> 2);
            r0 = r0 + ((r0 >> 0x1fu) & 1u);
            r0 = r0 * 0xau;
            r0 = (u32)param_3 - r0;
            r0 = r0 * 0xcu;
            r4 = r0 - 0x7fb43f70u;
            r3 = rd32(r0 - 0x7fb43f70u);
            r0 = rd32(r4 + 8u);
            wr32(0x817fdfb8u, r3);
            r3 = rd32(r4 + 4u);
            f0 = (f64)rdf32(0x817fdfb8u);
            wr32(0x817fdfc0u, r0);
            f1 = (f64)(f32)(f1 + f0);
            f0 = (f64)rdf32(0x817fdfc0u);
            wr32(0x817fdfbcu, r3);
            wrf32d(0x817fdfc8u, f1);
            wrf32d(0x817fdfccu, (f64)rdf32(param_4 + 4u));
            f0 = (f64)(f32)((f64)rdf32(param_4 + 8u) + f0);
            wrf32d(0x817fdfd0u, f0);
        }
        f0 = (f64)rdf32(0x80574158u);
        wr32(0x817fdfd8u, (u32)param_3);
        wrf32d(0x817fdfd4u, f0);
        wr8(0x817fdfdcu, 0u);
        wr8(0x817fdfddu, 0u);
        a.r[0] = 0x804b9da0u;
        (void)tc_call(0x8010a6e0u, &a);
        a.r[0] = r30;
        a.r[1] = 4u;
        a.r[2] = 0x270fu;
        (void)tc_call(0x800eb44cu, &a);
        a.r[0] = r30;
        a.r[1] = (u32)param_3;
        a.r[2] = 0x817fdfc8u;
        a.r[3] = 0u;
        r3 = tc_call(0x800eb4f0u, &a);
        r25 = r3;
        if (r3 != 0u) {
            wr32(param_1 + (param_2 * 0x58u) + 0x1cu, r3);
            a.r[0] = 0x8046ad74u;
            a.r[1] = r3;
            (void)tc_call(0x8007b03cu, &a);
            r6 = rd32(0x8046ad78u);
            wr8(r30 - 0x7fb79ba4u, (u8)((u32)rd8(r30 - 0x7fb79ba4u) | 2u));
            r3 = param_1 + (param_2 * 0x58u);
            wr32(r25 + 0x15cu, r6);
            wr32(rd32(r3 + 0x1cu) + 0xed4u, 0u);
            wr32(rd32(r3 + 0x1cu) + 0xed0u, 0xau);
            r3 = rd32(r3 + 0x1cu);
            a.r[0] = r3;
            a.r[1] = 0xau;
            (void)tc_call(0x800b31dcu, &a);
            r5 = param_1 + (param_2 * 0x58u);
            r6 = rd32(r5 + 0x1cu);
            wr32(r6 + 0x148u, rd32(r6 + 0x148u) | 0x400000u);
            wr8(rd32(r5 + 0x1cu) + 0x162cu, 0u);
            wr32(rd32(r5 + 0x1cu) + 0xb8u, 1u);
            r3 = rd32(r5 + 0x1cu);
            wr32(r3 + 0x9cu, rd32(r3 + 0x9cu) | 0x8000000u);
            a.r[0] = rd32(r5 + 0x1cu);
            (void)tc_call(0x800b2e68u, &a);
            f1 = tc_callf(0x80040a00u, &a);
            f2 = (f64)rdf32(0x80574160u);
            f1 = (f64)(f32)(f1 - (f64)rdf32(0x80574164u));
            r3 = rd32(param_1 + (param_2 * 0x58u) + 0x1cu);
            f1 = (f64)(f32)(f2 * f1);
            f1 = (f64)(f32)((f64)rdf32(0x8057415cu) * f1);
            a.r[0] = r3;
            a.r[1] = tc_lastr4();
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.f[0] = f1;
            a.f[1] = f2;
            f1 = tc_callf(rd32(rd32(r3) + 0x24u), &a);
            r3 = rd32(param_1 + (param_2 * 0x58u) + 0x1cu);
            a.r[0] = r3;
            a.r[1] = tc_lastr4();
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            r3 = tc_call(rd32(rd32(r3) + 0x19cu), &a);
            f1 = tc_lastf();
            r4 = tc_lastr4();
            do {
                if (r3 != 0u) {
                    r3 = rd32(param_1 + (param_2 * 0x58u) + 0x1cu);
                    a.r[0] = r3;
                    a.r[1] = r4;
                    a.r[2] = 0u;
                    a.r[3] = 0u;
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    r3 = tc_call(rd32(rd32(r3) + 0x19cu), &a);
                    if (r3 != 1u) break;
                }
                a.r[0] = 0x8049c500u;
                a.r[1] = (u32)param_3;
                r3 = tc_call(0x800c8c58u, &a);
                if ((s32)(r3 & 0xffu) > 0) {
                    a.r[0] = rd32(param_1 + (param_2 * 0x58u) + 0x1cu);
                    a.r[1] = 0u;
                    a.r[2] = 0u;
                    (void)tc_call(0x8014fd24u, &a);
                }
            } while (0);
            if ((rd32(0x80492c58u) & 0x400u) != 0u) {
                a.r[0] = 0xc4u;
                a.r[1] = 0x817fdfc8u;
                a.r[2] = param_1 + (param_2 * 0x58u) + 0x20u;
                (void)tc_call(0x800d7908u, &a);
            }
        }
    }
    return;
}

#include "tc_rt.h"

void fn_8032b440(u32 param_1, s32 param_2, s32 param_3)
{
    u32 c0lt = 0, r3 = 0, r6 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0;
    f64 f12 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfb0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wr32(0x817fdfecu, 0u);
    r6 = (u32)rd8((u32)param_2 + 0x9au);
    f3 = (f64)rdf32((u32)param_2 + 0x40u);
    f1 = (f64)rdf32((u32)param_2 + 0x44u);
    f0 = (f64)rdf32((u32)param_2 + 0x48u);
    wrf32d(0x817fdfd0u, f3);
    wrf32d(0x817fdfd4u, f1);
    wrf32d(0x817fdfd8u, f0);
    if (r6 != 0u) {
        wr32(0x817fdfe4u, r6);
        f2 = rdf64(0x80577c60u);
        wr32(0x817fdfe0u, 0x43300000u);
        wrf32d(0x817fdfd0u, (f64)(f32)(f3 + (f64)(f32)((f64)rdf32(0x80577c54u) * (f64)(f32)(rdf64(0x817fdfe0u) - f2))));
    }
    r3 = (u32)rd8((u32)param_2 + 0x9bu);
    if (r3 != 0u) {
        wr32(0x817fdfe4u, r3);
        f3 = rdf64(0x80577c60u);
        wr32(0x817fdfe0u, 0x43300000u);
        wrf32d(0x817fdfd4u, (f64)(f32)((f64)rdf32(0x817fdfd4u) + (f64)(f32)((f64)rdf32(0x80577c54u) * (f64)(f32)(rdf64(0x817fdfe0u) - f3))));
    }
    r3 = (u32)rd8((u32)param_2 + 0x9cu);
    if (r3 != 0u) {
        wr32(0x817fdfe4u, r3);
        f3 = rdf64(0x80577c60u);
        wr32(0x817fdfe0u, 0x43300000u);
        wrf32d(0x817fdfd8u, (f64)(f32)((f64)rdf32(0x817fdfd8u) + (f64)(f32)((f64)rdf32(0x80577c54u) * (f64)(f32)(rdf64(0x817fdfe0u) - f3))));
    }
    r3 = rd32((u32)param_2 + 0xc8u);
    c0lt = param_3 < 2;
    f5 = (f64)(f32)((f64)rdf32(0x817fdfd0u) + (f64)rdf32(r3 + 0x60u));
    f4 = (f64)(f32)((f64)rdf32(0x817fdfd4u) + (f64)rdf32(r3 + 0x64u));
    f1 = (f64)rdf32(0x80577c40u);
    f0 = (f64)rdf32(0x80577c48u);
    f2 = (f64)(f32)((f64)rdf32(0x817fdfd8u) + (f64)rdf32(r3 + 0x68u));
    wrf32d(0x817fdfd0u, f5);
    wrf32d(0x817fdfd4u, f4);
    wrf32d(0x817fdfd8u, f2);
    wrf32d(0x817fdfccu, f1);
    wrf32d(0x817fdfc8u, f0);
    wrf32d(0x817fdfc4u, f1);
    wrf32d(0x817fdfc0u, f0);
    wrf32d(0x817fdfbcu, f1);
    wrf32d(0x817fdfb8u, f0);
    if ((u32)param_3 == 2u) {
        if (f1 != f2) {
            a.f[0] = -f2;
            a.r[0] = 0x817fdfbcu;
            a.r[1] = 0x817fdfb8u;
            (void)tc_call(0x80320a58u, &a);
        }
        f3 = (f64)rdf32(0x817fdfbcu);
        f4 = (f64)rdf32(0x817fdfb8u);
        f1 = (f64)rdf32(0x80577c40u);
        f0 = (f64)rdf32(0x80577c48u);
        wrf32d(param_1, f4);
        wrf32d(param_1 + 4u, -f3);
        wrf32d(param_1 + 8u, f1);
        wrf32d(param_1 + 0xcu, f1);
        wrf32d(param_1 + 0x10u, f3);
        wrf32d(param_1 + 0x14u, f4);
        wrf32d(param_1 + 0x18u, f1);
        wrf32d(param_1 + 0x1cu, f1);
        wrf32d(param_1 + 0x20u, f1);
        wrf32d(param_1 + 0x24u, f1);
        wrf32d(param_1 + 0x28u, f0);
        wrf32d(param_1 + 0x2cu, f1);
    } else {
        if (c0lt) {
            c0lt = param_3 < 0;
            if ((u32)param_3 == 0u) {
                if (f1 != f5) {
                    a.f[0] = -f5;
                    a.r[0] = 0x817fdfccu;
                    a.r[1] = 0x817fdfc8u;
                    (void)tc_call(0x80320a58u, &a);
                }
                f3 = (f64)rdf32(0x817fdfccu);
                f4 = (f64)rdf32(0x817fdfc8u);
                f0 = (f64)rdf32(0x80577c40u);
                f1 = (f64)rdf32(0x80577c48u);
                wrf32d(param_1 + 4u, f0);
                wrf32d(param_1, f1);
                wrf32d(param_1 + 8u, f0);
                wrf32d(param_1 + 0xcu, f0);
                wrf32d(param_1 + 0x10u, f0);
                wrf32d(param_1 + 0x14u, f4);
                wrf32d(param_1 + 0x18u, -f3);
                wrf32d(param_1 + 0x1cu, f0);
                wrf32d(param_1 + 0x20u, f0);
                wrf32d(param_1 + 0x24u, f3);
                wrf32d(param_1 + 0x28u, f4);
                wrf32d(param_1 + 0x2cu, f0);
                return;
            }
            if (!c0lt) {
                if (f1 != f4) {
                    a.f[0] = -f4;
                    a.r[0] = 0x817fdfc4u;
                    a.r[1] = 0x817fdfc0u;
                    (void)tc_call(0x80320a58u, &a);
                }
                f2 = (f64)rdf32(0x817fdfc4u);
                f4 = (f64)rdf32(0x817fdfc0u);
                f1 = (f64)rdf32(0x80577c40u);
                f0 = (f64)rdf32(0x80577c48u);
                wrf32d(param_1, f4);
                wrf32d(param_1 + 4u, f1);
                wrf32d(param_1 + 8u, f2);
                wrf32d(param_1 + 0xcu, f1);
                wrf32d(param_1 + 0x10u, f1);
                wrf32d(param_1 + 0x14u, f0);
                wrf32d(param_1 + 0x18u, f1);
                wrf32d(param_1 + 0x1cu, f1);
                wrf32d(param_1 + 0x20u, -f2);
                wrf32d(param_1 + 0x24u, f1);
                wrf32d(param_1 + 0x28u, f4);
                wrf32d(param_1 + 0x2cu, f1);
                return;
            }
        }
        f0 = (f64)rdf32(0x817fdfd0u);
        if ((f64)rdf32(0x80577c40u) != f0) {
            a.f[0] = -f0;
            a.r[0] = 0x817fdfccu;
            a.r[1] = 0x817fdfc8u;
            (void)tc_call(0x80320a58u, &a);
        }
        f0 = (f64)rdf32(0x817fdfd4u);
        if ((f64)rdf32(0x80577c40u) != f0) {
            a.f[0] = -f0;
            a.r[0] = 0x817fdfc4u;
            a.r[1] = 0x817fdfc0u;
            (void)tc_call(0x80320a58u, &a);
        }
        f0 = (f64)rdf32(0x817fdfd8u);
        if ((f64)rdf32(0x80577c40u) != f0) {
            a.f[0] = -f0;
            a.r[0] = 0x817fdfbcu;
            a.r[1] = 0x817fdfb8u;
            (void)tc_call(0x80320a58u, &a);
        }
        f0 = (f64)rdf32(0x817fdfc4u);
        f8 = (f64)rdf32(0x817fdfc8u);
        f9 = (f64)rdf32(0x817fdfccu);
        f11 = -f0;
        f6 = (f64)rdf32(0x817fdfbcu);
        f2 = (f64)(f32)(f8 * f0);
        f5 = (f64)rdf32(0x817fdfb8u);
        f31 = (f64)(f32)(f9 * f0);
        f7 = (f64)rdf32(0x817fdfc0u);
        f4 = (f64)(f32)(f2 * f6);
        f0 = (f64)rdf32(0x80577c40u);
        f12 = (f64)(f32)(f7 * f9);
        f2 = (f64)(f32)(f2 * f5);
        wrf32d(param_1 + 0xcu, f0);
        f10 = (f64)(f32)(f4 - (f64)(f32)(f9 * f5));
        wrf32d(param_1 + 0x1cu, f0);
        f9 = (f64)(f32)(f2 + (f64)(f32)(f9 * f6));
        wrf32d(param_1 + 0x20u, f11);
        wrf32d(param_1 + 0x10u, (f64)(f32)(f7 * f6));
        wrf32d(param_1, (f64)(f32)(f7 * f5));
        wrf32d(param_1 + 8u, f9);
        wrf32d(param_1 + 0x18u, f10);
        wrf32d(param_1 + 0x14u, (f64)(f32)((f64)(f32)(f31 * f6) + (f64)(f32)(f8 * f5)));
        wrf32d(param_1 + 4u, (f64)(f32)((f64)(f32)(f31 * f5) - (f64)(f32)(f8 * f6)));
        wrf32d(param_1 + 0x24u, f12);
        wrf32d(param_1 + 0x28u, (f64)(f32)(f8 * f7));
        wrf32d(param_1 + 0x2cu, f0);
    }
    return;
}

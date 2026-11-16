#include "tc_rt.h"

void fn_802b8ab4(s32 param_1, s32 param_2)
{
    u32 c0lt = 0, r0 = 0, r5 = 0, r6 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfb0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    r0 = (u32)rd8((u32)param_2 + 0x36u);
    wr32(0x817fdfe0u, 0x43300000u);
    c0lt = (s32)r0 < 6;
    wr32(0x817fdfe8u, 0x43300000u);
    if (r0 != 6u) {
        if (!c0lt) {
            if ((s32)r0 >= 9) {
                return;
            }
        } else {
            c0lt = (s32)r0 < 3;
            if (r0 == 3u) {
                return;
            }
            if (c0lt && (s32)r0 < 1) {
                return;
            }
        }
        f3 = rdf64(0x805773b8u);
        f1 = (f64)rdf32((u32)param_1 + 0x4dcu);
        f0 = (f64)rdf32(0x80577390u);
        wr32(0x817fdfe4u, (0u - (u32)(s16)rd16((u32)param_2 + 2u)) ^ 0x80000000u);
        f4 = (f64)rdf32(0x80570ee4u);
        f1 = (f64)(f32)((f64)(f32)(rdf64(0x817fdfe0u) - f3) * f1);
        if (!(f1 < f0)) {
            if (!(f1 > f4)) {
                f4 = f1;
            }
        } else {
            f4 = -f4;
            if (!(f1 < f4)) {
                f4 = f1;
            }
        }
        wrf32d((u32)param_1 + 0x4a4u, f4);
        f3 = rdf64(0x805773b8u);
        f1 = (f64)rdf32((u32)param_1 + 0x4e4u);
        f0 = (f64)rdf32(0x80577390u);
        f4 = (f64)rdf32(0x80570ee4u);
        wr32(0x817fdfecu, (0u - (u32)(s16)rd16((u32)param_2 + 6u)) ^ 0x80000000u);
        f1 = (f64)(f32)((f64)(f32)(rdf64(0x817fdfe8u) - f3) * f1);
        if (!(f1 < f0)) {
            if (!(f1 > f4)) {
                f4 = f1;
            }
        } else {
            f4 = -f4;
            if (!(f1 < f4)) {
                f4 = f1;
            }
        }
        wrf32d((u32)param_1 + 0x4a8u, f4);
        f3 = rdf64(0x805773b8u);
        f1 = (f64)rdf32((u32)param_1 + 0x4e0u);
        f0 = (f64)rdf32(0x80577390u);
        wr32(0x817fdfe4u, (u32)(s16)rd16((u32)param_2 + 4u) ^ 0x80000000u);
        f4 = (f64)rdf32(0x80570ee4u);
        f1 = (f64)(f32)((f64)(f32)(rdf64(0x817fdfe0u) - f3) * f1);
        if (!(f1 < f0)) {
            if (!(f1 > f4)) {
                f4 = f1;
            }
        } else {
            f4 = -f4;
            if (!(f1 < f4)) {
                f4 = f1;
            }
        }
        r6 = rd32((u32)param_1 + 0xcu);
        r5 = rd32((u32)param_1 + 0x10u);
        r0 = rd32((u32)param_1 + 0x14u);
        wrf32d((u32)param_1 + 0x4acu, f4);
        f1 = (f64)rdf32((u32)param_1 + 0x4a4u);
        wr32(0x817fdfc4u, r6);
        wr32(0x817fdfc8u, r5);
        wr32(0x817fdfccu, r0);
        a.f[0] = f1;
        a.r[0] = (u32)param_1;
        a.r[1] = (u32)param_1 + 0xcu;
        (void)tc_call(0x802b8748u, &a);
        a.f[0] = (f64)rdf32((u32)param_1 + 0x4a8u);
        a.r[0] = (u32)param_1;
        a.r[1] = (u32)param_1 + 0x10u;
        (void)tc_call(0x802b8748u, &a);
        a.f[0] = (f64)rdf32((u32)param_1 + 0x4acu);
        a.r[0] = (u32)param_1;
        a.r[1] = (u32)param_1 + 0x14u;
        (void)tc_call(0x802b8748u, &a);
        f1 = (f64)rdf32((u32)param_1 + 0xcu);
        f0 = (f64)rdf32((u32)param_1 + 0x10u);
        f1 = (f64)(f32)(f1 * f1);
        f2 = (f64)rdf32((u32)param_1 + 0x14u);
        f0 = (f64)(f32)(f0 * f0);
        f2 = (f64)(f32)(f2 * f2);
        f0 = (f64)(f32)(f1 + f0);
        a.f[0] = (f64)(f32)(f2 + f0);
        f1 = tc_callf(0x80262ec0u, &a);
        f5 = (f64)(f32)((f64)rdf32(0x817fdfc4u) - (f64)rdf32((u32)param_1 + 0xcu));
        f4 = (f64)(f32)((f64)rdf32(0x817fdfc8u) - (f64)rdf32((u32)param_1 + 0x10u));
        f3 = (f64)(f32)((f64)rdf32(0x817fdfccu) - (f64)rdf32((u32)param_1 + 0x14u));
        wrf32d((u32)param_1 + 0x18u, (f64)(f32)f1);
        wrf32d(0x817fdfc4u, f5);
        wrf32d(0x817fdfc8u, f4);
        wrf32d(0x817fdfccu, f3);
        a.f[0] = (f64)(f32)((f64)(f32)(f3 * f3) + (f64)(f32)((f64)(f32)(f5 * f5) + (f64)(f32)(f4 * f4)));
        f1 = tc_callf(0x80262ec0u, &a);
        wrf32d((u32)param_1 + 0x1cu, (f64)(f32)f1);
        a.r[0] = (u32)param_1;
        (void)tc_call(0x802b87fcu, &a);
        a.r[0] = (u32)param_1;
        (void)tc_call(0x802b8990u, &a);
        if ((u32)(s8)rd8((u32)param_2 + 0x29u) == 0u && (u32)rd8((u32)param_2 + 0x28u) == 1u) {
            r0 = (u32)rd8((u32)param_2 + 0x36u);
            if (r0 == 4u || r0 == 5u) {
                f3 = rdf64(0x805773b8u);
                f1 = (f64)rdf32((u32)param_1 + 0x4e8u);
                f0 = (f64)rdf32(0x80577390u);
                wr32(0x817fdfecu, (0u - (u32)(s16)rd16((u32)param_2 + 0x2au)) ^ 0x80000000u);
                f4 = (f64)rdf32(0x80570ee8u);
                f1 = (f64)(f32)((f64)(f32)(rdf64(0x817fdfe8u) - f3) * f1);
                if (!(f1 < f0)) {
                    if (!(f1 > f4)) {
                        f4 = f1;
                    }
                } else {
                    f4 = -f4;
                    if (!(f1 < f4)) {
                        f4 = f1;
                    }
                }
                wrf32d(0x817fdfd0u, f4);
                f3 = rdf64(0x805773b8u);
                f1 = (f64)rdf32((u32)param_1 + 0x4f0u);
                f0 = (f64)rdf32(0x80577390u);
                f4 = (f64)rdf32(0x80570ee8u);
                wr32(0x817fdfe4u, (0u - (u32)(s16)rd16((u32)param_2 + 0x2eu)) ^ 0x80000000u);
                f1 = (f64)(f32)((f64)(f32)(rdf64(0x817fdfe0u) - f3) * f1);
                if (!(f1 < f0)) {
                    if (!(f1 > f4)) {
                        f4 = f1;
                    }
                } else {
                    f4 = -f4;
                    if (!(f1 < f4)) {
                        f4 = f1;
                    }
                }
                wrf32d(0x817fdfd4u, f4);
                f3 = rdf64(0x805773b8u);
                f1 = (f64)rdf32((u32)param_1 + 0x4ecu);
                f0 = (f64)rdf32(0x80577390u);
                wr32(0x817fdfecu, (u32)(s16)rd16((u32)param_2 + 0x2cu) ^ 0x80000000u);
                f4 = (f64)rdf32(0x80570ee8u);
                f1 = (f64)(f32)((f64)(f32)(rdf64(0x817fdfe8u) - f3) * f1);
                if (!(f1 < f0)) {
                    if (!(f1 > f4)) {
                        f4 = f1;
                    }
                } else {
                    f4 = -f4;
                    if (!(f1 < f4)) {
                        f4 = f1;
                    }
                }
                wrf32d(0x817fdfd8u, f4);
                if ((u32)rd8((u32)param_1 + 0x526u) != 0u) {
                    a.r[0] = 0x80547138u;
                    a.r[1] = 0x817fdfd0u;
                    a.r[2] = 0x817fdfd0u;
                    (void)tc_call(0x8023411cu, &a);
                }
                r5 = rd32((u32)param_1 + 0x6cu);
                r0 = rd32((u32)param_1 + 0x70u);
                wr32(0x817fdfb8u, rd32((u32)param_1 + 0x68u));
                f1 = (f64)rdf32(0x817fdfd0u);
                wr32(0x817fdfbcu, r5);
                wr32(0x817fdfc0u, r0);
                a.f[0] = f1;
                a.r[0] = (u32)param_1;
                a.r[1] = (u32)param_1 + 0x68u;
                (void)tc_call(0x802b8748u, &a);
                a.f[0] = (f64)rdf32(0x817fdfd4u);
                a.r[0] = (u32)param_1;
                a.r[1] = (u32)param_1 + 0x6cu;
                (void)tc_call(0x802b8748u, &a);
                a.f[0] = (f64)rdf32(0x817fdfd8u);
                a.r[0] = (u32)param_1;
                a.r[1] = (u32)param_1 + 0x70u;
                (void)tc_call(0x802b8748u, &a);
                f1 = (f64)rdf32((u32)param_1 + 0x68u);
                f0 = (f64)rdf32((u32)param_1 + 0x6cu);
                f1 = (f64)(f32)(f1 * f1);
                f2 = (f64)rdf32((u32)param_1 + 0x70u);
                f0 = (f64)(f32)(f0 * f0);
                f2 = (f64)(f32)(f2 * f2);
                f0 = (f64)(f32)(f1 + f0);
                a.f[0] = (f64)(f32)(f2 + f0);
                f1 = tc_callf(0x80262ec0u, &a);
                f5 = (f64)(f32)((f64)rdf32(0x817fdfb8u) - (f64)rdf32((u32)param_1 + 0x68u));
                f4 = (f64)(f32)((f64)rdf32(0x817fdfbcu) - (f64)rdf32((u32)param_1 + 0x6cu));
                f3 = (f64)(f32)((f64)rdf32(0x817fdfc0u) - (f64)rdf32((u32)param_1 + 0x70u));
                wrf32d((u32)param_1 + 0x74u, (f64)(f32)f1);
                wrf32d(0x817fdfb8u, f5);
                wrf32d(0x817fdfbcu, f4);
                wrf32d(0x817fdfc0u, f3);
                a.f[0] = (f64)(f32)((f64)(f32)(f3 * f3) + (f64)(f32)((f64)(f32)(f5 * f5) + (f64)(f32)(f4 * f4)));
                f1 = tc_callf(0x80262ec0u, &a);
                wrf32d((u32)param_1 + 0x78u, (f64)(f32)f1);
            }
        }
    }
    return;
}

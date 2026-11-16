#include "tc_rt.h"

void fn_801a37d0(u32 param_1, s32 param_2)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r5 = 0, r6 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf90u, 0x817fe000u);
    c0lt = param_2 < 8;
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    if ((u32)param_2 != 8u) {
        if (!c0lt) {
            return;
        }
        if ((u32)param_2 != 0u) {
            return;
        }
        if (rd32(param_1 + 0xef0u) == 0u) {
            return;
        }
        f0 = (f64)rdf32(0x80575868u);
        wrf32d(0x817fdfe8u, f0);
        wrf32d(0x817fdfe4u, f0);
        wrf32d(0x817fdfe0u, f0);
        a.r[0] = rd32(param_1 + 0x70u);
        a.r[1] = 0x8033b014u;
        r3 = tc_call(0x80031be0u, &a);
        r6 = rd32(r3 + 0x50u);
        f1 = (f64)rdf32(0x80575868u);
        f0 = (f64)rdf32(0x8057591cu);
        wrf32d(0x817fdfe0u, (f64)rdf32(r6 + 0xcu));
        wrf32d(0x817fdfe4u, (f64)rdf32(r6 + 0x1cu));
        wrf32d(0x817fdfe8u, (f64)rdf32(r6 + 0x2cu));
        wrf32d(0x817fdfd4u, f1);
        wrf32d(0x817fdfd8u, f0);
        wrf32d(0x817fdfdcu, f1);
        a.r[0] = 0x817fdfe0u;
        a.r[1] = 0x817fdfd4u;
        a.r[2] = 0x817fdfe0u;
        (void)tc_call(0x80234380u, &a);
        r3 = rd32(0x817fdfe4u);
        r0 = rd32(0x817fdfe8u);
        wr32(0x817fdfb0u, rd32(0x817fdfe0u));
        wr32(0x817fdfb4u, r3);
        wr32(0x817fdfb8u, r0);
        a.r[0] = rd32(param_1 + 0xef0u);
        a.r[1] = 0x817fdfb0u;
        (void)tc_call(0x8015811cu, &a);
    } else {
        if (rd32(param_1 + 0xef4u) != 0u) {
            f0 = (f64)rdf32(0x80575868u);
            r3 = rd32(param_1 + 0x70u);
            wrf32d(0x817fdfd0u, f0);
            wrf32d(0x817fdfccu, f0);
            wrf32d(0x817fdfc8u, f0);
            a.r[0] = r3;
            a.r[1] = 0x8033b014u;
            r3 = tc_call(0x80031be0u, &a);
            r3 = rd32(r3 + 0x50u);
            f1 = (f64)rdf32(r3 + 0x1cu);
            f0 = (f64)rdf32(r3 + 0x2cu);
            wrf32d(0x817fdfc8u, (f64)rdf32(r3 + 0xcu));
            wrf32d(0x817fdfccu, f1);
            r5 = rd32(0x817fdfc8u);
            wrf32d(0x817fdfd0u, f0);
            r3 = rd32(0x817fdfccu);
            r0 = rd32(0x817fdfd0u);
            wr32(0x817fdfa4u, r5);
            wr32(0x817fdfa8u, r3);
            wr32(0x817fdfacu, r0);
            a.r[0] = rd32(param_1 + 0xef4u);
            a.r[1] = 0x817fdfa4u;
            f1 = tc_callf(0x8015811cu, &a);
            a.r[0] = param_1;
            a.r[1] = tc_lastr4();
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            f1 = tc_callf(rd32(rd32(param_1) + 0x2cu), &a);
            f0 = (f64)rdf32(0x80575868u);
            wrf32d(0x817fdfc0u, f1);
            wrf32d(0x817fdfbcu, f0);
            r3 = rd32(0x817fdfc0u);
            wrf32d(0x817fdfc4u, f0);
            r0 = rd32(0x817fdfc4u);
            wr32(0x817fdf98u, rd32(0x817fdfbcu));
            wr32(0x817fdf9cu, r3);
            wr32(0x817fdfa0u, r0);
            a.r[0] = rd32(param_1 + 0xef4u);
            a.r[1] = 0x817fdf98u;
            (void)tc_call(0x801582b4u, &a);
        }
    }
    return;
}

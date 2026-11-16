#include "tc_rt.h"

void fn_801a696c(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfc0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wr32(0x817fdfecu, 0u);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x800d5e7cu, &a);
    if (rd32((u32)param_1 + 0x98u) == 4u) {
        r6 = rd32((u32)param_1 + 4u);
        r3 = rd32((u32)param_1 + 0xb8u) + 1u;
        r5 = rd32((u32)param_1 + 8u);
        wr32(0x817fdfe4u, r3);
        r4 = rd32((u32)param_1 + 0xcu);
        wr32(0x817fdfe0u, 0x43300000u);
        f1 = (f64)rdf32((u32)param_1 + 0xc0u);
        f0 = (f64)rdf32((u32)param_1 + 0xc8u);
        f2 = (f64)rdf32(0x805759a8u);
        f31 = (f64)(f32)((f64)rdf32(0x80570900u) * (f64)(f32)(rdf64(0x817fdfe0u) - rdf64(0x805759b8u)));
        wr32(0x817fdfd4u, r6);
        wr32(0x817fdfd8u, r5);
        f31 = (f64)(f32)(f31 + f1);
        wr32(0x817fdfdcu, r4);
        f31 = (f64)(f32)(f31 + f0);
        wr32((u32)param_1 + 0xb8u, r3);
        wrf32d((u32)param_1 + 0xc8u, f31);
        if (f31 < f2) {
            f31 = f2;
            r3 = rd32((u32)param_1 + 0xccu);
            f0 = (f64)(f32)((f64)rdf32(0x805759b0u) * (f64)rdf32((u32)param_1 + 0xc4u));
            wr32((u32)param_1 + 0xb8u, 0u);
            r0 = r3 - 1u;
            wrf32d((u32)param_1 + 0xc8u, f2);
            wr32((u32)param_1 + 0xccu, r0);
            wrf32d((u32)param_1 + 0xc0u, f0);
            if ((s32)r0 <= 0) {
                r3 = rd32((u32)param_1 + 0xa4u);
                wr32((u32)param_1 + 0x98u, 1u);
                a.r[0] = r3;
                (void)tc_call(0x800cf688u, &a);
                f1 = (f64)rdf32((u32)param_1 + 0xd4u);
                f0 = (f64)rdf32((u32)param_1 + 0xd8u);
                wrf32d((u32)param_1 + 0x1cu, (f64)rdf32((u32)param_1 + 0xd0u));
                wrf32d((u32)param_1 + 0x20u, f1);
                wrf32d((u32)param_1 + 0x24u, f0);
            }
        }
        r3 = rd32((u32)param_1 + 0xdcu);
        f3 = (f64)(f32)((f64)rdf32((u32)param_1 + 0xbcu) + f31);
        f2 = (f64)(f32)((f64)rdf32((u32)param_1 + 0xc0u) * (f64)rdf32(0x80570904u));
        f1 = (f64)rdf32(0x817fdfd4u);
        f0 = (f64)rdf32(0x817fdfdcu);
        wrf32d(0x817fdfd8u, f3);
        wrf32d((u32)param_1 + 0xc0u, f2);
        wrf32d((u32)param_1 + 4u, f1);
        wrf32d((u32)param_1 + 8u, f3);
        wrf32d((u32)param_1 + 0xcu, f0);
        if (r3 != 0u) {
            a.r[0] = r3;
            r3 = tc_call(0x80320fe4u, &a);
            if (r3 != 0u) {
                r3 = rd32(0x817fdfd8u);
                r0 = rd32(0x817fdfdcu);
                wr32(0x817fdfc8u, rd32(0x817fdfd4u));
                wr32(0x817fdfccu, r3);
                wr32(0x817fdfd0u, r0);
                a.r[0] = rd32((u32)param_1 + 0xdcu);
                a.r[1] = 0x817fdfc8u;
                (void)tc_call(0x8015811cu, &a);
            }
        }
    }
    return;
}

#include "tc_rt.h"

void fn_800a82b8(s32 param_1)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r5 = 0, r29 = 0, r30 = 0;
    f64 f0 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfb0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    a.r[0] = rd32((u32)param_1 + 0x80u);
    a.r[1] = 0x817fdfb8u;
    r3 = tc_call(0x80043c58u, &a);
    r5 = rd32(0x817fdfb8u);
    r30 = r3;
    for (;;) {
        r30 = r30 - 1u;
        if ((s32)r30 < 0) break;
        if ((u32)(s8)rd8(r5 + 0x5du) == 0u) {
            r0 = (u32)rd8(r5 + 0x5fu);
            c0lt = (s32)r0 < 6;
            if (r0 == 6u) {
                r29 = 0u;
            } else if (!c0lt) {
                if ((s32)r0 >= 9) {
                    r29 = 0u;
                } else {
                    r29 = 1u;
                }
            } else {
                c0lt = (s32)r0 < 3;
                if (r0 == 3u) {
                    r29 = 0u;
                } else if (!c0lt) {
                    r29 = 3u;
                } else if ((s32)r0 >= 1) {
                    r29 = 1u;
                } else {
                    r29 = 0u;
                }
            }
            if ((r29 & 1u) != 0u) {
                f2 = (f64)rdf32(r5 + 0x14u);
                f0 = (f64)rdf32(r5 + 0xcu);
                wrf32d(0x817fdfe4u, (f64)rdf32(r5 + 0x10u));
                wrf32d(0x817fdfe0u, f0);
                r5 = rd32(0x817fdfe4u);
                wrf32d(0x817fdfe8u, f2);
                r0 = rd32(0x817fdfe8u);
                wr32(0x817fdfc8u, rd32(0x817fdfe0u));
                wr32(0x817fdfccu, r5);
                wr32(0x817fdfd0u, r0);
                a.r[0] = 0x817fdfc8u;
                a.r[1] = (u32)param_1;
                (void)tc_call(0x800a8018u, &a);
            }
            if ((r29 & 2u) != 0u) {
                r5 = rd32(0x817fdfb8u);
                f2 = (f64)rdf32(r5 + 0x70u);
                f0 = (f64)rdf32(r5 + 0x68u);
                wrf32d(0x817fdfd8u, (f64)rdf32(r5 + 0x6cu));
                wrf32d(0x817fdfd4u, f0);
                r5 = rd32(0x817fdfd8u);
                wrf32d(0x817fdfdcu, f2);
                r0 = rd32(0x817fdfdcu);
                wr32(0x817fdfbcu, rd32(0x817fdfd4u));
                wr32(0x817fdfc0u, r5);
                wr32(0x817fdfc4u, r0);
                a.r[0] = 0x817fdfbcu;
                a.r[1] = (u32)param_1 + 0x40u;
                (void)tc_call(0x800a8018u, &a);
            }
        }
        r5 = rd32(0x817fdfb8u) + 0x84u;
        wr32(0x817fdfb8u, r5);
    }
    if ((s32)rd32((u32)param_1 + 0x38u) > (s32)rd32((u32)param_1 + 0x34u)) {
        wr32((u32)param_1 + 0x3cu, 0xffffffffu);
    }
    if ((s32)rd32((u32)param_1 + 0x78u) > (s32)rd32((u32)param_1 + 0x74u)) {
        wr32((u32)param_1 + 0x7cu, 0xffffffffu);
    }
    return;
}

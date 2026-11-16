#include "tc_rt.h"

void fn_801c9bc4(s32 param_1, s32 param_2)
{
    u32 ctr = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0;
    TcArgs a = {0};
    r4 = (u32)param_2;
    r6 = (u32)param_1;
    wrf32d((u32)param_1 + 8u, (f64)rdf32(0x80575de0u));
    r7 = 0u;
    wr32((u32)param_1 + 0xcu, 0u);
    ctr = 0xau;
    do {
        r5 = rd32(r4 + 0x1694u);
        if (r5 != 0u) {
            wrf32d(r6 + 0x10u, (f64)rdf32(r5 + 0xcf4u));
            wrf32d(r6 + 0x14u, (f64)rdf32(r5 + 0xcf8u));
            wrf32d(r6 + 0x18u, (f64)rdf32(r5 + 0xcfcu));
            wr32(r5 + 0x9cu, rd32(r5 + 0x9cu) | 0x24000000u);
        }
        r5 = rd32(r4 + 0x1698u);
        if (r5 != 0u) {
            wrf32d(r6 + 0x1cu, (f64)rdf32(r5 + 0xcf4u));
            wrf32d(r6 + 0x20u, (f64)rdf32(r5 + 0xcf8u));
            wrf32d(r6 + 0x24u, (f64)rdf32(r5 + 0xcfcu));
            wr32(r5 + 0x9cu, rd32(r5 + 0x9cu) | 0x24000000u);
        }
        r5 = rd32(r4 + 0x169cu);
        if (r5 != 0u) {
            wrf32d(r6 + 0x28u, (f64)rdf32(r5 + 0xcf4u));
            wrf32d(r6 + 0x2cu, (f64)rdf32(r5 + 0xcf8u));
            wrf32d(r6 + 0x30u, (f64)rdf32(r5 + 0xcfcu));
            wr32(r5 + 0x9cu, rd32(r5 + 0x9cu) | 0x24000000u);
        }
        r4 = r4 + 0xcu;
        r6 = r6 + 0x24u;
        r7 = r7 + 2u;
        ctr = ctr - 1u;
    } while (ctr != 0u);
    wr32((u32)param_1 + 0x178u, 0u);
    a.r[0] = (u32)param_1 + 0x17cu;
    a.r[1] = 0x121u;
    (void)tc_call(0x8020bf1cu, &a);
    return;
}

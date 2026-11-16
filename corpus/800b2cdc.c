#include "tc_rt.h"

u32 fn_800b2cdc(f64 param_1, s32 param_2, u32 param_3, u32 param_4, u32 param_5, u32 param_6, u32 param_7)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r10 = 0;
    f64 f0 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    r10 = rd32((u32)param_2 + 0x1460u);
    if (r10 != 0u) {
        f0 = (f64)rdf32(param_3);
        wr32((u32)param_2 + 0x1460u, rd32(r10 + 0x20u));
        f2 = (f64)rdf32(param_3 + 4u);
        wrf32d(r10, f0);
        f0 = (f64)rdf32(param_3 + 8u);
        wrf32d(r10 + 4u, f2);
        wrf32d(r10 + 8u, f0);
        wrf32d(r10 + 0xcu, param_1);
        wr32(r10 + 0x10u, param_4);
        wr32(r10 + 0x18u, param_6);
        wr32(r10 + 0x1cu, param_7);
        wr32(r10 + 0x14u, param_5);
        wr32(r10 + 0x20u, 0u);
        r4 = rd32((u32)param_2 + 0x1464u);
        if (r4 != 0u) {
            for (;;) {
                r0 = rd32(r4 + 0x20u);
                if (r0 == 0u) break;
                r4 = r0;
            }
            wr32(r4 + 0x20u, r10);
        } else {
            wr32((u32)param_2 + 0x1464u, r10);
        }
        a.r[0] = (u32)param_2;
        a.r[1] = 0xeu;
        r3 = tc_call(0x800b1aa4u, &a);
        if (r3 == 0u) {
            a.r[0] = (u32)param_2;
            a.r[1] = 0xeu;
            (void)tc_call(0x800b31a0u, &a);
        } else {
            r3 = rd32((u32)param_2 + 0xe88u);
            wr32((u32)param_2 + 0xe88u, r3 | (r3 ^ 0x80000000u));
        }
        r3 = 1u;
    } else {
        r3 = 0u;
    }
    return r3;
}

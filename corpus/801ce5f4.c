#include "tc_rt.h"

void fn_801ce5f4(u32 param_1, s32 param_2)
{
    u32 c0lt = 0, r0 = 0, r3 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfc0u, 0x817fe000u);
    c0lt = param_2 < 3;
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    if ((u32)param_2 != 3u) {
        if (!c0lt) {
            return;
        }
        if ((u32)param_2 != 0u) {
            return;
        }
        r3 = rd32(param_1 + 0xd30u);
        if (r3 == 0u) {
            return;
        }
        a.r[0] = r3;
        r3 = tc_call(0x80320fe4u, &a);
        if (r3 == 0u) {
            a.r[0] = rd32(param_1 + 0xd30u);
            (void)tc_call(0x80157e6cu, &a);
            wr32(param_1 + 0xd30u, 0u);
            return;
        }
        f0 = (f64)rdf32(0x80575ea8u);
        wrf32d(0x817fdff4u, f0);
        wrf32d(0x817fdff0u, f0);
        wrf32d(0x817fdfecu, f0);
        a.r[0] = param_1;
        a.r[1] = rd32(param_1 + 0x70u);
        a.r[2] = 0x38u;
        a.r[3] = 0x817fdfecu;
        r3 = tc_call(0x801e87c8u, &a);
        if (r3 == 0u) {
            return;
        }
        r3 = rd32(0x817fdff0u);
        r0 = rd32(0x817fdff4u);
        wr32(0x817fdfd4u, rd32(0x817fdfecu));
        wr32(0x817fdfd8u, r3);
        wr32(0x817fdfdcu, r0);
        a.r[0] = rd32(param_1 + 0xd30u);
        a.r[1] = 0x817fdfd4u;
        f1 = tc_callf(0x8015811cu, &a);
        a.r[0] = param_1;
        a.r[1] = tc_lastr4();
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.f[0] = f1;
        f1 = tc_callf(rd32(rd32(param_1) + 0x2cu), &a);
        f0 = (f64)rdf32(0x80575ea8u);
        wrf32d(0x817fdfe4u, f1);
        wrf32d(0x817fdfe0u, f0);
        r3 = rd32(0x817fdfe4u);
        wrf32d(0x817fdfe8u, f0);
        r0 = rd32(0x817fdfe8u);
        wr32(0x817fdfc8u, rd32(0x817fdfe0u));
        wr32(0x817fdfccu, r3);
        wr32(0x817fdfd0u, r0);
        a.r[0] = rd32(param_1 + 0xd30u);
        a.r[1] = 0x817fdfc8u;
        (void)tc_call(0x801582b4u, &a);
    } else {
        r3 = rd32(param_1 + 0xeccu);
        if (r3 != 0u) {
            a.r[0] = r3;
            r3 = tc_call(0x80320fe4u, &a);
            if (r3 == 0u) {
                a.r[0] = rd32(param_1 + 0xeccu);
                (void)tc_call(0x80157e6cu, &a);
                wr32(param_1 + 0xeccu, 0u);
            }
        }
    }
    return;
}

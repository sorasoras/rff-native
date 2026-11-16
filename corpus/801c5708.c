#include "tc_rt.h"

void fn_801c5708(s32 param_1, s32 param_2)
{
    u32 r0 = 0, r3 = 0, r5 = 0, r6 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfc0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    if (rd32((u32)param_1 + 0x1d0u) != 0u) {
        a.r[0] = rd32((u32)param_2 + 0x70u);
        a.r[1] = rd32(0x80570970u);
        r3 = tc_call(0x80031be0u, &a);
        if (r3 != 0u) {
            r5 = rd32(r3 + 0x50u);
            r6 = rd32(0x804890ecu);
            f3 = (f64)rdf32(r5 + 0x2cu);
            f2 = (f64)rdf32(r5 + 0x1cu);
            f0 = (f64)rdf32(r5 + 0xcu);
            r5 = rd32(0x804890f0u);
            r0 = rd32(0x804890f4u);
            wrf32d(0x817fdfe0u, f0);
            f1 = (f64)rdf32(0x80575d58u);
            wrf32d(0x817fdfe4u, f2);
            wrf32d(0x817fdfe8u, f3);
            wr32(0x817fdfd4u, r6);
            wr32(0x817fdfd8u, r5);
            wr32(0x817fdfdcu, r0);
            a.f[0] = f1;
            a.r[0] = 0x817fdfd4u;
            a.r[1] = 0x817fdfd4u;
            (void)tc_call(0x802343c8u, &a);
            a.r[0] = 0x817fdfe0u;
            a.r[1] = 0x817fdfd4u;
            a.r[2] = 0x817fdfe0u;
            (void)tc_call(0x80234380u, &a);
            r3 = rd32(0x817fdfe4u);
            r0 = rd32(0x817fdfe8u);
            wr32(0x817fdfc8u, rd32(0x817fdfe0u));
            wr32(0x817fdfccu, r3);
            wr32(0x817fdfd0u, r0);
            a.r[0] = rd32((u32)param_1 + 0x1d0u);
            a.r[1] = 0x817fdfc8u;
            (void)tc_call(0x8015811cu, &a);
        }
    }
    return;
}

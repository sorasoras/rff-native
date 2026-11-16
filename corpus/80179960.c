#include "tc_rt.h"

u32 fn_80179960(u32 param_1)
{
    u32 r0 = 0, r3 = 0, r6 = 0, r30 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfb0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    a.r[0] = rd32(param_1 + 0x78u);
    a.r[1] = 3u;
    r3 = tc_call(0x80031cf8u, &a);
    r31 = r3;
    if (r3 != 0u) {
        f0 = (f64)rdf32(0x80574ff0u);
        r30 = param_1 + 0x80u;
        wrf32d(0x817fdfe4u, f0);
        wrf32d(0x817fdfe0u, f0);
        wrf32d(0x817fdfdcu, f0);
        wrf32d(0x817fdfd0u, f0);
        wrf32d(0x817fdfd4u, f0);
        wrf32d(0x817fdfd8u, f0);
        a.r[0] = 0x817fdfdcu;
        a.r[1] = rd32(r3 + 0x50u);
        a.r[2] = 0x817fdfd0u;
        (void)tc_call(0x80042474u, &a);
        a.r[0] = 0x817fdfdcu;
        a.r[1] = param_1 + 4u;
        a.r[2] = 0x817fdfdcu;
        (void)tc_call(0x80234380u, &a);
        r3 = rd32(r31 + 0x40u);
        if (r3 != 0u) {
            r3 = rd32(r3 + 0x20u);
            r31 = r3 + 0x40u;
        } else {
            r31 = rd32(r31 + 0x54u);
        }
        r6 = rd32(0x817fdfe0u);
        r0 = rd32(0x817fdfe4u);
        wr32(0x817fdfc4u, rd32(0x817fdfdcu));
        wr32(0x817fdfc8u, r6);
        wr32(0x817fdfccu, r0);
        a.r[0] = 0x817fdfc4u;
        a.r[1] = r31;
        a.r[2] = 0x817fdfc4u;
        (void)tc_call(0x80234380u, &a);
        r6 = rd32(0x817fdfe0u);
        r0 = rd32(0x817fdfe4u);
        wr32(0x817fdfb8u, rd32(0x817fdfdcu));
        wr32(0x817fdfbcu, r6);
        wr32(0x817fdfc0u, r0);
        a.r[0] = 0x817fdfb8u;
        a.r[1] = r31 + 0xcu;
        a.r[2] = 0x817fdfb8u;
        f1 = tc_callf(0x80234380u, &a);
        a.r[0] = param_1;
        a.r[1] = tc_lastr4();
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.f[0] = f1;
        f1 = tc_callf(rd32(rd32(param_1) + 0x2cu), &a);
        a.f[0] = f1;
        a.r[0] = r30;
        a.r[1] = 0x817fdfdcu;
        a.r[2] = 0x817fdfc4u;
        a.r[3] = 0x817fdfb8u;
        (void)tc_call(0x800ca4dcu, &a);
        r3 = r30;
    } else {
        a.r[0] = param_1;
        r3 = tc_call(0x800da1fcu, &a);
    }
    return r3;
}

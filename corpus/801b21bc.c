#include "tc_rt.h"

u32 fn_801b21bc(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r6 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfc0u, 0x817fe000u);
    f0 = (f64)rdf32(0x80575b90u);
    wr32(0x817fe004u, 0x817ff000u);
    f3 = (f64)rdf32(0x80575bd0u);
    wr32(0x817fdffcu, 0u);
    f2 = (f64)rdf32(0x80575bd4u);
    wr32(0x817fdff8u, 0u);
    f1 = (f64)rdf32(0x80575bd8u);
    wrf32d(0x817fdfecu, f3);
    wrf32d(0x817fdff0u, f2);
    wrf32d(0x817fdff4u, f1);
    wrf32d(0x817fdfe8u, f0);
    wrf32d(0x817fdfe4u, f0);
    wrf32d(0x817fdfe0u, f0);
    a.r[0] = 0x817fdfe0u;
    a.r[1] = 0x817fdfecu;
    (void)tc_call(0x801b0cecu, &a);
    a.r[0] = 0x817fdfe0u;
    (void)tc_call(0x801b0a04u, &a);
    a.r[0] = (u32)param_1;
    r3 = tc_call(0x801b2e30u, &a);
    if (r3 != 0u) {
        f0 = (f64)rdf32(0x80575b90u);
        wrf32d(0x817fdfdcu, f0);
        wrf32d(0x817fdfd8u, f0);
        wrf32d(0x817fdfd4u, f0);
        a.r[0] = 0x817fdfd4u;
        a.r[1] = 0u;
        (void)tc_call(0x801b0e38u, &a);
        r3 = tc_call(0x801b0c80u, &a);
        r31 = rd32(r3 + 0xbcu);
        if (r31 != 0u) {
            r3 = tc_call(0x80097da4u, &a);
            r3 = rd32(r3 + 0xcu);
            a.r[0] = r3;
            a.r[1] = rd32((u32)param_1 + 8u);
            a.r[2] = 0xd7u;
            r3 = tc_call(0x800ed39cu, &a);
            a.r[0] = r31;
            a.r[1] = (u32)(s8)r3;
            a.r[2] = 1u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.f[0] = (f64)rdf32(0x80575b98u);
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            (void)tc_call(rd32(rd32(r31) + 0x54u), &a);
        }
        a.r[0] = 0x817fdfd4u;
        (void)tc_call(0x801b0b54u, &a);
    }
    r3 = tc_call(0x801b0c80u, &a);
    f1 = tc_lastf();
    r31 = r3;
    if (r3 != 0u) {
        a.r[0] = r3;
        f1 = tc_callf(0x80182db8u, &a);
    }
    a.r[0] = r31;
    a.r[1] = (u32)param_1 + 0x5ecu;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    (void)tc_call(rd32(rd32(r31) + 0x1cu), &a);
    wrf32d(r31 + 0x10u, (f64)rdf32((u32)param_1 + 0x5f8u));
    wrf32d(r31 + 0x14u, (f64)rdf32((u32)param_1 + 0x5fcu));
    wrf32d(r31 + 0x18u, (f64)rdf32((u32)param_1 + 0x600u));
    r6 = rd32(0x803724acu);
    r0 = rd32(0x803724b0u);
    wr32(0x817fdfc8u, rd32(0x803724a8u));
    wr32(0x817fdfccu, r6);
    wr32(0x817fdfd0u, r0);
    a.r[0] = (u32)param_1;
    a.r[1] = 0u;
    a.r[2] = 0x817fdfc8u;
    (void)tc_call(0x801b2420u, &a);
    return 1u;
}

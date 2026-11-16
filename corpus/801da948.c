#include "tc_rt.h"

u32 fn_801da948(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfa0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wrf64(0x817fdfe0u, 0.0);
    wrf32d(0x817fdfe8u, 0.0);
    wrf32d(0x817fdfecu, 0.0);
    f30 = (f64)rdf32(0x80576170u);
    wr32(0x817fdfdcu, 0u);
    r31 = 0u;
    wr32(0x817fdfd8u, 0u);
    wr32(0x817fdfd4u, 0u);
    r29 = (u32)param_1;
    r3 = rd32((u32)param_1 + 0x1a4u);
    a.r[0] = r3;
    a.r[1] = 0u;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.f[0] = 0.0;
    r3 = tc_call(rd32(rd32(r3) + 0x28u), &a);
    r30 = 0u;
    r0 = rd32(r3 + 4u);
    f31 = (f64)rdf32(0x80576090u);
    wr32(0x817fdfc0u, rd32(r3));
    wr32(0x817fdfc4u, r0);
    wr32(0x817fdfc8u, rd32(r3 + 8u));
    wrf32d(0x817fdfbcu, f31);
    wrf32d(0x817fdfb8u, f31);
    wrf32d(0x817fdfb4u, f31);
    do {
        r0 = rd32(r29 + 0xd18u);
        wr32(0x817fdfa8u, rd32(r29 + 0xd14u));
        wr32(0x817fdfacu, r0);
        wr32(0x817fdfb0u, rd32(r29 + 0xd1cu));
        a.r[0] = 0x817fdfa8u;
        a.r[1] = 0x817fdfc0u;
        a.r[2] = 0x817fdfa8u;
        (void)tc_call(0x802343a4u, &a);
        f0 = (f64)rdf32(0x817fdfb0u);
        wrf32d(0x817fdfb4u, (f64)rdf32(0x817fdfa8u));
        wrf32d(0x817fdfbcu, f0);
        wrf32d(0x817fdfb8u, f31);
        a.r[0] = 0x817fdfb4u;
        f1 = tc_callf(0x80234440u, &a);
        if (f1 < f30) {
            a.r[0] = 0x817fdfb4u;
            f1 = tc_callf(0x80234440u, &a);
            r31 = r30 & 0xffu;
            f30 = f1;
        }
        r30 = r30 + 1u;
        r29 = r29 + 0xcu;
    } while ((s32)r30 < 4);
    return r31;
}

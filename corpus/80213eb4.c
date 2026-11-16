#include "tc_rt.h"

f64 fn_80213eb4(u32 param_1, s32 param_2, s32 param_3)
{
    u32 r0 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    (void)param_1;
    wr32(0x817fdfc0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    f31 = (f64)rdf32(0x80576960u);
    wr32(0x817fdfecu, 0u);
    r31 = (u32)param_2 - 1u;
    wr32(0x817fdfe8u, 0u);
    r30 = (u32)param_3;
    wr32(0x817fdfe4u, 0u);
    r29 = (u32)param_3;
    wr32(0x817fdfe0u, 0u);
    r28 = 0u;
    while ((s32)r28 < (s32)r31) {
        r0 = rd32(r30 + 0x10u);
        wr32(0x817fdfc8u, rd32(r30 + 0xcu));
        wr32(0x817fdfccu, r0);
        wr32(0x817fdfd0u, rd32(r30 + 0x14u));
        a.r[0] = 0x817fdfc8u;
        a.r[1] = r29;
        a.r[2] = 0x817fdfc8u;
        (void)tc_call(0x802343a4u, &a);
        a.r[0] = 0x817fdfc8u;
        f1 = tc_callf(0x80234440u, &a);
        f31 = (f64)(f32)(f31 + f1);
        r30 = r30 + 0xcu;
        r29 = r29 + 0xcu;
        r28 = r28 + 1u;
    }
    return f31;
}

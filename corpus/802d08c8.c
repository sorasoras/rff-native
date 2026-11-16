#include "tc_rt.h"

void fn_802d08c8(u32 param_1, s32 param_2, u32 param_3)
{
    u32 r0 = 0, r3 = 0, r6 = 0;
    f64 f0 = 0.0, f1 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfa0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfe4u, 0u);
    if (param_3 >= ((rd32((u32)param_2 + 0x50u) >> 0x1cu) & 0xfu)) {
        f0 = (f64)rdf32(0x80348a40u);
        wrf32d(param_1, f0);
        wrf32d(param_1 + 4u, f0);
    } else {
        r6 = rd32((u32)param_2 + 0x58u) + ((param_3 << 5u) & 0x1fe0u);
        r0 = rd32(r6 + 4u);
        wr32(0x817fdfa8u, rd32(r6));
        wr32(0x817fdfacu, r0);
        r0 = rd32(r6 + 0xcu);
        wr32(0x817fdfb0u, rd32(r6 + 8u));
        wr32(0x817fdfb4u, r0);
        r0 = rd32(r6 + 0x14u);
        wr32(0x817fdfb8u, rd32(r6 + 0x10u));
        wr32(0x817fdfbcu, r0);
        r0 = rd32(r6 + 0x1cu);
        wr32(0x817fdfc0u, rd32(r6 + 0x18u));
        wr32(0x817fdfc4u, r0);
        a.r[0] = 0x817fdfa8u;
        a.r[1] = 0u;
        (void)tc_call(0x80252550u, &a);
        a.r[0] = 0x817fdfa8u;
        r3 = tc_call(0x80252574u, &a);
        wr32(0x817fdfccu, r3 & 0xffffu);
        f1 = rdf64(0x80348a50u);
        wr32(0x817fdfc8u, 0x43300000u);
        f31 = (f64)(f32)(rdf64(0x817fdfc8u) - f1);
        a.r[0] = 0x817fdfa8u;
        r3 = tc_call(0x80252560u, &a);
        wr32(0x817fdfd0u, 0x43300000u);
        f1 = rdf64(0x80348a50u);
        wr32(0x817fdfd4u, r3 & 0xffffu);
        f0 = rdf64(0x817fdfd0u);
        wrf32d(param_1 + 4u, f31);
        f0 = (f64)(f32)(f0 - f1);
        wrf32d(param_1, f0);
    }
    return;
}

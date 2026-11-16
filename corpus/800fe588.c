#include "tc_rt.h"

void fn_800fe588(s32 param_1)
{
    u32 r0 = 0, r3 = 0;
    f64 f0 = 0.0, f1 = 0.0, f5 = 0.0, f6 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfa0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    a.r[0] = 0x817fdfb0u;
    a.r[1] = (u32)param_1;
    (void)tc_call(0x802e619cu, &a);
    r3 = 0u;
    f5 = (f64)rdf32(0x80573c30u);
    f6 = (f64)rdf32(0x80573c34u);
    if (rd32(0x80571100u) == 1u) {
        r3 = 1u;
    }
    f1 = (f64)rdf32(0x80573c38u);
    f0 = (f64)rdf32(0x80573c3cu);
    r3 = (0u - r3) | r3;
    r0 = ((u32)rd8((u32)param_1 + 0x70u) & 0xffffffdfu) | ((r3 >> 0x1au) & 0x20u);
    wrf32d((u32)param_1 + 0x64u, f1);
    wr8((u32)param_1 + 0x70u, (u8)r0);
    wrf32d((u32)param_1 + 0x68u, f0);
    wrf32d(0x817fdfa8u, f1);
    f1 = (f64)rdf32(0x817fdfb4u);
    wrf32d(0x817fdfacu, f0);
    a.f[0] = f1;
    a.f[1] = (f64)rdf32(0x817fdfbcu);
    a.f[2] = (f64)rdf32(0x817fdfb0u);
    a.f[3] = (f64)rdf32(0x817fdfb8u);
    a.f[4] = f5;
    a.f[5] = f6;
    a.r[0] = (u32)param_1 + 0x74u;
    (void)tc_call(0x802342e8u, &a);
    a.r[0] = 0x817fdfc0u;
    (void)tc_call(0x80233740u, &a);
    r0 = rd32(0x817fdfc4u);
    wr32((u32)param_1 + 0x24u, rd32(0x817fdfc0u));
    wr32((u32)param_1 + 0x28u, r0);
    r0 = rd32(0x817fdfccu);
    wr32((u32)param_1 + 0x2cu, rd32(0x817fdfc8u));
    wr32((u32)param_1 + 0x30u, r0);
    r0 = rd32(0x817fdfd4u);
    wr32((u32)param_1 + 0x34u, rd32(0x817fdfd0u));
    wr32((u32)param_1 + 0x38u, r0);
    r0 = rd32(0x817fdfdcu);
    wr32((u32)param_1 + 0x3cu, rd32(0x817fdfd8u));
    wr32((u32)param_1 + 0x40u, r0);
    r0 = rd32(0x817fdfe4u);
    wr32((u32)param_1 + 0x44u, rd32(0x817fdfe0u));
    wr32((u32)param_1 + 0x48u, r0);
    r0 = rd32(0x817fdfecu);
    wr32((u32)param_1 + 0x4cu, rd32(0x817fdfe8u));
    wr32((u32)param_1 + 0x50u, r0);
    wrf32d((u32)param_1 + 0x54u, (f64)rdf32(0x817fdfb0u));
    wrf32d((u32)param_1 + 0x58u, (f64)rdf32(0x817fdfb4u));
    wrf32d((u32)param_1 + 0x5cu, (f64)rdf32(0x817fdfb8u));
    wrf32d((u32)param_1 + 0x60u, (f64)rdf32(0x817fdfbcu));
    return;
}

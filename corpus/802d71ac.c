#include "tc_rt.h"

f64 fn_802d71ac(s32 param_1, u32 param_2)
{
    u32 r0 = 0, r3 = 0, r12 = 0;
    f64 f0 = 0.0, f1 = 0.0, f3 = 0.0, f4 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfb0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wr32(0x817fdfecu, 0u);
    r3 = rd32((u32)param_1 + 0x48u);
    wr32(0x817fdfd0u, 0x43300000u);
    r12 = rd32(r3);
    wr32(0x817fdfd8u, 0x43300000u);
    r12 = rd32(r12 + 0x50u);
    a.r[0] = r3;
    a.r[1] = 0x817fdfb8u;
    a.r[2] = param_2;
    a.f[0] = 0.0;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    (void)tc_call(r12, &a);
    if ((u32)rd8((u32)param_1 + 0x43u) != 0u) {
        f4 = rdf64(0x80348ae0u);
        r0 = (u32)(s8)rd8(0x817fdfbcu);
        wr32(0x817fdfd4u, (u32)(s8)rd8(0x817fdfbeu) ^ 0x80000000u);
        r0 = r0 ^ 0x80000000u;
        f3 = (f64)rdf32((u32)param_1 + 0x24u);
        f0 = rdf64(0x817fdfd0u);
        wr32(0x817fdfdcu, r0);
        f31 = (f64)rdf32((u32)param_1 + 0x44u);
        f1 = (f64)(f32)((f64)(f32)((f64)(f32)(f31 - (f64)(f32)((f64)(f32)(f0 - f4) * f3)) * (f64)rdf32(0x80348ae8u)) + (f64)(f32)((f64)(f32)(rdf64(0x817fdfd8u) - f4) * f3));
    } else {
        f3 = rdf64(0x80348ae0u);
        f1 = (f64)rdf32((u32)param_1 + 0x24u);
        r0 = (u32)(s8)rd8(0x817fdfbcu) ^ 0x80000000u;
        wr32(0x817fdfd4u, (u32)(s8)rd8(0x817fdfbeu) ^ 0x80000000u);
        wr32(0x817fdfdcu, r0);
        f31 = (f64)(f32)((f64)(f32)(rdf64(0x817fdfd0u) - f3) * f1);
        f1 = (f64)(f32)((f64)(f32)(rdf64(0x817fdfd8u) - f3) * f1);
    }
    f1 = (f64)(f32)((f64)rdf32((u32)param_1 + 0x2cu) + f1);
    a.f[0] = f1;
    a.f[1] = (f64)rdf32((u32)param_1 + 0x30u);
    a.f[2] = (f64)rdf32((u32)param_1 + 0x34u);
    a.r[0] = (u32)param_1;
    a.r[1] = 0x817fdfb8u;
    (void)tc_call(0x802d7334u, &a);
    wrf32d((u32)param_1 + 0x2cu, (f64)(f32)((f64)rdf32((u32)param_1 + 0x2cu) + f31));
    return f31;
}

#include "tc_rt.h"

u32 fn_800b2ea8(s32 param_1)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r6 = 0;
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
    wr32(0x817fdfdcu, 0u);
    f30 = (f64)rdf32((u32)param_1 + 0xb0u);
    a.r[0] = (u32)param_1;
    f1 = tc_callf(0x800b332cu, &a);
    f31 = f1;
    r4 = rd32((u32)param_1 + 0xcf8u);
    r0 = rd32((u32)param_1 + 0xcfcu);
    wr32(0x817fdfc0u, rd32((u32)param_1 + 0xcf4u));
    wr32(0x817fdfc4u, r4);
    wr32(0x817fdfc8u, r0);
    a.r[0] = (u32)param_1;
    r3 = tc_call(0x800b3344u, &a);
    r0 = rd32(r3 + 4u);
    wr32(0x817fdfb4u, rd32(r3));
    wr32(0x817fdfb8u, r0);
    wr32(0x817fdfbcu, rd32(r3 + 8u));
    a.r[0] = (u32)param_1;
    a.r[1] = 1u;
    r3 = tc_call(0x800b1048u, &a);
    if (r3 != 0u) {
        f1 = (f64)(f32)((f64)rdf32((u32)param_1 + 0xd50u) * (f64)rdf32(0x80572c14u));
    } else {
        f1 = (f64)rdf32((u32)param_1 + 0xd50u);
    }
    r6 = rd32(0x817fdfc4u);
    r0 = rd32(0x817fdfc8u);
    wr32(0x817fdfa8u, rd32(0x817fdfc0u));
    f31 = (f64)(f32)((f64)(f32)(f30 + f31) + f1);
    wr32(0x817fdfacu, r6);
    wr32(0x817fdfb0u, r0);
    a.r[0] = 0x817fdfa8u;
    a.r[1] = 0x817fdfb4u;
    a.r[2] = 0x817fdfa8u;
    (void)tc_call(0x802343a4u, &a);
    f1 = (f64)rdf32(0x817fdfb0u);
    f0 = (f64)rdf32(0x817fdfa8u);
    f1 = (f64)(f32)(f1 * f1);
    f0 = ppc_fmadds(f0, f0, f1);
    f1 = (f64)(f32)ppc_fabs((f64)(f32)(f31 * f31));
    c0lt = f0 < f1;
    if (((((c0lt << 0x1fu) | ((f0 > f1) << 0x1eu) | ((c0lt || (f0 == f1)) << 0x1du) | (((f0 != f0) || (f1 != f1)) << 0x1cu)) >> 0x1du) & 1u) != 0u) {
        r3 = 1u;
    } else {
        r3 = 0u;
    }
    return r3;
}

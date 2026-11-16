#include "tc_rt.h"

u32 fn_80148258(u32 param_1, u32 param_2)
{
    u32 r0 = 0, r3 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfa0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    r31 = rd32(param_2 + 0x1cu);
    if ((s32)r31 < 0) {
        r3 = 0u;
    } else {
        r0 = rd32(param_2 + 4u);
        wr32(0x817fdfb4u, rd32(param_2));
        wr32(0x817fdfb8u, r0);
        wr32(0x817fdfbcu, rd32(param_2 + 8u));
        f1 = (f64)rdf32(param_2 + 0x18u);
        r0 = rd32(param_2 + 0x10u);
        wr32(0x817fdfa8u, rd32(param_2 + 0xcu));
        wr32(0x817fdfacu, r0);
        wr32(0x817fdfb0u, rd32(param_2 + 0x14u));
        a.f[0] = f1;
        a.r[0] = 0x817fdfa8u;
        a.r[1] = 0x817fdfa8u;
        (void)tc_call(0x802343c8u, &a);
        a.r[0] = 0x817fdfb4u;
        a.r[1] = 0x817fdfa8u;
        a.r[2] = 0x817fdfb4u;
        (void)tc_call(0x80234380u, &a);
        wrf32d(param_2, (f64)rdf32(0x817fdfb4u));
        wrf32d(param_2 + 4u, (f64)rdf32(0x817fdfb8u));
        wrf32d(param_2 + 8u, (f64)rdf32(0x817fdfbcu));
        a.f[0] = (f64)rdf32(0x817fdfb4u);
        a.f[1] = (f64)rdf32(0x817fdfb8u);
        a.f[2] = (f64)rdf32(0x817fdfbcu);
        a.r[0] = 0x817fdfc0u;
        (void)tc_call(0x80233c84u, &a);
        a.r[0] = 0x817fdfc0u;
        a.r[1] = param_1;
        a.r[2] = param_1;
        (void)tc_call(0x802337a0u, &a);
        a.r[0] = param_1;
        a.r[1] = param_1;
        (void)tc_call(0x800315c0u, &a);
        r3 = 1u;
        wr32(param_2 + 0x1cu, r31 - 1u);
    }
    return r3;
}

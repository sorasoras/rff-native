#include "tc_rt.h"

void fn_801876c8(u32 param_1)
{
    u32 r3 = 0, r4 = 0, r8 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    if ((s32)rd32(param_1 + 0xab8u) >= 0) {
        r4 = 0u;
        if (rd32(param_1 + 0x1018u) != 0u || rd32(param_1 + 0xf70u) != 0u) {
            r4 = 1u;
        }
        if (r4 == 0u) {
            a.r[0] = param_1;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.f[0] = 0.0;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
            r8 = rd32(r3);
            f0 = (f64)rdf32(0x80575228u);
            wr32(0x817fdfecu, rd32(r3 + 4u));
            f1 = (f64)rdf32(0x805751c4u);
            f2 = (f64)rdf32(0x817fdfecu);
            wr32(0x817fdfe8u, r8);
            f0 = (f64)(f32)(f2 + f0);
            f2 = (f64)rdf32(0x8057522cu);
            f3 = (f64)rdf32(0x80575230u);
            wr32(0x817fdff0u, rd32(r3 + 8u));
            wrf32d(0x817fdfecu, f0);
            a.f[0] = f1;
            a.f[1] = f2;
            a.f[2] = f3;
            a.f[3] = (f64)rdf32(param_1 + 0xad0u);
            a.r[0] = param_1 + 0xf28u;
            a.r[1] = 0x817fdfe8u;
            a.r[2] = 0x40808au;
            a.r[3] = 0u;
            a.r[4] = param_1;
            (void)tc_call(0x800cdc78u, &a);
        }
        wr32(param_1 + 0xab8u, rd32(param_1 + 0xab8u) - 1u);
    } else {
        a.r[0] = param_1;
        a.r[1] = 0xbu;
        (void)tc_call(0x801867a0u, &a);
    }
    return;
}

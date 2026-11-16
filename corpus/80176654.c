#include "tc_rt.h"

void fn_80176654(u32 param_1, s32 param_2)
{
    u32 r3 = 0, r4 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    if ((u32)param_2 == 3u) {
        a.r[0] = param_1;
        a.r[1] = (u32)param_2;
        a.f[0] = 0.0;
        a.f[1] = 0.0;
        r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
        r4 = rd32(r3);
        f2 = (f64)rdf32(0x8057088cu);
        wr32(0x817fdfecu, rd32(r3 + 4u));
        f0 = (f64)rdf32(0x80574f64u);
        f1 = (f64)rdf32(0x817fdfecu);
        wr32(0x817fdfe8u, r4);
        f1 = (f64)(f32)(f1 - f2);
        wr32(0x817fdff0u, rd32(r3 + 8u));
        wrf32d(0x817fdfecu, f1);
        f1 = (f64)(f32)((f64)rdf32(param_1 + 0x314u) - f2);
        wrf32d(param_1 + 0x314u, f1);
        if ((f1 < f0) || (f1 == f0)) {
            wr32(param_1 + 0x124u, 2u);
        }
        a.r[0] = param_1;
        a.r[1] = 0x817fdfe8u;
        a.f[0] = f1;
        a.f[1] = f2;
        (void)tc_call(rd32(rd32(param_1) + 0x1cu), &a);
    }
    return;
}

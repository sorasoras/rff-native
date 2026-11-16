#include "tc_rt.h"

void fn_80101108(f64 param_1, u32 param_2)
{
    u32 r3 = 0, r4 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f0 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfb0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfe4u, 0u);
    r4 = rd32(param_2);
    f2 = (f64)rdf32(r4 + 0x50u);
    f0 = (f64)(f32)(param_1 * (f64)(f32)((f64)rdf32(param_2 + 0x28u) - (f64)rdf32(param_2 + 0x20u)));
    wrf32d(0x817fdfb8u, (f64)rdf32(r4 + 0x4cu));
    wrf32d(0x817fdfbcu, f2);
    wrf32d(r4 + 0x4cu, f0);
    wrf32d(r4 + 0x50u, f2);
    r31 = rd32(param_2);
    wrf32d(0x817fdfb8u, f0);
    a.r[0] = r31;
    r3 = tc_call(0x802e6974u, &a);
    r30 = r3 & 0xffu;
    r29 = 0u;
    while ((s32)r29 < (s32)r30) {
        a.r[0] = r31;
        a.r[1] = r29;
        a.r[2] = 0x817fdfc0u;
        (void)tc_call(0x802e697cu, &a);
        wrf32d(0x817fdfc8u, param_1);
        wrf32d(0x817fdfd8u, param_1);
        a.r[0] = r31;
        a.r[1] = r29;
        a.r[2] = 0x817fdfc0u;
        (void)tc_call(0x802e6984u, &a);
        r29 = r29 + 1u;
    }
    return;
}

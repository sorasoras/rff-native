#include "tc_rt.h"

void fn_802e7db0(s32 param_1, s32 param_2)
{
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfc0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    if ((((u32)rd8((u32)param_2 + 0x50u) >> 7u) & 1u) != 0u) {
        a.r[0] = (u32)param_2 + 4u;
        a.r[1] = (u32)param_1 + 0x84u;
        a.r[2] = 0x817fdfc8u;
        (void)tc_call(0x802337a0u, &a);
    } else {
        a.r[0] = (u32)param_1 + 0x84u;
        a.r[1] = 0x817fdfc8u;
        (void)tc_call(0x8023376cu, &a);
    }
    f1 = -(f64)rdf32(0x817fdfdcu);
    f0 = -(f64)rdf32(0x817fdfecu);
    wrf32d(0x817fdfccu, -(f64)rdf32(0x817fdfccu));
    wrf32d(0x817fdfdcu, f1);
    wrf32d(0x817fdfecu, f0);
    a.r[0] = 0x817fdfc8u;
    a.r[1] = 0u;
    (void)tc_call(0x802544a0u, &a);
    a.r[0] = 0u;
    (void)tc_call(0x80254548u, &a);
    return;
}

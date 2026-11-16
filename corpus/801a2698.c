#include "tc_rt.h"

void fn_801a2698(s32 param_1, s32 param_2)
{
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0;
    TcArgs a = {0};
    f4 = (f64)rdf32(0x805758fcu);
    f3 = (f64)rdf32(0x80575900u);
    f2 = (f64)rdf32(0x80575904u);
    f1 = (f64)rdf32(0x80575868u);
    f0 = (f64)rdf32(0x805758d8u);
    wrf32d((u32)param_1 + 0xd24u, f4);
    wrf32d((u32)param_1 + 0xd28u, f4);
    wrf32d((u32)param_1 + 0xd2cu, f3);
    wrf32d((u32)param_1 + 0xd30u, f4);
    wrf32d((u32)param_1 + 0xda4u, f2);
    wrf32d((u32)param_1 + 0xd98u, f1);
    wrf32d((u32)param_1 + 0xd9cu, f0);
    wr32((u32)param_1 + 0xdb0u, 1u);
    wr32((u32)param_1 + 0xdb4u, 2u);
    if ((u32)param_2 == 3u) {
        wr32((u32)param_1 + 0xdf8u, 2u);
        a.r[0] = (u32)param_1;
        (void)tc_call(0x801a2754u, &a);
        a.r[0] = (u32)param_1;
        (void)tc_call(0x801a2a44u, &a);
        f0 = (f64)rdf32(0x8057586cu);
        wr32((u32)param_1 + 0xce4u, 1u);
        wrf32d((u32)param_1 + 0xce0u, f0);
    }
    return;
}

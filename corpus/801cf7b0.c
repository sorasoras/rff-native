#include "tc_rt.h"

void fn_801cf7b0(s32 param_1, s32 param_2)
{
    u32 r30 = 0, r31 = 0;
    f64 f0 = 0.0;
    TcArgs a = {0};
    if ((u32)param_2 != 0u) {
        f0 = (f64)rdf32(0x80575e98u);
        wr32((u32)param_1 + 0xce4u, 1u);
        wrf32d((u32)param_1 + 0xce0u, f0);
    } else {
        wr32((u32)param_1 + 0xce4u, 2u);
    }
    r31 = 9u;
    if ((u32)param_2 == 0u) {
        r31 = 0xau;
    }
    a.r[0] = (u32)param_1;
    a.r[1] = 0u;
    a.r[2] = r31;
    a.r[3] = 0u;
    (void)tc_call(0x801ce348u, &a);
    a.r[0] = (u32)param_1;
    a.r[1] = 1u;
    a.r[2] = r31;
    a.r[3] = 0u;
    (void)tc_call(0x801ce348u, &a);
    r31 = 6u;
    if ((u32)param_2 == 0u) {
        r31 = 7u;
    }
    r30 = 2u;
    do {
        a.r[0] = (u32)param_1;
        a.r[1] = r30;
        a.r[2] = r31;
        a.r[3] = 0u;
        (void)tc_call(0x801ce368u, &a);
        r30 = r30 + 1u;
    } while (r30 < 0xau);
    return;
}

#include "tc_rt.h"

void fn_801a9e70(s32 param_1)
{
    u32 r0 = 0;
    TcArgs a = {0};
    wrf32d((u32)param_1 + 0x9e0u, (f64)rdf32(0x80575a28u));
    a.r[0] = (u32)param_1;
    (void)tc_call(0x80069bb8u, &a);
    if (rd32((u32)param_1 + 0x9e4u) == 0u) {
        a.r[0] = (u32)param_1;
        a.r[1] = (u32)param_1 + 0x9bcu;
        a.r[2] = rd32((u32)param_1 + 0x9e8u);
        a.r[3] = rd32((u32)param_1 + 0x9ecu);
        a.r[4] = 1u;
        (void)tc_call(0x8006a8d8u, &a);
    } else {
        a.r[0] = (u32)param_1;
        a.r[1] = (u32)param_1 + 0x9bcu;
        a.r[2] = rd32((u32)param_1 + 0x9e8u);
        a.r[3] = rd32((u32)param_1 + 0x9ecu);
        a.r[4] = 1u;
        (void)tc_call(0x8006a420u, &a);
    }
    if (rd32((u32)param_1 + 0x9f8u) != 0u && rd32((u32)param_1 + 0x9f0u) == 2u) {
        r0 = rd32(0x80499178u) - 1u;
        if ((s32)r0 < 0) {
            r0 = 0u;
        }
        wr32(0x80499178u, r0);
    }
    wr32((u32)param_1 + 0x9f0u, 0u);
    wr32((u32)param_1 + 0x9f8u, 0u);
    return;
}

#include "tc_rt.h"

void fn_801b23b8(s32 param_1)
{
    u32 r3 = 0, r4 = 0;
    TcArgs a = {0};
    r4 = rd32(0x803724b8u);
    wr32((u32)param_1 + 0x38u, rd32(0x803724b4u));
    wr32((u32)param_1 + 0x3cu, r4);
    wr32((u32)param_1 + 0x40u, rd32(0x803724bcu));
    wr32((u32)param_1 + 0x6e8u, 0x1eu);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x801b2dd4u, &a);
    a.r[0] = 0x804b9da0u;
    a.r[1] = 0x1116u;
    (void)tc_call(0x8010a74cu, &a);
    r3 = tc_call(0x801b0c80u, &a);
    if (r3 != 0u) {
        wr32(r3 + 0x16cu, 0u);
    }
    return;
}

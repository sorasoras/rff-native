#include "tc_rt.h"

void fn_801ccd3c(s32 param_1)
{
    u32 r0 = 0, r4 = 0, r5 = 0, r6 = 0;
    TcArgs a = {0};
    r5 = rd32((u32)param_1 + 0xd04u);
    if (r5 != 0xbu) {
        r4 = rd32((u32)param_1 + 0xd00u);
        wr32((u32)param_1 + 0xd04u, 0xbu);
        wr32((u32)param_1 + 0xcfcu, r4);
        wr32((u32)param_1 + 0xd00u, r5);
    } else {
        wr32((u32)param_1 + 0xcfcu, rd32((u32)param_1 + 0xd00u));
        wr32((u32)param_1 + 0xd00u, 0u);
        wr32((u32)param_1 + 0xd04u, 0xbu);
    }
    r0 = rd32((u32)param_1 + 0xd00u) * 0xcu;
    r6 = r0 - 0x7fc8c238u;
    r5 = rd32(r0 - 0x7fc8c238u);
    r0 = rd32(r6 + 4u);
    wr32((u32)param_1 + 0xd08u, r5);
    wr32((u32)param_1 + 0xd0cu, r0);
    wr32((u32)param_1 + 0xd10u, rd32(r6 + 8u));
    a.r[0] = (u32)param_1;
    (void)tc_call(0x802558bcu, &a);
    wr32((u32)param_1 + 0xd18u, 0u);
    return;
}

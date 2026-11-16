#include "tc_rt.h"

u32 fn_8005cb80(s32 param_1)
{
    u32 c0eq = 0;
    TcArgs a = {0};
    a.r[0] = rd32((u32)param_1 + 0x14u);
    (void)tc_call(0x8005a2fcu, &a);
    a.r[0] = rd32((u32)param_1 + 0x14u);
    a.r[1] = 1u;
    (void)tc_call(0x8005a018u, &a);
    wr32((u32)param_1 + 0x14u, 0u);
    c0eq = rd32(0x805711ecu) == 0u;
    wr32(0x805706e0u, rd32(0x80571180u));
    wr32(0x80571180u, 4u);
    if (!c0eq) {
        wr32((u32)param_1 + 0x10u, 5u);
    }
    return 1u;
}

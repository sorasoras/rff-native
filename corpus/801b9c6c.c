#include "tc_rt.h"

void fn_801b9c6c(s32 param_1)
{
    u32 r0 = 0;
    TcArgs a = {0};
    r0 = rd32((u32)param_1 + 0x38u);
    if (r0 != 0u) {
        a.r[0] = r0;
        (void)tc_call(0x800fec80u, &a);
    }
    if (((ppc_cntlzw(rd32((u32)param_1 + 0x34u)) >> 5u) & 0x7ffffffu) == 1u) {
        r0 = 1u;
    } else {
        r0 = 0u;
    }
    wr8(0x8049e134u, (u8)r0);
    if (rd32((u32)param_1 + 0x30u) != rd32((u32)param_1 + 0x2cu)) {
        a.r[0] = 0x804b9da0u;
        a.r[1] = 1u;
        (void)tc_call(0x8010a75cu, &a);
    }
    wr32((u32)param_1 + 0x30u, rd32((u32)param_1 + 0x2cu));
    return;
}

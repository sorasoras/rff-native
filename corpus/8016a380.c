#include "tc_rt.h"

void fn_8016a380(u32 param_1, s32 param_2)
{
    u32 r3 = 0;
    TcArgs a = {0};
    (void)param_1;
    r3 = rd32((u32)param_2 + 0x1670u);
    if (r3 != 0u) {
        a.r[0] = r3;
        (void)tc_call(0x80157f30u, &a);
        wr32((u32)param_2 + 0x1670u, 0u);
    }
    wr32((u32)param_2 + 0x148u, rd32((u32)param_2 + 0x148u) & 0xfbffffffu);
    return;
}

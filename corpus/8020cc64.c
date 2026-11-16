#include "tc_rt.h"

void fn_8020cc64(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 4u;
    (void)tc_call(0x8020c504u, &a);
    if (rd32((u32)param_1 + 0x160u) != 0u) {
        a.r[0] = (u32)param_1 + 4u;
        (void)tc_call(0x8020c544u, &a);
    }
    a.r[0] = (u32)param_1 + 0x148u;
    (void)tc_call(0x8020c758u, &a);
    return;
}

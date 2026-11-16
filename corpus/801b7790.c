#include "tc_rt.h"

void fn_801b7790(s32 param_1)
{
    TcArgs a = {0};
    if (rd32((u32)param_1 + 0x74u) != 0u) {
        (void)tc_call(0x80052dc0u, &a);
        wr32((u32)param_1 + 0x74u, 0u);
    }
    return;
}

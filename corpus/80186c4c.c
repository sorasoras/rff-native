#include "tc_rt.h"

void fn_80186c4c(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    a.r[1] = 0xbu;
    (void)tc_call(0x801867a0u, &a);
    if (rd32((u32)param_1 + 0xb1cu) != 0u) {
        a.r[0] = (u32)param_1 + 0xad4u;
        (void)tc_call(0x80094ba8u, &a);
    }
    if (rd32((u32)param_1 + 0xd24u) != 0u) {
        a.r[0] = (u32)param_1 + 0xcdcu;
        (void)tc_call(0x80094ba8u, &a);
    }
    return;
}

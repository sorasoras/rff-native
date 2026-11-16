#include "tc_rt.h"

void fn_80058c5c(u32 param_1)
{
    u32 r30 = 0, r31 = 0;
    TcArgs a = {0};
    r30 = 0u;
    r31 = param_1;
    do {
        if (rd32(r31) != 0u && rd32(r31 + 0x10u) == 1u) {
            a.r[0] = param_1;
            a.r[1] = r30;
            a.r[2] = 1u;
            (void)tc_call(0x80058f78u, &a);
        }
        r30 = r30 + 1u;
        r31 = r31 + 0x14u;
    } while ((s32)r30 < 140);
    return;
}

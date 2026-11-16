#include "tc_rt.h"

void fn_80057550(u32 param_1)
{
    u32 r31 = 0;
    TcArgs a = {0};
    r31 = 0u;
    do {
        a.r[0] = param_1;
        a.r[1] = r31;
        (void)tc_call(0x80057470u, &a);
        r31 = r31 + 1u;
    } while ((s32)r31 < 3);
    r31 = 0u;
    do {
        a.r[0] = param_1;
        a.r[1] = r31;
        (void)tc_call(0x800574e4u, &a);
        r31 = r31 + 1u;
    } while ((s32)r31 < 3);
    return;
}

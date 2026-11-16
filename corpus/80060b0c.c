#include "tc_rt.h"

s32 fn_80060b0c(void)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    a.r[0] = 0u;
    r3 = tc_call(0x80209b60u, &a);
    r31 = r3;
    if (r3 != 0u) {
        (void)tc_call(0x8003c20cu, &a);
        wr32(0x80571124u, 0u);
        a.r[0] = 0u;
        (void)tc_call(0x80035b6cu, &a);
        a.r[0] = 0u;
        (void)tc_call(0x80035ba0u, &a);
    }
    return (s32)r31;
}

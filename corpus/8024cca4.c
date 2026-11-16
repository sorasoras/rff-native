#include "tc_rt.h"

u32 fn_8024cca4(u32 param_1)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x8022c2b0u, &a);
    r31 = r3;
    a.r[0] = param_1;
    (void)tc_call(0x8024d5c4u, &a);
    wr32(param_1, 0u);
    wr32(param_1 + 8u, 1u);
    a.r[0] = r31;
    (void)tc_call(0x8022c2d8u, &a);
    if (param_1 == rd32(0x80571948u)) {
        a.r[0] = param_1;
        (void)tc_call(0x8024d438u, &a);
    }
    return param_1;
}

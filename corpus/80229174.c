#include "tc_rt.h"

void fn_80229174(u32 param_1)
{
    u32 r4 = 0;
    TcArgs a = {0};
    r4 = rd32(0x800030f0u);
    if (r4 >= 0x80000000u) {
        a.r[0] = param_1;
        a.r[1] = r4;
        a.r[2] = 0x1cu;
        (void)tc_call(0x80004338u, &a);
        return;
    }
    wr32(param_1, 0u);
    return;
}

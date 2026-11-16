#include "tc_rt.h"

void fn_80209050(u32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    r3 = rd32(param_1);
    if (r3 != 0u) {
        a.r[0] = r3;
        (void)tc_call(0x800fec80u, &a);
        return;
    }
    return;
}

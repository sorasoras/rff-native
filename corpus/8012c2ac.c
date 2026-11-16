#include "tc_rt.h"

u32 fn_8012c2ac(u32 param_r3, u32 param_r4)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = 0u;
    a.r[0] = param_r3;
    a.r[1] = param_r4;
    r3 = tc_call(0x8012c22cu, &a);
    if (r3 != 0u) {
        a.r[0] = r3;
        r3 = tc_call(0x800ff744u, &a);
        r31 = r3;
    }
    return r31;
}

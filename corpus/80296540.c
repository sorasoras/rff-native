#include "tc_rt.h"

u32 fn_80296540(u32 param_1)
{
    TcArgs a = {0};
    if (param_1 != 0u) {
        a.r[0] = 0x8053df88u;
        a.r[1] = 0x8053d958u;
        a.f[0] = 0.0;
        (void)tc_call(param_1, &a);
    }
    return 0u;
}

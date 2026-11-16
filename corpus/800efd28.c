#include "tc_rt.h"

u32 fn_800efd28(u32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    wr32(param_1, 0x8035bab8u);
    a.r[0] = param_1;
    r3 = tc_call(0x800efadcu, &a);
    if (r3 == 0u) {
        a.r[0] = 0x804b8960u;
        a.r[1] = param_1;
        (void)tc_call(0x802de7f4u, &a);
    }
    return param_1;
}

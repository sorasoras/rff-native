#include "tc_rt.h"

u32 fn_800efd7c(u32 param_1, s32 param_2)
{
    u32 r3 = 0;
    TcArgs a = {0};
    if (param_1 != 0u) {
        wr32(param_1, 0x8035bab8u);
        a.r[0] = param_1;
        r3 = tc_call(0x800efadcu, &a);
        if (r3 != 0u) {
            a.r[0] = 0x804b8960u;
            a.r[1] = param_1;
            (void)tc_call(0x802de984u, &a);
        }
        if (param_2 > 0) {
            a.r[0] = param_1;
            (void)tc_call(0x800efa58u, &a);
        }
    }
    return param_1;
}

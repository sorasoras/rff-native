#include "tc_rt.h"

u32 fn_8015a89c(u32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = param_1;
    r3 = tc_call(0x8015a834u, &a);
    if (r3 == 0u) {
        a.r[0] = param_1;
        r3 = tc_call(0x8015a9dcu, &a);
        if (r3 == 0u) {
            a.r[0] = param_1;
            r3 = tc_call(0x8015a81cu, &a);
            if (r3 == 0u) {
                r3 = 1u;
                return r3;
            }
        }
    }
    r3 = 0u;
    return r3;
}

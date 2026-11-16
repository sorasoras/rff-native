#include "tc_rt.h"

u32 fn_800c2adc(u32 param_r3)
{
    u32 c0eq = 0, r3 = 0;
    TcArgs a = {0};
    a.r[0] = param_r3;
    r3 = tc_call(0x800c4bb4u, &a);
    c0eq = r3 == 0u;
    r3 = 4u;
    if (!c0eq) {
        r3 = 5u;
    }
    return r3;
}

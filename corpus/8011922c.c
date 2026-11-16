#include "tc_rt.h"

void fn_8011922c(u32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    u32 r0 = 0, r3 = 0, r4 = 0;
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = param_2;
    r3 = tc_call(0x80118ef0u, &a);
    r0 = 0xffffffffu;
    r4 = 0xffffffffu;
    if (r3 != 0u) {
        r0 = (u32)rd8(r3);
        r4 = (u32)rd8(r3 + 1u);
    }
    if (param_3 != 0u) {
        wr8(param_3, (u8)r0);
    }
    if (param_4 != 0u) {
        wr8(param_4, (u8)r4);
    }
    return;
}

#include "tc_rt.h"

u32 fn_8011c174(u32 param_1, s32 param_2, u32 param_3)
{
    u32 c0lt = 0, r3 = 0;
    TcArgs a = {0};
    c0lt = param_2 < 255;
    if ((u32)param_2 != 0xffu) {
        if (!c0lt) {
            r3 = 2u;
            return r3;
        }
        if (param_2 < 254) {
            r3 = 2u;
            return r3;
        }
        a.r[0] = param_1;
        a.r[1] = param_3;
        (void)tc_call(0x8011c034u, &a);
        r3 = 0u;
        return r3;
    }
    a.r[0] = param_1;
    a.r[1] = param_3;
    (void)tc_call(0x8011c0f4u, &a);
    r3 = 0u;
    return r3;
}

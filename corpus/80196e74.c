#include "tc_rt.h"

u32 fn_80196e74(u32 param_1, s32 param_2)
{
    u32 c0lt = 0, r3 = 0, r31 = 0;
    TcArgs a = {0};
    (void)param_1;
    c0lt = param_2 < 5;
    r31 = 1u;
    if ((u32)param_2 != 5u && c0lt) {
        if ((u32)param_2 != 1u) {
            return r31;
        }
        r3 = tc_call(0x80081034u, &a);
        if ((r3 & 0xffu) == 3u) {
            r31 = 0u;
        }
    }
    return r31;
}

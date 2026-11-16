#include "tc_rt.h"

void fn_800c6248(u32 param_1, s32 param_2)
{
    u32 c0lt = 0;
    TcArgs a = {0};
    c0lt = param_2 < 71;
    if ((u32)param_2 == 0x47u) {
        a.r[0] = param_1;
        a.r[1] = 3u;
        (void)tc_call(0x8006d830u, &a);
    } else if (!c0lt) {
        c0lt = param_2 < 73;
        if ((u32)param_2 == 0x49u) {
            a.r[0] = param_1;
            a.r[1] = 0u;
            (void)tc_call(0x8006d830u, &a);
            a.r[0] = param_1;
            a.r[1] = 1u;
            (void)tc_call(0x8006d830u, &a);
            a.r[0] = param_1;
            a.r[1] = 4u;
            (void)tc_call(0x8006d830u, &a);
            a.r[0] = param_1;
            a.r[1] = 3u;
            (void)tc_call(0x8006d830u, &a);
        } else if (c0lt) {
            a.r[0] = param_1;
            a.r[1] = 2u;
            (void)tc_call(0x8006d830u, &a);
        }
    } else {
        c0lt = param_2 < 69;
        if ((u32)param_2 == 0x45u) {
            a.r[0] = param_1;
            a.r[1] = 1u;
            (void)tc_call(0x8006d830u, &a);
        } else if (!c0lt) {
            a.r[0] = param_1;
            a.r[1] = 4u;
            (void)tc_call(0x8006d830u, &a);
        } else if (param_2 >= 68) {
            a.r[0] = param_1;
            a.r[1] = 0u;
            (void)tc_call(0x8006d830u, &a);
        }
    }
    return;
}

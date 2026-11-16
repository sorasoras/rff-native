#include "tc_rt.h"

void fn_80044da4(s32 param_1)
{
    u32 c0lt = 0;
    TcArgs a = {0};
    c0lt = param_1 < 2;
    if ((u32)param_1 == 2u) {
        a.r[0] = 1u;
        a.r[1] = 4u;
        a.r[2] = 1u;
        a.r[3] = 0u;
        (void)tc_call(0x80044e24u, &a);
        return;
    }
    if (!c0lt) {
        c0lt = param_1 < 4;
        if ((u32)param_1 == 4u) {
            return;
        }
        if (!c0lt) {
            return;
        }
        a.r[0] = 3u;
        a.r[1] = 4u;
        a.r[2] = 1u;
        a.r[3] = 0u;
        (void)tc_call(0x80044e24u, &a);
        return;
    }
    c0lt = param_1 < 0;
    if ((u32)param_1 == 0u) {
        a.r[0] = 0u;
        a.r[1] = 1u;
        a.r[2] = 0u;
        a.r[3] = 0u;
        (void)tc_call(0x80044e24u, &a);
        return;
    }
    if (!c0lt) {
        a.r[0] = 1u;
        a.r[1] = 4u;
        a.r[2] = 5u;
        a.r[3] = 0u;
        (void)tc_call(0x80044e24u, &a);
        return;
    }
    return;
}

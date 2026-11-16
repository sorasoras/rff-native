#include "tc_rt.h"

void fn_8004a87c(s32 param_1)
{
    u32 c0lt = 0;
    TcArgs a = {0};
    c0lt = param_1 < 1;
    wr32(0x803c62b0u, (u32)param_1);
    if ((u32)param_1 != 1u) {
        if (!c0lt) {
            return;
        }
        if (param_1 < 0) {
            return;
        }
        a.r[0] = 0u;
        a.r[1] = 0u;
        (void)tc_call(0x80044e64u, &a);
        return;
    }
    a.r[0] = 1u;
    a.r[1] = 0u;
    (void)tc_call(0x80044e64u, &a);
    return;
}

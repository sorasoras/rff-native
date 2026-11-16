#include "tc_rt.h"

void fn_80224f10(s32 param_1)
{
    u32 c0lt = 0;
    TcArgs a = {0};
    c0lt = param_1 < 1;
    if ((u32)param_1 != 1u) {
        if (!c0lt) {
            return;
        }
        if (param_1 < 0) {
            return;
        }
        a.r[0] = 0x804dfac0u;
        (void)tc_call(0x8022373cu, &a);
        return;
    }
    a.r[0] = 0x804dfac0u;
    (void)tc_call(0x80224298u, &a);
    return;
}

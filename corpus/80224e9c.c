#include "tc_rt.h"

void fn_80224e9c(u32 param_1, s32 param_2)
{
    u32 c0lt = 0;
    TcArgs a = {0};
    a.r[0] = 0x804dfac0u;
    a.r[1] = param_1;
    (void)tc_call(0x802231e4u, &a);
    a.r[0] = 0x804dfac0u;
    (void)tc_call(0x80222f5cu, &a);
    c0lt = param_2 < 1;
    if ((u32)param_2 != 1u) {
        if (!c0lt) {
            return;
        }
        if (param_2 < 0) {
            return;
        }
        a.r[0] = 0x804dfac0u;
        (void)tc_call(0x802236dcu, &a);
    } else {
        a.r[0] = 0x804dfac0u;
        (void)tc_call(0x80224238u, &a);
    }
    return;
}

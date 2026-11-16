#include "tc_rt.h"

void fn_8028fc7c(s32 param_1)
{
    u32 r4 = 0;
    TcArgs a = {0};
    r4 = (u32)rd16((u32)param_1 + 6u);
    wr8(0x8053d6f5u, (u8)r4);
    if ((r4 & 0xffu) != 0u) {
        a.r[0] = 0x80577388u;
        a.r[1] = 0xffffu;
        (void)tc_call(0x802a6020u, &a);
        a.r[0] = 0u;
        a.r[1] = 0xffffu;
        a.r[2] = 1u;
        (void)tc_call(0x802a5f58u, &a);
    } else {
        a.r[0] = 0x80577388u;
        a.r[1] = 2u;
        (void)tc_call(0x802a6020u, &a);
        a.r[0] = 0u;
        a.r[1] = 2u;
        a.r[2] = 1u;
        (void)tc_call(0x802a5f58u, &a);
    }
    return;
}

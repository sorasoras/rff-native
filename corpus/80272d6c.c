#include "tc_rt.h"

void fn_80272d6c(u32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = 0u;
    a.r[2] = 0xf0a0u;
    (void)tc_call(0x8000443cu, &a);
    wr32(param_1 + 4u, param_2);
    wr32(param_1, 0x5749424eu);
    a.r[0] = param_3;
    a.r[1] = 0x80570c60u;
    r3 = tc_call(0x8025e84cu, &a);
    if (r3 == 0u) {
        a.r[0] = param_1 + 0x20u;
        a.r[1] = 0x80570c64u;
        a.r[2] = 0x20u;
        (void)tc_call(0x8025e7dcu, &a);
    } else {
        a.r[0] = param_1 + 0x20u;
        a.r[1] = param_3;
        a.r[2] = 0x20u;
        (void)tc_call(0x8025e7dcu, &a);
    }
    a.r[0] = param_4;
    a.r[1] = 0x80570c60u;
    r3 = tc_call(0x8025e84cu, &a);
    if (r3 == 0u) {
        a.r[0] = param_1 + 0x60u;
        a.r[1] = 0x80570c64u;
        a.r[2] = 0x20u;
        (void)tc_call(0x8025e7dcu, &a);
    } else {
        a.r[0] = param_1 + 0x60u;
        a.r[1] = param_4;
        a.r[2] = 0x20u;
        (void)tc_call(0x8025e7dcu, &a);
    }
    return;
}

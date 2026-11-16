#include "tc_rt.h"

void fn_80076fa8(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    r3 = rd32(0x804865b8u);
    if (r3 != 0u) {
        a.r[0] = r3;
        (void)tc_call(0x80157e6cu, &a);
        wr32(0x804865b8u, 0u);
    }
    r3 = rd32(0x804865bcu);
    if (r3 != 0u) {
        a.r[0] = r3;
        (void)tc_call(0x80157e6cu, &a);
        wr32(0x804865bcu, 0u);
    }
    if ((u32)param_1 != 0u) {
        (void)tc_call(0x80076f60u, &a);
    }
    return;
}

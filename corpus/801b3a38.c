#include "tc_rt.h"

void fn_801b3a38(u32 param_1, u32 param_2)
{
    u32 r3 = 0, r5 = 0, r6 = 0;
    TcArgs a = {0};
    r5 = rd32(param_1);
    if (rd32(r5 + 0x10u) != 0u) {
        r3 = rd32(r5);
        r6 = r5 + 0x18u;
        r5 = rd32(r5 + 0xcu);
        a.r[0] = r3;
        a.r[1] = param_2;
        a.r[2] = r5;
        a.r[3] = r6;
        (void)tc_call(0x80040e98u, &a);
        return;
    }
    if (rd32(r5 + 0x20u) != 0u) {
        a.r[0] = r5 + 0x24u;
        a.r[1] = param_2;
        (void)tc_call(0x80094ec0u, &a);
        return;
    }
    r3 = rd32(r5);
    r6 = r5 + 0x18u;
    r5 = rd32(r5 + 0xcu);
    a.r[0] = r3;
    a.r[1] = param_2;
    a.r[2] = r5;
    a.r[3] = r6;
    (void)tc_call(0x80040e98u, &a);
    return;
}

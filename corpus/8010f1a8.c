#include "tc_rt.h"

void fn_8010f1a8(s32 param_1)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x800a7460u, &a);
    r31 = r3;
    if (((u32)param_1 == 0x187u && (s32)r3 >= 1) && (s32)r3 <= 13) {
        a.r[0] = r3;
        a.r[1] = 0xeu;
        a.r[2] = 1u;
        (void)tc_call(0x8014dadcu, &a);
    }
    r3 = tc_call(0x80097da4u, &a);
    r3 = rd32(r3 + 0xcu);
    a.r[0] = r3;
    a.r[1] = r31;
    a.r[2] = (u32)param_1;
    (void)tc_call(0x800eef20u, &a);
    return;
}

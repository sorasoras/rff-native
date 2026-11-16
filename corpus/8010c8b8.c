#include "tc_rt.h"

void fn_8010c8b8(s32 param_1, s32 param_2)
{
    u32 r4 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = (u32)param_1 + ((u32)param_2 * 0x480u);
    r30 = 0u;
    do {
        r4 = rd32(r31 + 0x8cu);
        if ((r4 + 0x10000u) != 0xffffu) {
            a.r[0] = rd32(r31);
            a.r[1] = r4;
            a.r[2] = r31 + 8u;
            a.r[3] = rd32(r31 + 0x88u);
            (void)tc_call(0x800a7194u, &a);
        }
        r30 = r30 + 1u;
        r31 = r31 + 0x90u;
    } while ((s32)r30 < 8);
    a.r[0] = (u32)param_1;
    a.r[1] = (u32)param_2;
    (void)tc_call(0x8010c844u, &a);
    return;
}

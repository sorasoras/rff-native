#include "tc_rt.h"

void fn_8022ea04(s32 param_1, u32 param_2)
{
    u32 r3 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x8022c2b0u, &a);
    if (rd32(0x804e0248u) != 0u) {
        a.r[0] = r3;
        (void)tc_call(0x8022c2d8u, &a);
        r3 = 0u;
    } else {
        wr32(0x804e0244u, r3);
        r3 = 0x804e0214u;
        wr32(0x804e0248u, 1u);
    }
    r3 = r3 + (((u32)param_1 << 1u) & 0xfffffffeu);
    if (param_2 != (u32)rd16(r3 + 0x1cu)) {
        wr16(r3 + 0x1cu, (u16)param_2);
        a.r[0] = 1u;
        a.r[1] = 0x14u;
        (void)tc_call(0x8022e578u, &a);
    } else {
        a.r[0] = 0u;
        a.r[1] = 0x14u;
        (void)tc_call(0x8022e578u, &a);
    }
    return;
}

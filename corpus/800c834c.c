#include "tc_rt.h"

void fn_800c834c(s32 param_1, s32 param_2)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = (u32)param_1 + ((u32)param_2 * 0x60u);
    a.r[0] = (u32)param_1;
    a.r[1] = (u32)param_2;
    r3 = tc_call(0x800c8804u, &a);
    wr32(r31 + 0x38u, r3);
    if (rd32(r31 + 0x3cu) > r3) {
        wr32(r31 + 0x3cu, r3);
    }
    a.r[0] = (u32)param_1;
    a.r[1] = (u32)param_2;
    r3 = tc_call(0x800c8974u, &a);
    wr16(r31 + 0x42u, (u16)r3);
    a.r[0] = (u32)param_1;
    a.r[1] = (u32)param_2;
    r3 = tc_call(0x800c89e4u, &a);
    wr16(r31 + 0x44u, (u16)r3);
    a.r[0] = (u32)param_1;
    a.r[1] = (u32)param_2;
    r3 = tc_call(0x800c8a50u, &a);
    wr16(r31 + 0x46u, (u16)r3);
    return;
}

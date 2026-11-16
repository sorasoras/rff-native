#include "tc_rt.h"

void fn_801ba3d0(s32 param_1)
{
    u32 r0 = 0;
    TcArgs a = {0};
    a.r[0] = 0x804b9e80u;
    a.r[1] = rd32((u32)param_1 + 0x2cu);
    (void)tc_call(0x80120d14u, &a);
    r0 = rd32((u32)param_1 + 0x2cu);
    wr8(0x8049e122u, (u8)r0);
    a.r[0] = 0x804b9e80u;
    a.r[1] = r0 & 0xffu;
    (void)tc_call(0x80120d14u, &a);
    a.r[0] = 0x804bb6e0u;
    a.r[1] = rd32((u32)param_1 + 0x2cu);
    (void)tc_call(0x8014d27cu, &a);
    r0 = rd32((u32)param_1 + 0x2cu);
    wr8(0x8049e123u, (u8)r0);
    a.r[0] = 0x804bb6e0u;
    a.r[1] = r0 & 0xffu;
    (void)tc_call(0x8014d27cu, &a);
    return;
}

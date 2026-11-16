#include "tc_rt.h"

void fn_800587cc(u32 param_1, u32 param_2, u32 param_3)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    a.r[0] = param_2;
    r3 = tc_call(0x8007dad4u, &a);
    r3 = rd32(r3 + 8u);
    a.r[0] = r3;
    r3 = tc_call(0x8007d13cu, &a);
    r31 = (u32)rd16(r3);
    a.r[0] = param_2;
    r3 = tc_call(0x8007dad4u, &a);
    r3 = rd32(r3 + 8u);
    a.r[0] = r3;
    r3 = tc_call(0x8007d13cu, &a);
    r30 = (u32)rd16(r3 + 2u);
    a.r[0] = param_1;
    a.r[1] = r31;
    a.r[2] = param_3;
    (void)tc_call(0x80057d6cu, &a);
    a.r[0] = param_1;
    a.r[1] = r30;
    a.r[2] = param_3;
    (void)tc_call(0x80057c80u, &a);
    return;
}

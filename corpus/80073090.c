#include "tc_rt.h"

void fn_80073090(s32 param_1)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    r3 = tc_call(0x8007dae8u, &a);
    r31 = ((u32)param_1 * 0x34u) - 0x7fb7991cu;
    a.r[0] = r3;
    r3 = tc_call(0x8007dad4u, &a);
    r3 = rd32(r3 + 8u);
    a.r[0] = r3;
    r3 = tc_call(0x8007d13cu, &a);
    a.r[0] = 0x80469958u;
    a.r[1] = rd32(r31 + 0x14u);
    a.r[2] = (u32)rd16(r3 + 2u);
    (void)tc_call(0x80058468u, &a);
    wr32(r31 + 0x14u, 0u);
    wr32(r31 + 0x10u, 2u);
    return;
}

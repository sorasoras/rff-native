#include "tc_rt.h"

u32 fn_8031fa50(s32 param_1, s32 param_2)
{
    u32 r31 = 0;
    TcArgs a = {0};
    r31 = (u32)param_2 + (u32)rd16((u32)param_2 + 0xcu) + 8u;
    a.r[0] = r31 + 4u;
    a.r[1] = 0u;
    a.r[2] = 8u;
    (void)tc_call(0x8000443cu, &a);
    a.r[0] = (u32)param_1;
    a.r[1] = r31;
    (void)tc_call(0x802de7f4u, &a);
    wr32((u32)param_1 + 0xcu, rd32((u32)param_1 + 0xcu) + (u32)rd16(r31 + rd32(r31) + 4u));
    a.r[0] = r31;
    (void)tc_call(0x8031f65cu, &a);
    return r31;
}

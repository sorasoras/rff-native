#include "tc_rt.h"

u32 fn_803116b0(s32 param_1, s32 param_2)
{
    u32 r31 = 0;
    TcArgs a = {0};
    r31 = rd32((u32)param_1 + 0xc018u) + (rd32((u32)param_2 + 0x40u) * 0x1cu);
    a.r[0] = r31;
    a.r[1] = (u32)param_2;
    (void)tc_call(0x802de984u, &a);
    a.r[0] = r31 + 0xcu;
    a.r[1] = (u32)param_2;
    (void)tc_call(0x802de7f4u, &a);
    wr32((u32)param_2 + 0xcu, 3u);
    return 1u;
}

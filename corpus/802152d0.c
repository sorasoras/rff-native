#include "tc_rt.h"

s32 fn_802152d0(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    wr32((u32)param_1 + 0x3d8u, 0u);
    wr32((u32)param_1 + 0x3dcu, 0u);
    wr32((u32)param_1 + 0x3e0u, 0u);
    wr32((u32)param_1 + 0x3e4u, 0u);
    wr32((u32)param_1 + 0x3e8u, 0u);
    wr32((u32)param_1 + 0x3ecu, 0u);
    wr32((u32)param_1 + 0x3f0u, 0u);
    wr32((u32)param_1 + 0x3f4u, 0u);
    wr32((u32)param_1 + 0x3f8u, 0u);
    wr32((u32)param_1 + 0x3fcu, 0u);
    wr32((u32)param_1 + 0x400u, 0xffffffffu);
    wr32((u32)param_1 + 0x404u, 0u);
    r3 = tc_call(0x80097e5cu, &a);
    a.r[0] = 0x148u;
    a.r[1] = r3;
    r3 = tc_call(0x80215268u, &a);
    wr32((u32)param_1 + 0x3f8u, r3);
    r3 = tc_call(0x80097e5cu, &a);
    a.r[0] = 0x148u;
    a.r[1] = r3;
    r3 = tc_call(0x80215268u, &a);
    wr32((u32)param_1 + 0x3fcu, r3);
    return param_1;
}

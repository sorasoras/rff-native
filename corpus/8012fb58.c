#include "tc_rt.h"

s32 fn_8012fb58(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    a.r[1] = 0xfu;
    a.r[2] = 0xbu;
    a.r[3] = 0xa5u;
    (void)tc_call(0x801892ccu, &a);
    wr32((u32)param_1 + 0x28u, 0x803637b8u);
    a.r[0] = (u32)param_1 + 0x3cu;
    (void)tc_call(0x80163efcu, &a);
    a.r[0] = (u32)param_1 + 0x5a8u;
    a.r[1] = 0x8020eeecu;
    a.r[2] = 0x8020ef0cu;
    a.r[3] = 0x38u;
    a.r[4] = 4u;
    (void)tc_call(0x80255624u, &a);
    a.r[0] = (u32)param_1 + 0x688u;
    a.r[1] = 0x801e6108u;
    a.r[2] = 0x801e6158u;
    a.r[3] = 0x74u;
    a.r[4] = 3u;
    (void)tc_call(0x80255624u, &a);
    a.r[0] = (u32)param_1 + 0x7ecu;
    (void)tc_call(0x801e6108u, &a);
    a.r[0] = (u32)param_1 + 0x868u;
    (void)tc_call(0x801f0da4u, &a);
    wr32((u32)param_1 + 0x38u, 0u);
    return param_1;
}

#include "tc_rt.h"

s32 fn_800f99a8(s32 param_1)
{
    TcArgs a = {0};
    wr32((u32)param_1 + 0x40u, 0x8036045cu);
    a.r[0] = (u32)param_1 + 4u;
    (void)tc_call(0x800f82d0u, &a);
    wr32((u32)param_1 + 0x40u, 0x80360548u);
    a.r[0] = (u32)param_1 + 0x44u;
    (void)tc_call(0x80119b14u, &a);
    a.r[0] = (u32)param_1 + 0x44cu;
    (void)tc_call(0x8014aea0u, &a);
    a.r[0] = (u32)param_1 + 0x5c8u;
    (void)tc_call(0x801884f4u, &a);
    a.r[0] = (u32)param_1 + 0x9b0u;
    (void)tc_call(0x80208f44u, &a);
    a.r[0] = (u32)param_1 + 0x9c8u;
    (void)tc_call(0x80190c4cu, &a);
    a.r[0] = (u32)param_1 + 0xb98u;
    a.r[1] = 0x8020eeecu;
    a.r[2] = 0x8020ef0cu;
    a.r[3] = 0x38u;
    a.r[4] = 3u;
    (void)tc_call(0x80255624u, &a);
    a.r[0] = (u32)param_1 + 0xc44u;
    (void)tc_call(0x801f0da4u, &a);
    wr32((u32)param_1 + 0xca4u, 0u);
    wr32((u32)param_1 + 0xcacu, 0u);
    wr32((u32)param_1 + 0xcb0u, 0u);
    wr32((u32)param_1 + 0xcb4u, 0u);
    wr32((u32)param_1 + 0xcb8u, 0u);
    wr32((u32)param_1 + 0xcbcu, 0u);
    wr32((u32)param_1 + 0xcc0u, 0u);
    wr32((u32)param_1 + 0xcc4u, 0u);
    wr32((u32)param_1 + 0xc40u, 0u);
    return param_1;
}

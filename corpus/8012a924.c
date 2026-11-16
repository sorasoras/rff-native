#include "tc_rt.h"

u32 fn_8012a924(s32 param_1)
{
    u32 r3 = 0, r30 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 0x44u;
    a.r[1] = 1u;
    r3 = tc_call(0x800f857cu, &a);
    r30 = r3;
    a.r[0] = (u32)param_1 + 0x94u;
    a.r[1] = 0u;
    (void)tc_call(0x801f10b8u, &a);
    a.r[0] = rd32(0x8057129cu);
    (void)tc_call(0x80119f48u, &a);
    a.r[0] = 0x804de14cu;
    r3 = tc_call(0x801f412cu, &a);
    wr32((u32)param_1 + 0x150u, r3);
    a.r[0] = 0x804de14cu;
    r3 = tc_call(0x801f416cu, &a);
    wr32((u32)param_1 + 0x1c4u, r3);
    a.r[0] = (u32)param_1 + 0xe4u;
    (void)tc_call(0x801e6364u, &a);
    a.r[0] = (u32)param_1 + 0x158u;
    (void)tc_call(0x801e6364u, &a);
    a.r[0] = (u32)param_1 + 0x1ccu;
    (void)tc_call(0x8020f030u, &a);
    a.r[0] = (u32)param_1 + 0x204u;
    (void)tc_call(0x8020f030u, &a);
    a.r[0] = (u32)param_1 + 0x23cu;
    (void)tc_call(0x8020f030u, &a);
    a.r[0] = (u32)param_1 + 0x274u;
    (void)tc_call(0x8020f030u, &a);
    a.r[0] = (u32)param_1 + 0x2acu;
    (void)tc_call(0x8020f030u, &a);
    a.r[0] = (u32)param_1 + 0x2e4u;
    (void)tc_call(0x8020f030u, &a);
    (void)tc_call(0x80103018u, &a);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x8012a9f0u, &a);
    return r30;
}

#include "tc_rt.h"

s32 fn_8012b688(s32 param_1)
{
    TcArgs a = {0};
    wr32((u32)param_1 + 0x40u, 0x8036045cu);
    a.r[0] = (u32)param_1 + 4u;
    (void)tc_call(0x800f82d0u, &a);
    wr32((u32)param_1 + 0x40u, 0x80363640u);
    a.r[0] = (u32)param_1 + 0x5cu;
    (void)tc_call(0x800f82d0u, &a);
    a.r[0] = (u32)param_1 + 0x98u;
    (void)tc_call(0x80119b14u, &a);
    a.r[0] = (u32)param_1 + 0x4a0u;
    (void)tc_call(0x8014aea0u, &a);
    a.r[0] = (u32)param_1 + 0x61cu;
    (void)tc_call(0x80190c4cu, &a);
    a.r[0] = (u32)param_1 + 0x7f4u;
    a.r[1] = 0x8020eeecu;
    a.r[2] = 0x8020ef0cu;
    a.r[3] = 0x38u;
    a.r[4] = 3u;
    (void)tc_call(0x80255624u, &a);
    return param_1;
}

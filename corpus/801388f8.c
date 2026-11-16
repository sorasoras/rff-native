#include "tc_rt.h"

s32 fn_801388f8(s32 param_1)
{
    u32 r31 = 0;
    TcArgs a = {0};
    wr32((u32)param_1 + 0x40u, 0x8036045cu);
    a.r[0] = (u32)param_1 + 4u;
    (void)tc_call(0x800f82d0u, &a);
    wr32((u32)param_1 + 0x40u, 0x80363b48u);
    a.r[0] = (u32)param_1 + 0x44u;
    (void)tc_call(0x80119b14u, &a);
    r31 = (u32)param_1 + 0x44cu;
    a.r[0] = r31;
    a.r[1] = 1u;
    a.r[2] = 3u;
    a.r[3] = 3u;
    (void)tc_call(0x801892ccu, &a);
    wr32(r31 + 0x28u, 0x80363b68u);
    a.r[0] = r31 + 0x30u;
    (void)tc_call(0x80163efcu, &a);
    a.r[0] = (u32)param_1 + 0x488u;
    a.r[1] = 0x80139accu;
    a.r[2] = 0x80139b08u;
    a.r[3] = 0x54u;
    a.r[4] = 3u;
    (void)tc_call(0x80255624u, &a);
    a.r[0] = (u32)param_1 + 0x584u;
    (void)tc_call(0x800f82d0u, &a);
    a.r[0] = (u32)param_1 + 0x5c4u;
    (void)tc_call(0x80190c4cu, &a);
    wr32((u32)param_1 + 0x79cu, 0u);
    return param_1;
}

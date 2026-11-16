#include "tc_rt.h"

void fn_801bf64c(s32 param_1, s32 param_2)
{
    u32 r0 = 0, r4 = 0, r29 = 0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    r29 = ((u32)param_2 << 2u) & 0xfffffffcu;
    r0 = rd32(0x80575c6cu);
    wr32(0x817fdfe8u, rd32(0x80575c68u));
    wr32(0x817fdfecu, r0);
    a.r[0] = (u32)param_1 + 0x48u;
    a.r[1] = rd32(r29 - 0x7e802018u);
    (void)tc_call(0x801f100cu, &a);
    a.r[0] = (u32)param_1 + 0x48u;
    a.r[1] = 0u;
    (void)tc_call(0x801f10b8u, &a);
    if (rd32((u32)param_1 + r29 + 0x9cu) != 0u) {
        r29 = (u32)param_1 + ((u32)param_2 * 0x50u) + 0xa4u;
        a.r[0] = r29;
        a.r[1] = 0x8033ba1eu;
        (void)tc_call(0x801f100cu, &a);
        a.r[0] = r29;
        (void)tc_call(0x801f10d8u, &a);
    }
    r4 = 1u - (u32)param_2;
    if (rd32((u32)param_1 + ((r4 << 2u) & 0xfffffffcu) + 0x9cu) != 0u) {
        r4 = (u32)param_1 + (r4 * 0x50u);
        r29 = r4 + 0xa4u;
        a.r[0] = r29;
        a.r[1] = 0x8033ba25u;
        (void)tc_call(0x801f100cu, &a);
        a.r[0] = r29;
        (void)tc_call(0x801f10d8u, &a);
    }
    wr32((u32)param_1 + 0x98u, (u32)param_2);
    return;
}

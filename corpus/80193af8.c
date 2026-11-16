#include "tc_rt.h"

void fn_80193af8(s32 param_1, s32 param_2)
{
    u32 r0 = 0, r29 = 0, r30 = 0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    r0 = (u32)((s32)ppc_mulhw(1717986919, param_2) >> 2);
    wr32(0x817fdff0u, 0u);
    r29 = r0 + ((r0 >> 0x1fu) & 1u);
    r30 = rd32(rd32((u32)param_1 + 0x18u));
    a.r[0] = (u32)param_2 - (r29 * 0xau);
    a.r[1] = 0x817fdfd8u;
    a.r[2] = 8u;
    (void)tc_call(0x800f8734u, &a);
    wr8(0x817fdfe0u, 0u);
    a.r[0] = r30;
    a.r[1] = 0x817fdfd8u;
    (void)tc_call(0x802e4518u, &a);
    a.r[0] = r29;
    a.r[1] = 0x817fdfd8u;
    a.r[2] = 8u;
    (void)tc_call(0x800f8734u, &a);
    wr8(0x817fdfe0u, 0u);
    a.r[0] = rd32(rd32((u32)param_1 + 0x1cu));
    a.r[1] = 0x817fdfd8u;
    (void)tc_call(0x802e4518u, &a);
    return;
}

#include "tc_rt.h"

void fn_8031f130(s32 param_1)
{
    u32 r0 = 0, r5 = 0, r6 = 0, r8 = 0;
    TcArgs a = {0};
    wr32(0x817fdf60u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    a.r[0] = rd32((u32)param_1 + 0x20u);
    a.r[1] = 0x817fdfc8u;
    (void)tc_call(0x80313b9cu, &a);
    if ((u32)rd8((u32)param_1 + 0x8au) != 0u) {
        a.r[0] = rd32((u32)param_1 + 0x20u);
        a.r[1] = 0x817fdf68u;
        (void)tc_call(0x80313b9cu, &a);
        r8 = rd32((u32)param_1 + 0x28u);
        r5 = r8 & 1u;
        r6 = (r8 >> 1u) & 1u;
        r8 = (r8 >> 2u) & 1u;
        a.r[0] = (u32)param_1 + 0x8cu;
        a.r[1] = 0x817fdf68u;
        a.r[2] = r5;
        a.r[3] = r6;
        a.r[4] = (u32)(s8)rd8((u32)param_1 + 0x88u);
        a.r[5] = r8;
        (void)tc_call(0x80313968u, &a);
        wr8((u32)param_1 + 0x8au, 0u);
    }
    r0 = rd32((u32)param_1 + 0x90u);
    wr32(0x817fdf98u, rd32((u32)param_1 + 0x8cu));
    wr32(0x817fdf9cu, r0);
    r0 = rd32((u32)param_1 + 0x98u);
    wr32(0x817fdfa0u, rd32((u32)param_1 + 0x94u));
    wr32(0x817fdfa4u, r0);
    r0 = rd32((u32)param_1 + 0xa0u);
    wr32(0x817fdfa8u, rd32((u32)param_1 + 0x9cu));
    wr32(0x817fdfacu, r0);
    r0 = rd32((u32)param_1 + 0xa8u);
    wr32(0x817fdfb0u, rd32((u32)param_1 + 0xa4u));
    wr32(0x817fdfb4u, r0);
    r0 = rd32((u32)param_1 + 0xb0u);
    wr32(0x817fdfb8u, rd32((u32)param_1 + 0xacu));
    wr32(0x817fdfbcu, r0);
    r0 = rd32((u32)param_1 + 0xb8u);
    wr32(0x817fdfc0u, rd32((u32)param_1 + 0xb4u));
    wr32(0x817fdfc4u, r0);
    a.r[0] = 0x817fdfc8u;
    a.r[1] = 0x817fdfc8u;
    (void)tc_call(0x8023386cu, &a);
    a.r[0] = 0x817fdfc8u;
    a.r[1] = 0x817fdf98u;
    a.r[2] = 0x8056ff40u;
    (void)tc_call(0x802337a0u, &a);
    return;
}

#include "tc_rt.h"

u32 fn_8031efa8(s32 param_1, u32 param_2)
{
    u32 r0 = 0, r5 = 0, r6 = 0, r8 = 0;
    TcArgs a = {0};
    wr32(0x817fdfc0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    if ((u32)rd8((u32)param_1 + 0x8au) != 0u) {
        a.r[0] = rd32((u32)param_1 + 0x20u);
        a.r[1] = 0x817fdfc8u;
        (void)tc_call(0x80313b9cu, &a);
        r8 = rd32((u32)param_1 + 0x28u);
        r5 = r8 & 1u;
        r6 = (r8 >> 1u) & 1u;
        r8 = (r8 >> 2u) & 1u;
        a.r[0] = (u32)param_1 + 0x8cu;
        a.r[1] = 0x817fdfc8u;
        a.r[2] = r5;
        a.r[3] = r6;
        a.r[4] = (u32)(s8)rd8((u32)param_1 + 0x88u);
        a.r[5] = r8;
        (void)tc_call(0x80313968u, &a);
        wr8((u32)param_1 + 0x8au, 0u);
    }
    r0 = rd32((u32)param_1 + 0x90u);
    wr32(param_2, rd32((u32)param_1 + 0x8cu));
    wr32(param_2 + 4u, r0);
    r0 = rd32((u32)param_1 + 0x98u);
    wr32(param_2 + 8u, rd32((u32)param_1 + 0x94u));
    wr32(param_2 + 0xcu, r0);
    r0 = rd32((u32)param_1 + 0xa0u);
    wr32(param_2 + 0x10u, rd32((u32)param_1 + 0x9cu));
    wr32(param_2 + 0x14u, r0);
    r0 = rd32((u32)param_1 + 0xa8u);
    wr32(param_2 + 0x18u, rd32((u32)param_1 + 0xa4u));
    wr32(param_2 + 0x1cu, r0);
    r0 = rd32((u32)param_1 + 0xb0u);
    wr32(param_2 + 0x20u, rd32((u32)param_1 + 0xacu));
    wr32(param_2 + 0x24u, r0);
    r0 = rd32((u32)param_1 + 0xb8u);
    wr32(param_2 + 0x28u, rd32((u32)param_1 + 0xb4u));
    wr32(param_2 + 0x2cu, r0);
    return param_2;
}

#include "tc_rt.h"

void fn_802eb6e4(s32 param_1)
{
    u32 r0 = 0, r5 = 0, r7 = 0, r8 = 0, r9 = 0;
    r9 = (u32)(s16)rd16(0x80577d3au);
    r5 = rd32((u32)param_1 + 0x38u) & 0x1fu;
    r8 = (u32)(s16)rd16(0x80577d3cu);
    r0 = rd32((u32)param_1 + 0x3cu) & 0x1fu;
    r7 = (u32)(s16)rd16(0x80577d3eu);
    wr16((u32)param_1 + 0x10u, rd16(0x80577d38u));
    wr16((u32)param_1 + 0x12u, (u16)r9);
    wr16((u32)param_1 + 0x14u, (u16)r8);
    wr16((u32)param_1 + 0x16u, (u16)r7);
    wr16((u32)param_1 + 0x18u, 0xffu);
    wr16((u32)param_1 + 0x1au, 0xffu);
    wr16((u32)param_1 + 0x1cu, 0xffu);
    wr16((u32)param_1 + 0x1eu, 0xffu);
    wr16((u32)param_1 + 0x20u, 0xffu);
    wr16((u32)param_1 + 0x22u, 0xffu);
    wr16((u32)param_1 + 0x24u, 0xffu);
    wr16((u32)param_1 + 0x26u, 0xffu);
    wr32((u32)param_1 + 0x38u, r5);
    wr32((u32)param_1 + 0x3cu, r0);
    wr8((u32)param_1 + 0x59u, 0u);
    wr32((u32)param_1 + 0x40u, 0u);
    return;
}

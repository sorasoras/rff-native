#include "tc_rt.h"

void fn_80250190(s32 param_1, u32 param_2)
{
    u32 c0lt = 0, r0 = 0, r5 = 0;
    c0lt = param_1 < 2;
    if ((u32)param_1 == 2u) {
        wr8(rd32(0x80576c88u) + 0x5f9u, (u8)((((0u - param_2) | param_2) >> 0x1fu) & 1u));
        return;
    }
    if (!c0lt) {
        if (param_1 >= 4) {
            return;
        }
        wr8(rd32(0x80576c88u) + 0x5fau, (u8)((((0u - param_2) | param_2) >> 0x1fu) & 1u));
        return;
    }
    c0lt = param_1 < 0;
    if ((u32)param_1 == 0u) {
        return;
    }
    if (!c0lt) {
        r0 = param_2 & 0xffffu;
        r5 = rd32(0x80576c88u);
        wr16(r5 + 4u, (u16)param_2);
        wr16(r5, (u16)((ppc_cntlzw(r0) >> 5u) & 0xffffu));
        wr16(r5 + 2u, 1u);
        if (r0 == 0u) {
            return;
        }
        wr32(r5 + 0x5fcu, rd32(r5 + 0x5fcu) | 8u);
        return;
    }
    return;
}

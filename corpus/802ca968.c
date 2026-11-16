#include "tc_rt.h"

u32 fn_802ca968(u32 param_1, s32 param_2)
{
    u32 c0eq = 0;
    TcArgs a = {0};
    if (param_1 != 0u) {
        c0eq = rd32(param_1 + 0x18u) == 0u;
        wr32(param_1, 0x80399a70u);
        if (!c0eq) {
            a.r[0] = rd32(0x805474e0u);
            (void)tc_call(0x8026d4a0u, &a);
        }
        if (rd32(param_1 + 0x14u) != 0u) {
            a.r[0] = rd32(0x805474e0u);
            (void)tc_call(0x8026d4a0u, &a);
        }
        if (param_2 > 0) {
            (void)tc_call(0x80040cd4u, &a);
        }
    }
    return param_1;
}

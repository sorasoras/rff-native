#include "tc_rt.h"

void fn_80227f20(u32 param_1)
{
    wr32(0x800000d4u, param_1);
    wr32(0x800000c0u, param_1 & 0x3fffffffu);
    if (rd32(0x800000d8u) == param_1) {
        wr32(param_1 + 0x19cu, rd32(param_1 + 0x19cu) | 0x2000u);
        return;
    }
    wr32(param_1 + 0x19cu, rd32(param_1 + 0x19cu) & 0xffffdfffu);
    return;
}

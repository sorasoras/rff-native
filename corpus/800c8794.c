#include "tc_rt.h"

u32 fn_800c8794(s32 param_1, s32 param_2)
{
    if (((u32)param_2 + 0x10000u) == 0xffffu) {
        if ((u32)rd8(0x8049912eu) == 0x1eu) {
            return 0x60u;
        }
        return 0x61u;
    }
    return rd32((u32)param_1 + ((u32)param_2 * 0x60u) + 0x20u);
}

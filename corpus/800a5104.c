#include "tc_rt.h"

u64 fn_800a5104(u32 param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5, u32 param_6)
{
    u32 r0 = 0, r7 = 0, r8 = 0;
    r7 = param_5;
    r8 = param_6;
    r0 = param_5 ^ 0x80000000u;
    if ((0u - (u32)((u64)~r0 + (u64)r0 + (u64)(u32)(((u64)~(param_1 ^ 0x80000000u) + (u64)r0 + (u64)(param_2 <= param_6)) >> 0x20ull))) == 0u) {
        r8 = param_2;
        r7 = param_1;
    }
    r0 = r7 ^ 0x80000000u;
    if ((0u - (u32)((u64)~r0 + (u64)r0 + (u64)(u32)(((u64)~(param_3 ^ 0x80000000u) + (u64)r0 + (u64)(param_4 <= r8)) >> 0x20ull))) == 0u) {
        return ((u64)r7 << 0x20ull) | (u64)r8;
    }
    return ((u64)param_3 << 0x20ull) | (u64)param_4;
}

#include "tc_rt.h"

u64 fn_80230320(s32 param_1, u32 param_2)
{
    u32 r3 = 0, r4 = 0;
    u64 t0 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x8022c2b0u, &a);
    r4 = rd32(0x800030dcu);
    t0 = (u64)rd32(0x800030d8u) + (u64)(u32)param_1 + (u64)((r4 + param_2) < r4);
    a.r[0] = r3;
    (void)tc_call(0x8022c2d8u, &a);
    return ((u64)(u32)t0 << 0x20ull) | (u64)(r4 + param_2);
}

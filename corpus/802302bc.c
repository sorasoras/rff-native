#include "tc_rt.h"

u64 fn_802302bc(void)
{
    u32 r3 = 0, r4 = 0, r5 = 0, r31 = 0;
    u64 t0 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x8022c2b0u, &a);
    r31 = r3;
    r3 = tc_call(0x8023029cu, &a);
    r4 = tc_lastr4();
    r5 = rd32(0x800030dcu);
    t0 = (u64)rd32(0x800030d8u) + (u64)r3 + (u64)((r5 + r4) < r5);
    a.r[0] = r31;
    (void)tc_call(0x8022c2d8u, &a);
    return ((u64)(u32)t0 << 0x20ull) | (u64)(r5 + r4);
}

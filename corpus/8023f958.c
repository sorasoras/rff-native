#include "tc_rt.h"

void fn_8023f958(u32 param_r3)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r6 = 0, r28 = 0, r29 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x802302bcu, &a);
    r28 = tc_lastr4();
    r29 = r3;
    do {
        r3 = tc_call(0x802302bcu, &a);
        r4 = tc_lastr4();
        r6 = r4 - r28;
        a.r[0] = (((u32)((u64)~r29 + (u64)r3 + (u64)(r28 <= r4)) << 3u) & 0xfffffff8u) | ((r6 >> 0x1du) & 7u);
        a.r[1] = (r6 << 3u) & 0xfffffff8u;
        a.r[2] = 0u;
        a.r[3] = (ppc_mulhwu(0x431bde83u, (rd32(0x800000f8u) >> 2u) & 0x3fffffffu) >> 0xfu) & 0x1ffffu;
        r3 = tc_call(0x80255b5cu, &a);
        r0 = r3 ^ 0x80000000u;
    } while ((0u - (u32)((u64)~r0 + (u64)r0 + (u64)(u32)(((u64)~((u32)((s32)param_r3 >> 31) ^ 0x80000000u) + (u64)r0 + (u64)(param_r3 <= tc_lastr4())) >> 0x20ull))) != 0u);
    return;
}

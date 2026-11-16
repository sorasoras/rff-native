#include "tc_rt.h"

s32 fn_801cbb88(u32 param_1, s32 param_2)
{
    u32 r0 = 0, r3 = 0, r5 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    (void)param_1;
    r3 = tc_call(0x802f08ccu, &a);
    f1 = tc_lastf();
    r31 = r3;
    r0 = 0u;
    if (param_2 >= 0 && param_2 < 3) {
        r0 = 1u;
    }
    if (r0 == 0u) {
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = 0x80373c4cu;
        a.r[1] = 0x6au;
        a.r[2] = 0x80373c14u;
        a.r[3] = (u32)param_2;
        a.r[4] = 0u;
        a.r[5] = 3u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        (void)tc_call(0x802e41c0u, &a);
    }
    r3 = r31 + (((u32)param_2 << 4u) & 0xfffffff0u);
    r5 = rd32(r3 + 0x60u);
    r0 = rd32(r3 + 0x5cu);
    return (s32)((u64)(u32)((s32)r5 >> 31) + (u64)((r0 >> 0x1fu) & 1u) + (u64)(r0 <= r5));
}

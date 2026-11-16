#include "tc_rt.h"

s32 fn_80142318(u32 param_1, u32 param_2, s32 param_3)
{
    u32 r3 = 0, r5 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x80081324u, &a);
    if (r3 == 0u) {
        r3 = tc_call(0x80081370u, &a);
        if (r3 == 0u) {
            a.r[0] = param_1;
            a.r[1] = param_2;
            r3 = tc_call(0x801423f0u, &a);
            r5 = (u32)(s8)r3;
            r5 = ((r5 >> 0x1fu) & 1u) + r5;
            r5 = (u32)((s32)r5 >> 1);
            a.r[0] = param_1;
            a.r[1] = param_2;
            r3 = tc_call(0x801423ccu, &a);
            r3 = rd32(r3 + 4u) + ((((u32)(s8)param_3 + r5) << 3u) & 0xfffffff8u);
            return (s32)r3;
        }
    }
    a.r[0] = param_1;
    a.r[1] = param_2;
    r3 = tc_call(0x801423ccu, &a);
    r3 = rd32(r3 + 4u);
    r3 = r3 + (((u32)(s8)param_3 << 3u) & 0xfffffff8u);
    return (s32)r3;
}

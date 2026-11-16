#include "tc_rt.h"

u32 fn_800583c8(s32 param_1, s32 param_2, u32 param_3, u32 param_4, u32 param_5)
{
    u32 r3 = 0, r5 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r5 = (u32)param_1 + ((u32)param_2 * 0xcu);
    wr32(r5 + 0x20u, rd32(r5 + 0x20u) + 1u);
    if ((rd32(r5 + 0x1cu) + 0x10000u) != 0xffffu) {
        r3 = 0u;
    } else {
        a.r[0] = (u32)param_2;
        r3 = tc_call(0x8007d128u, &a);
        r31 = r3;
        r3 = tc_call(0x800545e4u, &a);
        f1 = tc_lastf();
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = r3;
        a.r[1] = rd32(r31);
        a.r[2] = 0u;
        a.r[3] = param_4;
        a.r[4] = param_5;
        r3 = tc_call(0x80050dd4u, &a);
        wr32(param_3, r3);
        r3 = 1u;
    }
    return r3;
}

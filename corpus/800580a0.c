#include "tc_rt.h"

u32 fn_800580a0(u32 param_1, s32 param_2, u32 param_3, u32 param_4, u32 param_5)
{
    u32 r3 = 0, r4 = 0, r5 = 0, r8 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r8 = rd32(param_1);
    while (r8 != 0u) {
        r3 = r8;
        r8 = rd32(r8);
        r5 = rd32(r3 + 8u);
        if (rd32(r5 + 0x10u) == (u32)param_2) {
            r3 = 0u;
            r4 = rd32(r5 + 0x18u) + 1u;
            wr32(r5 + 0x18u, r4 & ~(u32)((s32)r4 >> 31));
            return r3;
        }
    }
    a.r[0] = (u32)param_2;
    r3 = tc_call(0x8007d114u, &a);
    r31 = r3;
    r3 = tc_call(0x80057a90u, &a);
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
    return r3;
}

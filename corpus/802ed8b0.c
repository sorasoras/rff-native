#include "tc_rt.h"

void fn_802ed8b0(u32 param_1, s32 param_2, u32 param_3, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r7, u32 param_r8, u32 param_r9)
{
    u32 r3 = 0, r4 = 0, r5 = 0, r6 = 0;
    TcArgs a = {0};
    r6 = rd32((u32)param_2 + 8u);
    if (r6 < 0x80000000u) {
        a.f[0] = param_f1;
        a.f[1] = param_f2;
        a.f[2] = param_f3;
        a.f[3] = param_f4;
        a.f[4] = param_f5;
        a.f[5] = param_f6;
        a.f[6] = param_f7;
        a.f[7] = param_f8;
        a.r[0] = (u32)param_2;
        a.r[3] = r6;
        a.r[4] = param_r7;
        a.r[5] = param_r8;
        a.r[6] = param_r9;
        a.r[7] = param_r10;
        (void)tc_call(0x802ddfb4u, &a);
    }
    a.r[0] = (u32)param_2;
    a.r[1] = param_3;
    r3 = tc_call(0x802de0c8u, &a);
    r6 = rd32(r3);
    r4 = rd32(param_1 + 0x18u);
    wr32(param_1, rd32(r6 + 8u));
    r5 = (u32)rd16(r6);
    wr16(param_1 + 8u, rd16(r6 + 2u));
    wr16(param_1 + 0xau, (u16)r5);
    r4 = (r4 & 0xfffffffu) | ((rd32(r6 + 4u) << 0x1cu) & 0xf0000000u);
    wr32(param_1 + 0x18u, r4);
    r3 = rd32(r3 + 4u);
    if (r3 != 0u) {
        wr32(param_1 + 4u, rd32(r3 + 8u));
        r4 = (r4 & 0xffff9fffu) | ((rd32(r3 + 4u) << 0xdu) & 0x6000u);
        wr32(param_1 + 0x18u, r4);
        wr16(param_1 + 0x16u, rd16(r3));
    } else {
        wr32(param_1 + 4u, 0u);
        wr32(param_1 + 0x18u, r4 & 0xffff9fffu);
        wr16(param_1 + 0x16u, 0u);
    }
    return;
}

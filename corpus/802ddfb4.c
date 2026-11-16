#include "tc_rt.h"

void fn_802ddfb4(u32 param_1, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r6, u32 param_r7, u32 param_r8, u32 param_r9)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r6 = 0;
    TcArgs a = {0};
    if ((rd32(param_1) - 0x200000u) != 0xaf30u) {
        a.f[0] = param_f1;
        a.f[1] = param_f2;
        a.f[2] = param_f3;
        a.f[3] = param_f4;
        a.f[4] = param_f5;
        a.f[5] = param_f6;
        a.f[6] = param_f7;
        a.f[7] = param_f8;
        a.r[0] = 0x80570ef8u;
        a.r[1] = 0x19u;
        a.r[2] = 0x8039c940u;
        a.r[3] = param_r6;
        a.r[4] = param_r7;
        a.r[5] = param_r8;
        a.r[6] = param_r9;
        a.r[7] = param_r10;
        (void)tc_call(0x802285e4u, &a);
    }
    r3 = 0u;
    wr32(param_1 + 8u, rd32(param_1 + 8u) + param_1);
    while ((r3 & 0xffffu) < rd32(param_1 + 4u)) {
        r4 = rd32(param_1 + 8u);
        r6 = (r3 << 3u) & 0x7fff8u;
        r0 = rd32(r4 + r6);
        if (r0 != 0u) {
            r0 = param_1 + r0;
            wr32(r4 + r6, r0);
            r4 = rd32(rd32(param_1 + 8u) + r6);
            if ((u32)rd8(r4 + 0x23u) == 0u) {
                wr32(r4 + 8u, param_1 + rd32(r4 + 8u));
                wr8(rd32(rd32(param_1 + 8u) + r6) + 0x23u, 1u);
            }
        }
        r4 = rd32(param_1 + 8u) + r6;
        r0 = rd32(r4 + 4u);
        if (r0 != 0u) {
            r0 = param_1 + r0;
            wr32(r4 + 4u, r0);
            r4 = rd32(rd32(param_1 + 8u) + r6 + 4u);
            if ((u32)rd8(r4 + 2u) == 0u) {
                wr32(r4 + 8u, param_1 + rd32(r4 + 8u));
                wr8(rd32(rd32(param_1 + 8u) + r6 + 4u) + 2u, 1u);
            }
        }
        r3 = r3 + 1u;
    }
    return;
}

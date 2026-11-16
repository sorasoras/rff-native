#include "tc_rt.h"

void fn_8029a02c(u32 param_1, u32 param_2, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r6, u32 param_r7, u32 param_r8, u32 param_r9)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0;
    f64 f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0;
    TcArgs a = {0};
    f1 = param_f1;
    f2 = param_f2;
    f3 = param_f3;
    f4 = param_f4;
    f5 = param_f5;
    f6 = param_f6;
    f7 = param_f7;
    f8 = param_f8;
    r10 = param_r10;
    r7 = param_r7;
    r8 = param_r8;
    r9 = param_r9;
    r3 = 0u;
    wr16(0x8053f24eu, (u16)param_2);
    r0 = (u32)rd16(0x8053f1b4u);
    if ((s32)r0 < 7 && (s32)r0 >= 2) {
        r3 = 1u;
    }
    r0 = (u32)rd16(0x8053f1e8u);
    if ((s32)r0 < 7 && (s32)r0 >= 2) {
        r3 = r3 + 1u;
    }
    r0 = (u32)rd16(0x8053f21cu);
    if ((s32)r0 < 7 && (s32)r0 >= 2) {
        r3 = r3 + 1u;
    }
    if ((r3 & 0xffu) <= 1u) {
        a.f[0] = param_f1;
        a.f[1] = param_f2;
        a.f[2] = param_f3;
        a.f[3] = param_f4;
        a.f[4] = param_f5;
        a.f[5] = param_f6;
        a.f[6] = param_f7;
        a.f[7] = param_f8;
        a.r[0] = 0u;
        a.r[3] = param_r6;
        a.r[4] = param_r7;
        a.r[5] = param_r8;
        a.r[6] = param_r9;
        a.r[7] = param_r10;
        f1 = tc_callf(0x80294c94u, &a);
        r7 = 0u;
        r8 = 0u;
        r9 = 0u;
        r10 = 0u;
        f2 = 0.0;
        f3 = 0.0;
        f4 = 0.0;
        f5 = 0.0;
        f6 = 0.0;
        f7 = 0.0;
        f8 = 0.0;
    }
    r6 = 0u;
    r5 = 0x8053f1acu;
    ctr = 3u;
    for (;;) {
        r0 = (u32)rd16(r5 + 8u);
        if (r0 != 0u && r0 != 1u && (u32)rd16(r5 + 0xau) == param_1) break;
        r6 = r6 + 1u;
        r5 = r5 + 0x34u;
        ctr = ctr - 1u;
        if (ctr == 0u) {
            return;
        }
    }
    wr16(r5 + 8u, 0u);
    wr16(r5 + 0xau, 0xffffu);
    wr8(r5 + 0xdu, 0u);
    wr32(r5 + 0x10u, 0u);
    a.r[0] = r6 & 0xffffu;
    a.r[1] = 0u;
    a.r[2] = r5;
    a.r[3] = r6;
    a.r[4] = r7;
    a.r[5] = r8;
    a.r[6] = r9;
    a.r[7] = r10;
    a.f[0] = f1;
    a.f[1] = f2;
    a.f[2] = f3;
    a.f[3] = f4;
    a.f[4] = f5;
    a.f[5] = f6;
    a.f[6] = f7;
    a.f[7] = f8;
    (void)tc_call(rd32(r5 + 4u), &a);
    return;
}

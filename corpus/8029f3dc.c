#include "tc_rt.h"

void fn_8029f3dc(u32 param_1, u32 param_2, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r7, u32 param_r8, u32 param_r9)
{
    u32 ctr = 0, fl_ = 0, r3 = 0, r4 = 0, r5 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r12 = 0;
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
    r5 = 0x80540120u;
    if ((u32)rd8(0x80540148u) >= 4u) {
        a.f[0] = param_f1;
        a.f[1] = param_f2;
        a.f[2] = param_f3;
        a.f[3] = param_f4;
        a.f[4] = param_f5;
        a.f[5] = param_f6;
        a.f[6] = param_f7;
        a.f[7] = param_f8;
        a.r[0] = 0xe0003u;
        a.r[1] = 0x80394d38u;
        a.r[2] = param_2;
        a.r[3] = param_1;
        a.r[4] = param_r7;
        a.r[5] = param_r8;
        a.r[6] = param_r9;
        a.r[7] = param_r10;
        f1 = tc_callf(0x8028cc84u, &a);
        r5 = 0u;
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
    r4 = 0u;
    r3 = 0x805401ccu;
    ctr = 2u;
    for (;;) {
        if ((u32)rd8(r3) != 0u && (u32)rd16(r3 + 6u) == param_1) {
            fl_ = 1u;
            break;
        }
        r3 = r3 + 0x60u;
        r4 = r4 + 1u;
        if ((u32)rd8(r3) != 0u && (u32)rd16(r3 + 6u) == param_1) {
            fl_ = 1u;
            break;
        }
        r3 = r3 + 0x60u;
        r4 = r4 + 1u;
        if ((u32)rd8(r3) != 0u && (u32)rd16(r3 + 6u) == param_1) {
            fl_ = 1u;
            break;
        }
        r3 = r3 + 0x60u;
        r4 = r4 + 1u;
        if ((u32)rd8(r3) != 0u && (u32)rd16(r3 + 6u) == param_1) {
            fl_ = 2u;
            break;
        }
        r4 = r4 + 1u;
        r3 = r3 + 0x60u;
        ctr = ctr - 1u;
        if (ctr == 0u) {
            r3 = 0u;
            fl_ = 1u;
            break;
        }
    }
    if (fl_ == 2u) {
        fl_ = 0u;
    } else if (fl_ == 1u) {
        fl_ = 0u;
    }
    if (r3 != 0u) {
        r12 = rd32(r3 + 0x20u);
        r3 = (u32)rd16(r3 + 4u);
        a.r[0] = r3;
        a.r[1] = ((u32)((s32)((0u - param_2) | param_2) >> 31) + 0x104u) & 0xffffu;
        a.r[2] = r5;
        a.r[3] = 0u;
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
        (void)tc_call(r12, &a);
    }
    return;
}

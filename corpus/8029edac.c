#include "tc_rt.h"

void fn_8029edac(u32 param_1, u32 param_2, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r7, u32 param_r8, u32 param_r9)
{
    u32 ctr = 0, fl_ = 0, r0 = 0, r3 = 0, r6 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r6 = 0u;
    r31 = 0x805401ccu;
    ctr = 2u;
    for (;;) {
        if ((u32)rd8(r31) != 0u && (u32)rd16(r31 + 6u) == param_1) {
            fl_ = 1u;
            break;
        }
        r31 = r31 + 0x60u;
        r6 = r6 + 1u;
        if ((u32)rd8(r31) != 0u && (u32)rd16(r31 + 6u) == param_1) {
            fl_ = 1u;
            break;
        }
        r31 = r31 + 0x60u;
        r6 = r6 + 1u;
        if ((u32)rd8(r31) != 0u && (u32)rd16(r31 + 6u) == param_1) {
            fl_ = 1u;
            break;
        }
        r31 = r31 + 0x60u;
        r6 = r6 + 1u;
        if ((u32)rd8(r31) != 0u && (u32)rd16(r31 + 6u) == param_1) {
            fl_ = 2u;
            break;
        }
        r6 = r6 + 1u;
        r31 = r31 + 0x60u;
        ctr = ctr - 1u;
        if (ctr == 0u) {
            r31 = 0u;
            fl_ = 1u;
            break;
        }
    }
    if (fl_ == 2u) {
        fl_ = 0u;
    } else if (fl_ == 1u) {
        fl_ = 0u;
    }
    if (r31 != 0u) {
        do {
            if ((u32)rd8(param_2 + 2u) != 0u) {
                r0 = (u32)rd16(param_2 + 4u);
                if (r0 <= 0x69bu) {
                    wr16(r31 + 0x12u, (u16)r0);
                    break;
                }
            }
            wr16(r31 + 0x12u, 0x69bu);
        } while (0);
        wr8(param_2 + 0x20u, 0u);
        wr8(param_2 + 2u, 0u);
        wr16(param_2, 0u);
        a.f[0] = param_f1;
        a.f[1] = param_f2;
        a.f[2] = param_f3;
        a.f[3] = param_f4;
        a.f[4] = param_f5;
        a.f[5] = param_f6;
        a.f[6] = param_f7;
        a.f[7] = param_f8;
        a.r[0] = param_1;
        a.r[1] = param_2;
        a.r[4] = param_r7;
        a.r[5] = param_r8;
        a.r[6] = param_r9;
        a.r[7] = param_r10;
        f1 = tc_callf(0x802a5c1cu, &a);
        r3 = (u32)rd8(r31 + 1u) | 2u;
        wr8(r31 + 1u, (u8)r3);
        if ((r3 & 4u) != 0u) {
            wr8(r31, 4u);
            a.r[0] = (u32)rd16(r31 + 4u);
            a.r[1] = 0x100u;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            (void)tc_call(rd32(r31 + 0x20u), &a);
        }
    }
    return;
}

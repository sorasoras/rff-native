#include "tc_rt.h"

u32 fn_8029eee8(u32 param_1, u32 param_2)
{
    u32 ctr = 0, fl_ = 0, r3 = 0, r4 = 0, r6 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r3 = param_1;
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
        if ((u32)rd16(param_2) != 0u) {
            a.r[0] = (u32)rd16(r31 + 4u);
            a.r[1] = 0x101u;
            a.r[2] = 0x80540120u;
            a.r[3] = r6;
            a.f[0] = 0.0;
            f1 = tc_callf(rd32(r31 + 0x20u), &a);
            r30 = (u32)rd16(r31 + 0x10u);
            while (rd32(r31 + 0x14u) != 0u) {
                a.r[0] = r31 + 0x14u;
                r3 = tc_call(0x8028a9f8u, &a);
                a.r[0] = r3;
                f1 = tc_callf(0x8028a35cu, &a);
            }
            wr8(r31, 0u);
            r4 = 0x805401ccu;
            r3 = 0u;
            ctr = 2u;
            do {
                if ((u32)rd8(r4) != 0u && (u32)rd16(r4 + 0x10u) == r30) {
                    return r3;
                }
                r3 = r3 + 1u;
                if ((u32)rd8(r4 + 0x60u) != 0u && (u32)rd16(r4 + 0x70u) == r30) {
                    return r3;
                }
                r3 = r3 + 1u;
                if ((u32)rd8(r4 + 0xc0u) != 0u && (u32)rd16(r4 + 0xd0u) == r30) {
                    return r3;
                }
                r3 = r3 + 1u;
                if ((u32)rd8(r4 + 0x120u) != 0u && (u32)rd16(r4 + 0x130u) == r30) {
                    return r3;
                }
                r3 = r3 + 1u;
                r4 = r4 + 0x180u;
                ctr = ctr - 1u;
            } while (ctr != 0u);
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = r30;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            r3 = tc_call(0x802a5710u, &a);
        } else {
            r3 = (u32)rd8(r31 + 1u) | 4u;
            wr8(r31 + 1u, (u8)r3);
            if ((r3 & 2u) != 0u) {
                wr8(r31, 4u);
                a.r[0] = (u32)rd16(r31 + 4u);
                a.r[1] = 0x100u;
                a.r[2] = 0x80540120u;
                a.r[3] = r6;
                a.f[0] = 0.0;
                r3 = tc_call(rd32(r31 + 0x20u), &a);
            }
        }
    }
    return r3;
}

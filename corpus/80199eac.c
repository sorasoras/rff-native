#include "tc_rt.h"

void fn_80199eac(s32 param_1)
{
    u32 c1gt = 0, c1lt = 0, ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0;
    u32 r11 = 0, r12 = 0, sw_ = 0;
    f64 f0 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0, f12 = 0.0;
    f64 f13 = 0.0;
    TcArgs a = {0};
    r5 = (u32)rd8((u32)param_1 + 0x25u);
    wr8((u32)param_1 + 0x464u, 6u);
    r0 = (u32)(s8)r5;
    c1gt = (s32)r0 > 20;
    if (!c1gt) {
        if ((s32)r0 <= 10 || c1gt) {
            r0 = (u32)(s8)r5;
            if ((s32)r0 <= 5 || (s32)r0 > 10) {
                r0 = (u32)(s8)r5;
                if ((s32)r0 <= 0 || (s32)r0 > 5) {
                    r0 = (u32)(s8)r5;
                    c1lt = (s32)r0 < 0;
                    if (r0 != 0u) {
                        if ((s32)r0 <= -10 || !c1lt) {
                            wr8((u32)param_1 + 0x464u, 0u);
                        } else {
                            wr8((u32)param_1 + 0x464u, 1u);
                        }
                    } else {
                        wr8((u32)param_1 + 0x464u, 2u);
                    }
                } else {
                    wr8((u32)param_1 + 0x464u, 3u);
                }
            } else {
                wr8((u32)param_1 + 0x464u, 4u);
            }
        } else {
            wr8((u32)param_1 + 0x464u, 5u);
        }
    } else {
        wr8((u32)param_1 + 0x464u, 6u);
    }
    if ((u32)(s8)rd8((u32)param_1 + 0x26u) == 0u) {
        r0 = 6u;
        r4 = (u32)rd8((u32)param_1 + 0x464u) + 3u;
        if ((s32)r4 <= 6) {
            r0 = r4;
        }
        wr8((u32)param_1 + 0x464u, (u8)r0);
    }
    r0 = (u32)rd8((u32)param_1 + 0x464u);
    if (r0 > 6u) {
        return;
    }
    r0 = (r0 << 2u) & 0xfffffffcu;
    r4 = rd32(r0 - 0x7fc8f3d8u);
    sw_ = r4;
    switch (sw_) {
    case 0x8019a058u:
        wr8((u32)param_1 + 0x39u, 0x3du);
        wr8((u32)param_1 + 0x3au, 0xau);
        wr8((u32)param_1 + 0x38u, 0x1du);
        return;
    case 0x8019a038u:
        wr8((u32)param_1 + 0x39u, 0x33u);
        wr8((u32)param_1 + 0x3au, 8u);
        wr8((u32)param_1 + 0x38u, 0x29u);
        return;
    case 0x8019a018u:
        wr8((u32)param_1 + 0x39u, 0x22u);
        wr8((u32)param_1 + 0x3au, 6u);
        wr8((u32)param_1 + 0x38u, 0x3cu);
        return;
    case 0x80199ff8u:
        wr8((u32)param_1 + 0x39u, 0x14u);
        wr8((u32)param_1 + 0x3au, 3u);
        wr8((u32)param_1 + 0x38u, 0x4du);
        return;
    case 0x80199fd8u:
        wr8((u32)param_1 + 0x39u, 0xdu);
        wr8((u32)param_1 + 0x3au, 1u);
        wr8((u32)param_1 + 0x38u, 0x56u);
        return;
    case 0x80199fbcu:
        wr8((u32)param_1 + 0x39u, 6u);
        wr8((u32)param_1 + 0x3au, 0u);
        wr8((u32)param_1 + 0x38u, 0x5eu);
        return;
    case 0x80199fa4u:
        wr8((u32)param_1 + 0x39u, 0u);
        wr8((u32)param_1 + 0x3au, 0u);
        wr8((u32)param_1 + 0x38u, 0x64u);
        return;
    default:
        a.r[0] = (u32)param_1;
        a.r[1] = r4;
        a.r[2] = r5;
        a.f[0] = 0.0;
        r3 = tc_call(sw_, &a);
        r0 = 0u;
        r4 = tc_lastr4();
        r5 = 0u;
        r6 = 0u;
        r7 = 0u;
        r8 = 0u;
        r9 = 0u;
        r10 = 0u;
        r11 = 0u;
        r12 = 0u;
        f0 = 0.0;
        f2 = 0.0;
        f3 = 0.0;
        f4 = 0.0;
        f5 = 0.0;
        f6 = 0.0;
        f7 = 0.0;
        f8 = 0.0;
        f9 = 0.0;
        f10 = 0.0;
        f11 = 0.0;
        f12 = 0.0;
        f13 = 0.0;
        ctr = 0u;
        return;
    }
}

#include "tc_rt.h"

s32 fn_80251f58(u32 param_1, u32 param_2, s32 param_3, s32 param_4, s32 param_5)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0;
    u32 sw_ = 0;
    f64 f0 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0, f12 = 0.0;
    f64 f13 = 0.0;
    TcArgs a = {0};
    r3 = param_1;
    r4 = param_2;
    if ((u32)param_3 > 0x3cu) {
        r0 = 0u;
        r10 = 0u;
    } else {
        r8 = rd32((((u32)param_3 << 2u) & 0xfffffffcu) - 0x7fc71bd0u);
        sw_ = r8;
        switch (sw_) {
        case 0x80251f78u:
            r10 = 3u;
            r0 = 3u;
            break;
        case 0x80251f84u:
            r10 = 3u;
            r0 = 2u;
            break;
        case 0x80251f90u:
            r10 = 2u;
            r0 = 2u;
            break;
        case 0x80251f9cu:
            r0 = 0u;
            r10 = 0u;
            break;
        default:
            a.r[0] = param_1;
            a.r[1] = param_2;
            a.r[2] = (u32)param_3;
            a.r[3] = (u32)param_4;
            a.r[4] = (u32)param_5;
            a.r[5] = r8;
            a.r[6] = 0u;
            a.r[7] = 0u;
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
            return (s32)r3;
        }
    }
    if ((u32)param_3 == 6u || (u32)param_3 == 0x16u) {
        r11 = 0x40u;
    } else {
        r11 = 0x20u;
    }
    if ((u32)param_4 != 1u) {
        r5 = param_1 + (((r10 & 0x20u) != 0u) ? 0u : (1u << (r10 & 0x1fu))) - 1u;
        r5 = ((r10 & 0x20u) != 0u) ? (u32)((s32)r5 >> 31) : (u32)((s32)r5 >> (s32)(r10 & 0x1fu));
        r3 = param_2 + (((r0 & 0x20u) != 0u) ? 0u : (1u << (r0 & 0x1fu))) - 1u;
        r0 = ((r0 & 0x20u) != 0u) ? (u32)((s32)r3 >> 31) : (u32)((s32)r3 >> (s32)(r0 & 0x1fu));
        r12 = r11 * r5 * r0;
    } else {
        r12 = 0u;
        r8 = ((r10 & 0x20u) != 0u) ? 0u : (1u << (r10 & 0x1fu));
        r9 = ((r0 & 0x20u) != 0u) ? 0u : (1u << (r0 & 0x1fu));
        ctr = (u32)param_5;
        if ((u32)param_5 > 0u) {
            do {
                r6 = r3 + r8 - 1u;
                r6 = ((r10 & 0x20u) != 0u) ? (u32)((s32)r6 >> 31) : (u32)((s32)r6 >> (s32)(r10 & 0x1fu));
                r5 = r4 + r9 - 1u;
                r6 = r11 * r6;
                r5 = ((r0 & 0x20u) != 0u) ? (u32)((s32)r5 >> 31) : (u32)((s32)r5 >> (s32)(r0 & 0x1fu));
                r5 = r6 * r5;
                r12 = r12 + r5;
                if (r3 == 1u && r4 == 1u) {
                    return (s32)r12;
                }
                r5 = 1u;
                if (r3 > 1u) {
                    r5 = (r3 >> 1u) & 0x7fffu;
                }
                r3 = r5 & 0xffffu;
                r5 = 1u;
                if (r4 > 1u) {
                    r5 = (r4 >> 1u) & 0x7fffu;
                }
                r4 = r5 & 0xffffu;
                ctr = ctr - 1u;
            } while (ctr != 0u);
        }
    }
    return (s32)r12;
}

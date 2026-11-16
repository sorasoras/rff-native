#include "tc_rt.h"

void fn_8025207c(s32 param_1, s32 param_2, s32 param_3, u32 param_4, u32 param_5, u32 param_6)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0;
    u32 sw_ = 0;
    f64 f0 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0, f12 = 0.0;
    f64 f13 = 0.0;
    TcArgs a = {0};
    r4 = (u32)param_2;
    r5 = (u32)param_3;
    if ((u32)param_1 > 0x3cu) {
        r12 = 0u;
        r11 = 0u;
    } else {
        r9 = rd32((((u32)param_1 << 2u) & 0xfffffffcu) - 0x7fc71adcu);
        sw_ = r9;
        switch (sw_) {
        case 0x8025209cu:
            r11 = 3u;
            r12 = 3u;
            break;
        case 0x802520a8u:
            r11 = 3u;
            r12 = 2u;
            break;
        case 0x802520b4u:
            r11 = 2u;
            r12 = 2u;
            break;
        case 0x802520c0u:
            r12 = 0u;
            r11 = 0u;
            break;
        default:
            a.r[0] = (u32)param_1;
            a.r[1] = (u32)param_2;
            a.r[2] = (u32)param_3;
            a.r[3] = param_4;
            a.r[4] = param_5;
            a.r[5] = param_6;
            a.r[6] = r9;
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
            return;
        }
    }
    if ((u32)param_2 == 0u) {
        r4 = 1u;
    }
    if ((u32)param_3 == 0u) {
        r5 = 1u;
    }
    r9 = 0u;
    r4 = r4 + (((r11 & 0x20u) != 0u) ? 0u : (1u << (r11 & 0x1fu)));
    r4 = r4 - 1u;
    wr32(param_4, ((r11 & 0x20u) != 0u) ? (u32)((s32)r4 >> 31) : (u32)((s32)r4 >> (s32)(r11 & 0x1fu)));
    r0 = r5 + (((r12 & 0x20u) != 0u) ? 0u : (1u << (r12 & 0x1fu))) - 1u;
    r0 = ((r12 & 0x20u) != 0u) ? (u32)((s32)r0 >> 31) : (u32)((s32)r0 >> (s32)(r12 & 0x1fu));
    wr32(param_5, r0);
    if ((u32)param_1 == 6u || (u32)param_1 == 0x16u) {
        r9 = 1u;
    }
    wr32(param_6, ((((0u - r9) | r9) >> 0x1fu) & 1u) + 1u);
    return;
}

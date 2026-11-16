#include "tc_rt.h"

u32 fn_800839a4(s32 param_1, s32 param_2, s32 param_3, u32 param_4)
{
    u32 c0lt = 0, ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0;
    u32 r12 = 0, sw_ = 0;
    u64 t0 = 0;
    f64 f0 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0, f12 = 0.0;
    f64 f13 = 0.0;
    TcArgs a = {0};
    r3 = (u32)param_1;
    r7 = (param_4 >> 0x1fu) & 1u;
    r0 = ((param_4 << 0x1du) & 0xe0000000u) - r7;
    r9 = 0u;
    r0 = (r0 << 3u) | (r0 >> 0x1du);
    t0 = (u64)(u32)((s32)param_4 >> 3) + (u64)(((s32)param_4 < 0) && ((param_4 & 7u) != 0u));
    r0 = r0 + r7;
    if ((u32)param_2 != 0u) {
        if ((u32)param_2 != 1u) {
            if ((u32)param_2 != 2u) {
                if ((u32)param_2 == 3u) {
                    c0lt = param_3 < 1;
                    if ((u32)param_3 == 1u) {
                        r9 = (((r0 & 0x20u) != 0u) ? 0u : (1u << (r0 & 0x1fu))) & 0xffu & (u32)rd8((u32)param_1 + (u32)t0 + 0x6e4u);
                    } else if (c0lt && param_3 >= 0) {
                        r9 = (((r0 & 0x20u) != 0u) ? 0u : (1u << (r0 & 0x1fu))) & 0xffu & (u32)rd8((u32)param_1 + (u32)t0 + 0x6d4u);
                    }
                }
            } else {
                c0lt = param_3 < 3;
                if ((u32)param_3 == 3u) {
                    r9 = (((r0 & 0x20u) != 0u) ? 0u : (1u << (r0 & 0x1fu))) & 0xffu & (u32)rd8((u32)param_1 + (u32)t0 + 0x69cu);
                } else if (!c0lt) {
                    c0lt = param_3 < 5;
                    if ((u32)param_3 == 5u) {
                        r9 = (((r0 & 0x20u) != 0u) ? 0u : (1u << (r0 & 0x1fu))) & 0xffu & (u32)rd8((u32)param_1 + (u32)t0 + 0x6c4u);
                    } else if (c0lt) {
                        r9 = (((r0 & 0x20u) != 0u) ? 0u : (1u << (r0 & 0x1fu))) & 0xffu & (u32)rd8((u32)param_1 + (u32)t0 + 0x6bcu);
                    }
                } else {
                    c0lt = param_3 < 1;
                    if ((u32)param_3 == 1u) {
                        r9 = (((r0 & 0x20u) != 0u) ? 0u : (1u << (r0 & 0x1fu))) & 0xffu & (u32)rd8((u32)param_1 + (u32)t0 + 0x674u);
                    } else if (!c0lt) {
                        r9 = (((r0 & 0x20u) != 0u) ? 0u : (1u << (r0 & 0x1fu))) & 0xffu & (u32)rd8((u32)param_1 + (u32)t0 + 0x684u);
                    } else if (param_3 >= 0) {
                        r9 = (((r0 & 0x20u) != 0u) ? 0u : (1u << (r0 & 0x1fu))) & 0xffu & (u32)rd8((u32)param_1 + (u32)t0 + 0x654u);
                    }
                }
            }
        } else if ((u32)param_3 <= 9u) {
            r4 = ((u32)param_3 << 2u) & 0xfffffffcu;
            r6 = rd32(r4 - 0x7fcaee6cu);
            sw_ = r6;
            switch (sw_) {
            case 0x80083ad8u:
                r9 = (((r0 & 0x20u) != 0u) ? 0u : (1u << (r0 & 0x1fu))) & 0xffu & (u32)rd8((u32)param_1 + (u32)t0 + 0x564u);
                break;
            case 0x80083af4u:
                r9 = (((r0 & 0x20u) != 0u) ? 0u : (1u << (r0 & 0x1fu))) & 0xffu & (u32)rd8((u32)param_1 + (u32)t0 + 0x57cu);
                break;
            case 0x80083b10u:
                r9 = (((r0 & 0x20u) != 0u) ? 0u : (1u << (r0 & 0x1fu))) & 0xffu & (u32)rd8((u32)param_1 + (u32)t0 + 0x594u);
                break;
            case 0x80083b2cu:
                r9 = (((r0 & 0x20u) != 0u) ? 0u : (1u << (r0 & 0x1fu))) & 0xffu & (u32)rd8((u32)param_1 + (u32)t0 + 0x5acu);
                break;
            case 0x80083b48u:
                r9 = (((r0 & 0x20u) != 0u) ? 0u : (1u << (r0 & 0x1fu))) & 0xffu & (u32)rd8((u32)param_1 + (u32)t0 + 0x5c4u);
                break;
            case 0x80083b64u:
                r9 = (((r0 & 0x20u) != 0u) ? 0u : (1u << (r0 & 0x1fu))) & 0xffu & (u32)rd8((u32)param_1 + (u32)t0 + 0x5dcu);
                break;
            case 0x80083b80u:
                r9 = (((r0 & 0x20u) != 0u) ? 0u : (1u << (r0 & 0x1fu))) & 0xffu & (u32)rd8((u32)param_1 + (u32)t0 + 0x5f4u);
                break;
            case 0x80083b9cu:
                r9 = (((r0 & 0x20u) != 0u) ? 0u : (1u << (r0 & 0x1fu))) & 0xffu & (u32)rd8((u32)param_1 + (u32)t0 + 0x60cu);
                break;
            case 0x80083bb8u:
                r9 = (((r0 & 0x20u) != 0u) ? 0u : (1u << (r0 & 0x1fu))) & 0xffu & (u32)rd8((u32)param_1 + (u32)t0 + 0x624u);
                break;
            case 0x80083bd4u:
                r9 = (((r0 & 0x20u) != 0u) ? 0u : (1u << (r0 & 0x1fu))) & 0xffu & (u32)rd8((u32)param_1 + (u32)t0 + 0x63cu);
                break;
            default:
                a.r[0] = (u32)param_1;
                a.r[1] = r4;
                a.r[2] = (u32)param_3;
                a.r[3] = r6;
                a.r[4] = r7;
                a.r[5] = (u32)t0;
                a.r[6] = 0u;
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
                return r3;
            }
        }
    } else if ((u32)param_3 <= 6u) {
        r4 = ((u32)param_3 << 2u) & 0xfffffffcu;
        r6 = rd32(r4 - 0x7fcaee44u);
        sw_ = r6;
        switch (sw_) {
        case 0x800839ecu:
            r9 = (((r0 & 0x20u) != 0u) ? 0u : (1u << (r0 & 0x1fu))) & 0xffu & (u32)rd8((u32)param_1 + (u32)t0 + 0x46cu);
            break;
        case 0x80083a08u:
            r9 = (((r0 & 0x20u) != 0u) ? 0u : (1u << (r0 & 0x1fu))) & 0xffu & (u32)rd8((u32)param_1 + (u32)t0 + 0x49cu);
            break;
        case 0x80083a24u:
            r9 = (((r0 & 0x20u) != 0u) ? 0u : (1u << (r0 & 0x1fu))) & 0xffu & (u32)rd8((u32)param_1 + (u32)t0 + 0x4d4u);
            break;
        case 0x80083a40u:
            r9 = (((r0 & 0x20u) != 0u) ? 0u : (1u << (r0 & 0x1fu))) & 0xffu & (u32)rd8((u32)param_1 + (u32)t0 + 0x504u);
            break;
        case 0x80083a5cu:
            r9 = (((r0 & 0x20u) != 0u) ? 0u : (1u << (r0 & 0x1fu))) & 0xffu & (u32)rd8((u32)param_1 + (u32)t0 + 0x52cu);
            break;
        case 0x80083a78u:
            r9 = (((r0 & 0x20u) != 0u) ? 0u : (1u << (r0 & 0x1fu))) & 0xffu & (u32)rd8((u32)param_1 + (u32)t0 + 0x544u);
            break;
        case 0x80083a94u:
            r9 = (((r0 & 0x20u) != 0u) ? 0u : (1u << (r0 & 0x1fu))) & 0xffu & (u32)rd8((u32)param_1 + (u32)t0 + 0x55cu);
            break;
        default:
            a.r[0] = (u32)param_1;
            a.r[1] = r4;
            a.r[2] = (u32)param_3;
            a.r[3] = r6;
            a.r[4] = r7;
            a.r[5] = (u32)t0;
            a.r[6] = 0u;
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
            return r3;
        }
    }
    return r9;
}

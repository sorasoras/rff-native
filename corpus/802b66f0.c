#include "tc_rt.h"

u32 fn_802b66f0(u32 param_1, u32 param_2, u32 param_3)
{
    u32 c0eq = 0, ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0;
    u32 r12 = 0, sw_ = 0;
    f64 f0 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0, f12 = 0.0;
    f64 f13 = 0.0;
    TcArgs a = {0};
    r8 = param_1 + 1u;
    wr16(param_3, 0u);
    r3 = (u32)rd8(param_1);
    r6 = r3 & 7u;
    if ((u32)((s32)r3 >> 3) == 6u) {
        if (r6 <= 7u) {
            r3 = rd32(((r6 << 2u) & 0xfffffffcu) - 0x7fc68090u);
            sw_ = r3;
            switch (sw_) {
            case 0x802b67a8u:
                return 0u;
            case 0x802b6738u:
                r0 = 2u;
                break;
            case 0x802b6740u:
                r0 = 4u;
                break;
            case 0x802b6748u:
                r0 = 0x10u;
                break;
            case 0x802b6750u:
                r0 = (u32)rd8(r8);
                r8 = r8 + 1u;
                break;
            case 0x802b675cu:
                r3 = (u32)rd8(r8);
                r0 = (u32)rd8(r8 + 1u);
                r8 = r8 + 2u;
                r3 = (r3 << 8u) & 0xffffff00u;
                r0 = r3 + r0;
                r0 = r0 & 0xffffu;
                break;
            case 0x802b6778u:
                r7 = ((u32)rd8(r8) << 0x18u) & 0xff000000u;
                r6 = (u32)rd8(r8 + 3u);
                r3 = ((u32)rd8(r8 + 1u) << 0x10u) & 0xffff0000u;
                r0 = ((u32)rd8(r8 + 2u) << 8u) & 0xffffff00u;
                r8 = r8 + 4u;
                r3 = r7 + r3;
                r0 = r6 + r0;
                r0 = r3 + r0;
                break;
            default:
                a.r[0] = r3;
                a.r[1] = param_2;
                a.r[2] = param_3;
                a.r[3] = r6;
                a.r[4] = 0u;
                a.r[5] = r8;
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
            if (r0 < param_2) {
                r0 = r8 + r0;
                c0eq = r8 == r0;
                if (r8 >= r0) {
                    if (c0eq) {
                        return r8;
                    }
                    return 0u;
                }
                r7 = (u32)rd8(r8);
                r8 = r8 + 1u;
                r9 = r7 & 7u;
                if ((u32)((s32)r7 >> 3) == 3u) {
                    if (r9 > 7u) {
                        return 0u;
                    }
                    r6 = (r9 << 2u) & 0xfffffffcu;
                    r7 = rd32(r6 - 0x7fc680b0u);
                    a.r[0] = 0x80000000u;
                    a.r[1] = 0x80390000u;
                    a.r[2] = param_3;
                    a.r[3] = r6;
                    a.r[4] = r7;
                    a.r[5] = r8;
                    a.r[6] = r9;
                    a.f[0] = 0.0;
                    r3 = tc_call(r7, &a);
                    return r3;
                }
                return 0u;
            }
            return 0u;
        }
        return 0u;
    }
    return 0u;
}

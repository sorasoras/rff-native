#include "tc_rt.h"

void fn_801e6814(u32 param_1, u32 param_2, s32 param_3)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0;
    u32 sw_ = 0;
    f64 f0 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0, f12 = 0.0;
    f64 f13 = 0.0;
    TcArgs a = {0};
    (void)param_1;
    r3 = 0xffffffffu;
    r9 = 0u;
    for (;;) {
        if ((param_2 & (((r9 & 0x20u) != 0u) ? 0u : (1u << (r9 & 0x1fu)))) != 0u) {
            r0 = r9 + 1u;
            if (r0 <= 0xcu) {
                r0 = (r0 << 2u) & 0xfffffffcu;
                r7 = rd32(r0 - 0x7fc8a5d0u);
                sw_ = r7;
                switch (sw_) {
                case 0x801e68e8u:
                    break;
                case 0x801e6864u:
                    r3 = 0x2731u;
                    if ((u32)param_3 == 0u) break;
                    r3 = 0x2b1fu;
                    break;
                case 0x801e6878u:
                    r3 = 0x2732u;
                    if ((u32)param_3 == 0u) break;
                    r3 = 0x2b20u;
                    break;
                case 0x801e688cu:
                    r3 = 0x2733u;
                    break;
                case 0x801e6850u:
                    r3 = 0x2730u;
                    if ((u32)param_3 == 0u) break;
                    r3 = 0x2b1eu;
                    break;
                case 0x801e6894u:
                    r3 = 0x2734u;
                    if ((u32)param_3 == 0u) break;
                    r3 = 0x2b22u;
                    break;
                case 0x801e68b0u:
                    r3 = 0x2b21u;
                    break;
                case 0x801e68a8u:
                    r3 = 0x2735u;
                    break;
                case 0x801e68b8u:
                    r3 = 0x2736u;
                    break;
                case 0x801e68c0u:
                    r3 = 0x2737u;
                    break;
                case 0x801e68c8u:
                    r3 = 0x2738u;
                    break;
                case 0x801e68d0u:
                    r3 = 0x272fu;
                    break;
                case 0x801e68d8u:
                    r3 = 0x2730u;
                    if ((u32)param_3 == 0u) break;
                    r3 = 0x2b1eu;
                    break;
                default:
                    a.r[0] = r3;
                    a.r[1] = param_2;
                    a.r[2] = (u32)param_3;
                    a.r[3] = 0x80370000u;
                    a.r[4] = r7;
                    a.r[5] = 1u;
                    a.r[6] = r9;
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
            if (r3 != 0xffffffffu) break;
        }
        r9 = r9 + 1u;
        if (r9 >= 0xcu) {
            return;
        }
    }
    return;
}

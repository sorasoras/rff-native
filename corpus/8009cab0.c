#include "tc_rt.h"

void fn_8009cab0(s32 param_1, u32 param_2, u32 param_3, s32 param_4)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0;
    u32 sw_ = 0;
    f64 f0 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0, f12 = 0.0;
    f64 f13 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    r0 = (u32)rd8(param_3);
    if (r0 <= 0x10u) {
        r0 = (r0 << 2u) & 0xfffffffcu;
        r7 = rd32(r0 - 0x7fcae78cu);
        sw_ = r7;
        switch (sw_) {
        case 0x8009cc80u:
            break;
        case 0x8009caf8u:
            wr8(param_2, rd8(param_3));
            wr32(param_2 + 4u, rd32(param_3 + 4u));
            return;
        case 0x8009cb0cu:
            wr8(param_2, 1u);
            a.r[0] = rd32((u32)param_1 + 0xcu);
            a.r[1] = 0x817fdfe0u;
            a.r[2] = 0x817fdfdcu;
            a.r[3] = 0x817fdfd8u;
            a.r[4] = rd32(param_3 + 4u);
            r3 = tc_call(0x8009bfd4u, &a);
            if ((u32)(s8)r3 != 0u) {
                a.r[0] = rd32((u32)param_1 + 0xcu);
                a.r[1] = param_2 + 4u;
                a.r[2] = rd32(0x817fdfe0u);
                a.r[3] = rd32(0x817fdfdcu);
                r3 = tc_call(0x8009c36cu, &a);
                if ((u32)(s8)r3 != 0u) {
                    if ((u32)(s8)rd8(0x817fdfd8u) == 0u) {
                        return;
                    }
                    r3 = rd32(param_2 + 4u);
                    r4 = rd32(0x817fdfdcu) - 1u;
                    if ((r3 & (((r4 & 0x20u) != 0u) ? 0u : (1u << (r4 & 0x1fu)))) == 0u) {
                        return;
                    }
                    wr32(param_2 + 4u, r3 | (((r4 & 0x20u) != 0u) ? 0u : (0xffffffffu << (r4 & 0x1fu))));
                    return;
                }
            }
            wr32(param_2 + 4u, 0u);
            return;
        case 0x8009cb94u:
            wr8(param_2, 1u);
            wr32(param_2 + 4u, rd32((u32)param_4 + (((0u - (rd32(param_3 + 4u) + 1u)) << 2u) & 0xfffffffcu)));
            return;
        case 0x8009cbb8u:
            wr8(param_2, 1u);
            wr32(param_2 + 4u, rd32((u32)param_1 + 0x28u));
            return;
        case 0x8009cbccu:
            wr8(param_2, 1u);
            wr32(param_2 + 4u, rd32((u32)param_1 + 0x2cu));
            return;
        case 0x8009cbe0u:
            wr8(param_2, 1u);
            wr32(param_2 + 4u, rd32((u32)param_1 + 0x30u));
            return;
        case 0x8009cbf4u:
            wr8(param_2, 1u);
            wr32(param_2 + 4u, rd32((u32)param_1 + 0x34u));
            return;
        case 0x8009cc08u:
            wr8(param_2, 1u);
            wr32(param_2 + 4u, rd32((u32)param_1 + 0x38u));
            return;
        case 0x8009cc1cu:
            wr8(param_2, 1u);
            wr32(param_2 + 4u, rd32((u32)param_1 + 0x3cu));
            return;
        case 0x8009cc30u:
            wr8(param_2, 1u);
            wr32(param_2 + 4u, rd32((u32)param_1 + 0x40u));
            return;
        case 0x8009cc44u:
            wr8(param_2, 1u);
            wr32(param_2 + 4u, rd32((u32)param_1 + 0x44u));
            return;
        case 0x8009cc58u:
            wr8(param_2, 1u);
            wr32(param_2 + 4u, rd32((u32)param_1 + 0x48u));
            return;
        case 0x8009cc6cu:
            wr8(param_2, 1u);
            wr32(param_2 + 4u, rd32((u32)param_1 + 0x4cu));
            return;
        default:
            a.r[0] = (u32)param_1;
            a.r[1] = param_2;
            a.r[2] = param_3;
            a.r[3] = (u32)param_4;
            a.r[4] = r7;
            a.r[5] = param_3;
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
    wr8(param_2, 1u);
    wr32(param_2 + 4u, 0u);
    return;
}

#include "tc_rt.h"

void fn_801a17e0(s32 param_1)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0;
    u32 sw_ = 0;
    f64 f0 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0, f12 = 0.0;
    f64 f13 = 0.0;
    TcArgs a = {0};
    r0 = rd32((u32)param_1 + 0xcfcu);
    if (r0 <= 0x10u) {
        r0 = (r0 << 2u) & 0xfffffffcu;
        r4 = rd32(r0 - 0x7fc8ee88u);
        sw_ = r4;
        switch (sw_) {
        case 0x801a1888u:
            break;
        case 0x801a1818u:
            a.r[0] = (u32)param_1;
            (void)tc_call(0x8007fb3cu, &a);
            wr32((u32)param_1 + 0x2b0u, 1u);
            break;
        case 0x801a1828u:
            if (rd32((u32)param_1 + 0xd04u) != 0u) break;
            a.r[0] = (u32)param_1;
            (void)tc_call(0x801a2f64u, &a);
            wr32((u32)param_1 + 0xd04u, 1u);
            break;
        case 0x801a186cu:
            r0 = rd32((u32)param_1 + 0x9cu);
            wr32((u32)param_1 + 0x2b0u, 1u);
            r0 = r0 & 0xfbffffffu;
            wr32((u32)param_1 + 0x260u, 6u);
            wr32((u32)param_1 + 0x9cu, r0);
            break;
        case 0x801a1844u:
            if (rd32((u32)param_1 + 0xd04u) == 1u) {
                a.r[0] = (u32)param_1;
                (void)tc_call(0x801a2f64u, &a);
                wr32((u32)param_1 + 0xd04u, 6u);
            }
            wr32((u32)param_1 + 0x9cu, rd32((u32)param_1 + 0x9cu) & 0xfbffffffu);
            break;
        default:
            a.r[0] = (u32)param_1;
            a.r[1] = r4;
            a.r[2] = 0u;
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
    return;
}

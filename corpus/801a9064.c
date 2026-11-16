#include "tc_rt.h"

void fn_801a9064(s32 param_1, u32 param_2, u32 param_r6)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0;
    u32 sw_ = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0;
    f64 f12 = 0.0, f13 = 0.0;
    TcArgs a = {0};
    r6 = param_r6;
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    if (param_2 <= 0xau) {
        r5 = rd32(((param_2 << 2u) & 0xfffffffcu) - 0x7fc8e5d0u);
        sw_ = r5;
        switch (sw_) {
        case 0x801a9260u:
            break;
        case 0x801a9098u:
            a.r[0] = (u32)param_1;
            (void)tc_call(0x801a9e18u, &a);
            break;
        case 0x801a90a0u:
            a.r[0] = (u32)param_1;
            (void)tc_call(0x801a9e2cu, &a);
            break;
        case 0x801a90a8u:
            if (rd32((u32)param_1 + 0x290u) != 0xdu) break;
            r4 = rd32((u32)param_1 + 0xa48u);
            if (r4 != 0u) {
                r5 = (u32)rd8(r4 + 0x79u);
            } else {
                r5 = 0u;
            }
            wr16(0x817fdfecu, 0x2e8u);
            wr8(0x817fdfeeu, 1u);
            wr8(0x817fdfefu, 1u);
            wr16(0x817fdfecu, (u16)rd32(rd32((u32)param_1 + 0xa48u) + 0x74u));
            wr8(0x817fdfeeu, 1u);
            r4 = rd32((u32)param_1 + 0xa48u);
            wr8(0x817fdfefu, rd8(r4 + 0x78u));
            if (r5 <= 1u) {
                r3 = rd32((u32)param_1 + 0xa48u);
                a.r[0] = r3;
                a.r[1] = r4;
                a.r[2] = r5;
                a.r[3] = param_r6;
                a.f[0] = 0.0;
                f1 = tc_callf(rd32(rd32(r3) + 0x18u), &a);
                r5 = 0u;
                r6 = 0u;
                r3 = rd32((u32)param_1 + 0xa48u);
                if (r3 != 0u) {
                    a.r[0] = r3;
                    a.r[1] = 1u;
                    a.r[2] = 0u;
                    a.r[3] = 0u;
                    a.f[0] = f1;
                    (void)tc_call(rd32(rd32(r3) + 8u), &a);
                    r5 = 0u;
                    r6 = 0u;
                }
                wr32((u32)param_1 + 0xa48u, 0u);
            } else {
                r3 = rd32((u32)param_1 + 0xa48u);
                if (r3 != 0u) {
                    wr8(r3 + 0x79u, (u8)(r5 - 1u));
                }
            }
            a.r[0] = (u32)param_1;
            a.r[1] = 0x817fdfecu;
            a.r[2] = r5;
            a.r[3] = r6;
            (void)tc_call(0x800c57a4u, &a);
            break;
        case 0x801a9168u:
            if (rd32((u32)param_1 + 0x290u) != 0xeu) break;
            r4 = rd32((u32)param_1 + 0xa48u);
            if (r4 != 0u) {
                r5 = (u32)rd8(r4 + 0x79u);
            } else {
                r5 = 0u;
            }
            wr16(0x817fdfe8u, 0x2e8u);
            wr8(0x817fdfeau, 1u);
            wr8(0x817fdfebu, 1u);
            wr16(0x817fdfe8u, (u16)rd32(rd32((u32)param_1 + 0xa48u) + 0x74u));
            wr8(0x817fdfeau, 1u);
            r4 = rd32((u32)param_1 + 0xa48u);
            wr8(0x817fdfebu, rd8(r4 + 0x78u));
            if (r5 <= 1u) {
                r3 = rd32((u32)param_1 + 0xa48u);
                a.r[0] = r3;
                a.r[1] = r4;
                a.r[2] = r5;
                a.r[3] = param_r6;
                a.f[0] = 0.0;
                f1 = tc_callf(rd32(rd32(r3) + 0x18u), &a);
                r5 = 0u;
                r6 = 0u;
                r3 = rd32((u32)param_1 + 0xa48u);
                if (r3 != 0u) {
                    a.r[0] = r3;
                    a.r[1] = 1u;
                    a.r[2] = 0u;
                    a.r[3] = 0u;
                    a.f[0] = f1;
                    (void)tc_call(rd32(rd32(r3) + 8u), &a);
                    r5 = 0u;
                    r6 = 0u;
                }
                wr32((u32)param_1 + 0xa48u, 0u);
            } else {
                r3 = rd32((u32)param_1 + 0xa48u);
                if (r3 != 0u) {
                    wr8(r3 + 0x79u, (u8)(r5 - 1u));
                }
            }
            a.r[0] = (u32)param_1;
            a.r[1] = 0x817fdfe8u;
            a.r[2] = r5;
            a.r[3] = r6;
            (void)tc_call(0x800c57a4u, &a);
            break;
        case 0x801a9228u:
            a.r[0] = (u32)param_1;
            (void)tc_call(0x801a9a48u, &a);
            break;
        case 0x801a9230u:
            a.r[0] = (u32)param_1;
            a.r[1] = param_2;
            a.r[2] = r5;
            a.r[3] = param_r6;
            (void)tc_call(0x801a9908u, &a);
            break;
        case 0x801a9238u:
            a.r[0] = (u32)param_1;
            (void)tc_call(0x801a9808u, &a);
            break;
        case 0x801a9240u:
            a.r[0] = (u32)param_1;
            (void)tc_call(0x801a9dd4u, &a);
            break;
        case 0x801a9248u:
            a.r[0] = (u32)param_1;
            (void)tc_call(0x801a9440u, &a);
            break;
        case 0x801a9250u:
            if (rd32((u32)param_1 + 0x290u) != 0x14u) break;
            a.r[0] = (u32)param_1;
            (void)tc_call(0x801a9274u, &a);
            break;
        default:
            a.r[0] = (u32)param_1;
            a.r[1] = param_2;
            a.r[2] = r5;
            a.r[3] = param_r6;
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

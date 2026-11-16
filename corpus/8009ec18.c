#include "tc_rt.h"

u32 fn_8009ec18(s32 param_1, u32 param_2)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0;
    u32 r28 = 0, r29 = 0, r30 = 0, sw_ = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0;
    f64 f12 = 0.0, f13 = 0.0;
    TcArgs a = {0};
    r28 = param_2;
    if (rd32((u32)param_1 + 0x58u) != 4u) {
        r30 = rd32((u32)param_1 + 0x64u) & 0xffffu;
    } else {
        r4 = rd32((u32)param_1 + 0xcu);
        r5 = rd32((u32)param_1 + 0x10u);
        a.r[0] = rd32(r5 + 0x10u) + (rd32((u32)param_1 + 0x24u) & 0xffffu);
        a.r[1] = r4;
        a.r[2] = r5;
        a.f[0] = 0.0;
        r3 = tc_call(rd32(r4), &a);
        f1 = tc_lastf();
        r30 = r3;
    }
    r3 = r30 & 0xffffu;
    r29 = 0u;
    if (r3 <= 0xfff0u) {
        a.r[0] = (u32)param_1;
        r3 = tc_call(0x8009eb2cu, &a);
        r29 = r3;
    } else {
        r4 = r3 - 0xfff1u;
        if (r4 <= 0xeu) {
            r4 = (r4 << 2u) & 0xfffffffcu;
            r3 = rd32(r4 - 0x7fcae5ccu);
            sw_ = r3;
            switch (sw_) {
            case 0x8009ed84u:
                a.r[0] = (u32)param_1;
                (void)tc_call(0x8009e904u, &a);
                break;
            case 0x8009ed78u:
                a.r[0] = (u32)param_1;
                (void)tc_call(0x8009e734u, &a);
                break;
            case 0x8009ed6cu:
                a.r[0] = (u32)param_1;
                (void)tc_call(0x8009e67cu, &a);
                break;
            case 0x8009ed5cu:
                a.r[0] = (u32)param_1;
                r3 = tc_call(0x8009e458u, &a);
                r29 = r3;
                break;
            case 0x8009ed4cu:
                a.r[0] = (u32)param_1;
                r3 = tc_call(0x8009e294u, &a);
                r29 = r3;
                break;
            case 0x8009ed3cu:
                a.r[0] = (u32)param_1;
                a.r[1] = 1u;
                (void)tc_call(0x8009e114u, &a);
                break;
            case 0x8009ed2cu:
                a.r[0] = (u32)param_1;
                a.r[1] = 0u;
                (void)tc_call(0x8009e114u, &a);
                break;
            case 0x8009ed20u:
                a.r[0] = (u32)param_1;
                (void)tc_call(0x8009e058u, &a);
                break;
            case 0x8009ed14u:
                a.r[0] = (u32)param_1;
                (void)tc_call(0x8009df9cu, &a);
                break;
            case 0x8009ed08u:
                a.r[0] = (u32)param_1;
                (void)tc_call(0x8009df40u, &a);
                break;
            case 0x8009ecfcu:
                a.r[0] = (u32)param_1;
                (void)tc_call(0x8009dec8u, &a);
                break;
            case 0x8009ecd8u:
                if (rd32((u32)param_1 + 0x58u) == 4u) {
                    r28 = 0u;
                }
                a.r[0] = (u32)param_1;
                a.r[1] = r28;
                r3 = tc_call(0x8009de38u, &a);
                r29 = r3;
                break;
            case 0x8009ecccu:
                a.r[0] = (u32)param_1;
                (void)tc_call(0x8009dda8u, &a);
                break;
            case 0x8009ecc0u:
                a.r[0] = (u32)param_1;
                (void)tc_call(0x8009dd10u, &a);
                break;
            case 0x8009ecb4u:
                a.r[0] = (u32)param_1;
                (void)tc_call(0x8009dcacu, &a);
                break;
            default:
                a.r[0] = r3;
                a.r[1] = r4;
                a.r[2] = 0u;
                a.f[0] = f1;
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
    }
    if ((u32)(s8)r29 == 0u) {
        if (rd32((u32)param_1 + 0x58u) == 3u) {
            wr32((u32)param_1 + 0x58u, 4u);
        }
    } else {
        wr32((u32)param_1 + 0x58u, 3u);
        wr32((u32)param_1 + 0x64u, r30 & 0xffffu);
    }
    return r29;
}

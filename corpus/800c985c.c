#include "tc_rt.h"

void fn_800c985c(s32 param_1)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0;
    u32 r29 = 0, r30 = 0, sw_ = 0;
    f64 f0 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0, f12 = 0.0;
    f64 f13 = 0.0;
    TcArgs a = {0};
    r30 = (u32)param_1 + 0xcu;
    r0 = rd32((u32)param_1 + 0x49cu);
    if (r0 <= 0xbu) {
        r0 = (r0 << 2u) & 0xfffffffcu;
        r4 = rd32(r0 - 0x7fcaa9d0u);
        sw_ = r4;
        switch (sw_) {
        case 0x800c9a18u:
            break;
        case 0x800c98a0u:
            r29 = rd32((u32)param_1 + 0x498u);
            r3 = tc_call(0x80097da4u, &a);
            r3 = rd32(r3 + 0x4cu);
            if (rd32(r3 + 8u) != 0u) {
                wr32((u32)param_1 + 0x498u, (ppc_cntlzw(r29) >> 5u) & 0x7ffffffu);
                if (r29 != 0u) break;
            }
            r3 = tc_call(0x80097da4u, &a);
            r3 = rd32(r3 + 0x30u);
            a.r[0] = r3;
            a.r[1] = r30;
            (void)tc_call(0x8015d268u, &a);
            break;
        case 0x800c990cu:
            r3 = tc_call(0x80097da4u, &a);
            r3 = rd32(r3 + 0x40u);
            a.r[0] = r3;
            a.r[1] = r30;
            (void)tc_call(0x8015a47cu, &a);
            break;
        case 0x800c98e0u:
            a.r[0] = r30;
            a.r[1] = 0x1ffu;
            a.r[2] = (u32)param_1 + 0x44cu;
            (void)tc_call(0x800c9568u, &a);
            wr16((u32)param_1 + 0x44cu, 0u);
            r3 = tc_call(0x80097da4u, &a);
            r3 = rd32(r3 + 0x30u);
            a.r[0] = r3;
            a.r[1] = r30;
            (void)tc_call(0x8015d270u, &a);
            break;
        case 0x800c9920u:
            a.r[0] = r30;
            a.r[1] = 2u;
            a.r[2] = rd32((u32)param_1 + 0x4a0u);
            a.r[3] = 0u;
            a.r[4] = 0xfeu;
            a.r[5] = 2u;
            a.r[6] = 4u;
            (void)tc_call(0x80052ea0u, &a);
            wr32((u32)param_1 + 0x4a0u, 0u);
            break;
        case 0x800c9978u:
            r3 = tc_call(0x80097da4u, &a);
            r3 = rd32(r3 + 0x30u);
            a.r[0] = r3;
            a.r[1] = r30;
            (void)tc_call(0x8015d4d8u, &a);
            break;
        case 0x800c99d4u:
            a.r[0] = r30;
            r3 = tc_call(0x8025e7a4u, &a);
            if ((u32)rd16(r30) != 0xff20u) break;
            r3 = r30 + ((r3 << 1u) & 0xfffffffeu);
            if ((u32)rd16(r3 - 2u) != 0xff20u) break;
            wr16(r3 - 2u, 0u);
            r3 = tc_call(0x80097da4u, &a);
            r3 = rd32(r3 + 0x50u);
            a.r[0] = r3;
            a.r[1] = r30 + 2u;
            a.r[2] = (u32)param_1 + 0x40cu;
            (void)tc_call(0x800cdf5cu, &a);
            break;
        case 0x800c99b4u:
            a.r[0] = r30;
            r3 = tc_call(0x8025e7a4u, &a);
            if (r3 >= 0x20u) break;
            a.r[0] = (u32)param_1 + 0x44cu;
            a.r[1] = r30;
            (void)tc_call(0x8025e7c0u, &a);
            break;
        case 0x800c998cu:
            r3 = tc_call(0x80097da4u, &a);
            r3 = rd32(r3 + 0x30u);
            a.r[0] = r3;
            a.r[1] = r30;
            (void)tc_call(0x8015d564u, &a);
            break;
        case 0x800c99a0u:
            r3 = tc_call(0x80097da4u, &a);
            r3 = rd32(r3 + 0x30u);
            a.r[0] = r3;
            a.r[1] = r30;
            (void)tc_call(0x8015d690u, &a);
            break;
        case 0x800c994cu:
            a.r[0] = r30;
            a.r[1] = 2u;
            a.r[2] = rd32((u32)param_1 + 0x4a0u);
            a.r[3] = 0u;
            a.r[4] = 0xfeu;
            a.r[5] = 0u;
            a.r[6] = 3u;
            (void)tc_call(0x80052ea0u, &a);
            wr32((u32)param_1 + 0x4a0u, 0u);
            break;
        default:
            a.r[0] = (u32)param_1;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
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
            return;
        }
    }
    (void)tc_call(0x800a790cu, &a);
    wr32((u32)param_1 + 0x490u, 0u);
    wr32((u32)param_1 + 0x494u, 0u);
    return;
}

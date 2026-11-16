#include "tc_rt.h"

u32 fn_8023f830(s32 param_1)
{
    u32 c0lt = 0, ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0;
    u32 r12 = 0, r30 = 0, r31 = 0, sw_ = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0;
    f64 f12 = 0.0, f13 = 0.0;
    TcArgs a = {0};
    r30 = rd32(0x80571738u);
    wr32(0x80571738u, (u32)param_1);
    r3 = tc_call(0x8022c2b0u, &a);
    f1 = tc_lastf();
    r31 = rd32(0x80571710u);
    if (r31 <= 8u) {
        r4 = rd32(((r31 << 2u) & 0xfffffffcu) - 0x7fc771ecu);
        sw_ = r4;
        switch (sw_) {
        case 0x8023f874u:
            r31 = 0u;
            break;
        case 0x8023f87cu:
            r31 = 1u;
            break;
        case 0x8023f880u:
            break;
        default:
            a.r[0] = r3;
            a.r[1] = r4;
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
    a.r[0] = r3;
    (void)tc_call(0x8022c2d8u, &a);
    if (r31 == 1u) {
        r0 = rd32(0x80571738u);
        c0lt = (s32)r0 < 2;
        if (r0 == 2u) {
            wr32(0x805716b4u, 0xafc8u);
        } else {
            if (c0lt && (s32)r0 >= 1) {
                wr32(0x805716b4u, 0x7530u);
                return r30;
            }
            wr32(0x805716b4u, 0x3a98u);
        }
    } else {
        r0 = rd32(0x80571738u);
        c0lt = (s32)r0 < 2;
        if (r0 == 2u) {
            wr32(0x805716b4u, 0xd2f0u);
        } else {
            if (c0lt && (s32)r0 >= 1) {
                wr32(0x805716b4u, 0x8ca0u);
                return r30;
            }
            wr32(0x805716b4u, 0x4650u);
        }
    }
    return r30;
}

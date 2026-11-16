#include "tc_rt.h"

u32 fn_8006dbd0(u32 param_1, u32 param_2, u32 param_3)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0;
    u32 r29 = 0, r30 = 0, r31 = 0, sw_ = 0;
    f64 f0 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0, f12 = 0.0;
    f64 f13 = 0.0;
    TcArgs a = {0};
    r4 = 0u;
    r30 = 0u;
    r31 = rd32(0x8057117cu);
    if (r31 <= 8u) {
        r3 = rd32(((r31 << 2u) & 0xfffffffcu) - 0x7fcaff7cu);
        sw_ = r3;
        switch (sw_) {
        case 0x8006dc18u:
            a.r[0] = 0x2015u;
            r3 = tc_call(0x8014d9a4u, &a);
            r30 = r3;
            r4 = r3 + 0x2740u;
            break;
        case 0x8006dc2cu:
            a.r[0] = 0x2017u;
            r3 = tc_call(0x8014d9a4u, &a);
            r30 = r3;
            r4 = r3 + 0x2744u;
            break;
        case 0x8006dc40u:
            a.r[0] = 0x201bu;
            r3 = tc_call(0x8014d9a4u, &a);
            r30 = r3;
            r4 = r3 + 0x273du;
            break;
        case 0x8006dc54u:
            a.r[0] = 0x2011u;
            r3 = tc_call(0x8014d9a4u, &a);
            r30 = r3;
            r4 = r3 + 0x272bu;
            break;
        case 0x8006dc68u:
            a.r[0] = 0x2019u;
            r3 = tc_call(0x8014d9a4u, &a);
            r30 = r3;
            r4 = r3 + 0x273au;
            break;
        case 0x8006dc7cu:
            a.r[0] = 0x2024u;
            r3 = tc_call(0x8014d9a4u, &a);
            r30 = r3;
            r4 = r3 + 0x278bu;
            break;
        case 0x8006dc90u:
            a.r[0] = 0x2028u;
            r3 = tc_call(0x8014d9a4u, &a);
            r30 = r3;
            r4 = r3 + 0x2733u;
            break;
        case 0x8006dca4u:
            a.r[0] = 0x2028u;
            r3 = tc_call(0x8014d9a4u, &a);
            r30 = r3;
            r4 = r3 + 0x2736u;
            break;
        case 0x8006dcb8u:
            a.r[0] = 0x2026u;
            r3 = tc_call(0x8014d9a4u, &a);
            r30 = r3;
            r4 = r3 + 0x274fu;
            break;
        default:
            a.r[0] = r3;
            a.r[1] = 0u;
            a.r[2] = param_3;
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
    if (r4 != 0u) {
        r29 = 0u;
        r5 = rd32((rd32(0x80471a18u) * 0x4150u) - 0x7fb92730u);
        while (r5 != 0u) {
            r3 = r5;
            r5 = rd32(r5);
            r3 = rd32(r3 + 8u);
            if (r4 == rd32(r3 + 0x84u)) {
                a.r[0] = r3;
                a.r[1] = param_2;
                a.r[2] = param_3;
                r3 = tc_call(0x8008441cu, &a);
                if (r3 == 0u) break;
                r29 = 1u;
                break;
            }
        }
        a.r[0] = param_1;
        a.r[1] = r31;
        a.r[2] = r30;
        (void)tc_call(0x8006dd5cu, &a);
        r3 = r29;
    } else {
        r3 = 0u;
    }
    return r3;
}

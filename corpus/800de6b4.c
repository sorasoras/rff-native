#include "tc_rt.h"

u32 fn_800de6b4(u32 param_1, u32 param_2)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0;
    u32 r31 = 0, sw_ = 0;
    f64 f0 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0, f12 = 0.0;
    f64 f13 = 0.0;
    TcArgs a = {0};
    (void)param_1;
    r31 = 1u;
    if (param_2 <= 0xfu) {
        r3 = rd32(((param_2 << 2u) & 0xfffffffcu) - 0x7fca9240u);
        sw_ = r3;
        switch (sw_) {
        case 0x800de75cu:
            break;
        case 0x800de748u:
            a.r[0] = 0x2au;
            r3 = tc_call(0x8014d9a4u, &a);
            if (r3 == 1u) break;
            r31 = 0u;
            break;
        case 0x800de6e8u:
            a.r[0] = 0x2bu;
            r3 = tc_call(0x8014d9a4u, &a);
            if (r3 != 0u) break;
            r31 = 0u;
            break;
        case 0x800de700u:
            a.r[0] = 0x2bu;
            r3 = tc_call(0x8014d9a4u, &a);
            if (r3 != 0u) break;
            r31 = 0u;
            break;
        case 0x800de718u:
            a.r[0] = 0x2bu;
            r3 = tc_call(0x8014d9a4u, &a);
            if (r3 == 0u) break;
            r31 = 0u;
            break;
        case 0x800de730u:
            a.r[0] = 0x2au;
            r3 = tc_call(0x8014d9a4u, &a);
            if (r3 == 0u) break;
            r31 = 0u;
            break;
        default:
            a.r[0] = r3;
            a.r[1] = param_2;
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
    return r31;
}

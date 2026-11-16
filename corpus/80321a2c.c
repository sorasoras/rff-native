#include "tc_rt.h"

u32 fn_80321a2c(u32 param_1, u32 param_2)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0;
    u32 sw_ = 0;
    f64 f0 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0, f12 = 0.0;
    f64 f13 = 0.0;
    TcArgs a = {0};
    (void)param_1;
    if (param_2 <= 0xau) {
        r3 = rd32(((param_2 << 2u) & 0xfffffffcu) - 0x7fc62538u);
        sw_ = r3;
        switch (sw_) {
        case 0x80321a4cu:
            return 0x80571e10u;
        case 0x80321a54u:
            return 0x80571e14u;
        case 0x80321a84u:
            break;
        case 0x80321a74u:
            return 0x80571e24u;
        case 0x80321a5cu:
            return 0x80571e18u;
        case 0x80321a64u:
            return 0x80571e1cu;
        case 0x80321a7cu:
            return 0x80571e28u;
        case 0x80321a6cu:
            return 0x80571e20u;
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
    return 0u;
}

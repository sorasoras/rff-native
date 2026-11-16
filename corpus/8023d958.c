#include "tc_rt.h"

u32 fn_8023d958(u32 param_1)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0;
    u32 sw_ = 0;
    f64 f0 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0, f12 = 0.0;
    f64 f13 = 0.0;
    TcArgs a = {0};
    r3 = param_1;
    if (param_1 <= 0x22u) {
        r4 = rd32(((param_1 << 2u) & 0xfffffffcu) - 0x7fc77414u);
        sw_ = r4;
        switch (sw_) {
        case 0x8023d978u:
            return 0x80388928u;
        case 0x8023d984u:
            return 0x8038894eu;
        case 0x8023d9f0u:
            return 0x80388a0cu;
        case 0x8023da00u:
            return 0x80388a32u;
        case 0x8023d994u:
            return 0x80388974u;
        case 0x8023d9a4u:
            return 0x8038899au;
        case 0x8023da50u:
            return 0x80388aa4u;
        case 0x8023da68u:
            break;
        case 0x8023d9d0u:
            return 0x803889c0u;
        case 0x8023d9e0u:
            return 0x803889e6u;
        case 0x8023da10u:
            return 0x80388974u;
        case 0x8023da20u:
            return 0x8038899au;
        case 0x8023d9b4u:
            return 0x80388928u;
        case 0x8023d9c0u:
            return 0x8038894eu;
        case 0x8023da30u:
            return 0x80388a58u;
        case 0x8023da40u:
            return 0x80388a7eu;
        case 0x8023da60u:
            return rd32(0x805716f4u);
        default:
            a.r[0] = param_1;
            a.r[1] = r4;
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

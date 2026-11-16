#include "tc_rt.h"

u32 fn_8013e2b4(s32 param_1)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0;
    u32 sw_ = 0;
    f64 f0 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0, f12 = 0.0;
    f64 f13 = 0.0;
    TcArgs a = {0};
    r0 = rd32((u32)param_1 + 0x25cu);
    r3 = 0xffffffffu;
    if (r0 > 0xdu) {
        return 0xffffffffu;
    }
    r0 = (r0 << 2u) & 0xfffffffcu;
    r4 = rd32(r0 - 0x7fc9c1b8u);
    sw_ = r4;
    switch (sw_) {
    case 0x8013e340u:
        break;
    case 0x8013e2dcu:
        return 0x1194u;
    case 0x8013e2e4u:
        return 0x1195u;
    case 0x8013e2ecu:
        return 0x1196u;
    case 0x8013e2f4u:
        return 0x1197u;
    case 0x8013e2fcu:
        return 0x1198u;
    case 0x8013e304u:
        return 0x1199u;
    case 0x8013e30cu:
        return 0x119au;
    case 0x8013e314u:
        return 0x119bu;
    case 0x8013e31cu:
        return 0x119cu;
    case 0x8013e324u:
        return 0x119du;
    case 0x8013e32cu:
        return 0x119eu;
    case 0x8013e334u:
        return 0x119fu;
    case 0x8013e33cu:
        r3 = 0x11a0u;
        break;
    default:
        a.r[0] = 0xffffffffu;
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
    return r3;
}

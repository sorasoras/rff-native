#include "tc_rt.h"

u32 fn_8003dcb0(u32 param_1)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0;
    u32 sw_ = 0;
    f64 f0 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0, f12 = 0.0;
    f64 f13 = 0.0;
    TcArgs a = {0};
    r3 = param_1;
    if (param_1 > 8u) {
        return 0u;
    }
    r4 = rd32(((param_1 << 2u) & 0xfffffffcu) - 0x7fcb0868u);
    sw_ = r4;
    switch (sw_) {
    case 0x8003dcd0u:
        return 0x8003e448u;
    case 0x8003dcdcu:
        return 0x8003e764u;
    case 0x8003dd0cu:
        return 0x8003f290u;
    case 0x8003dce8u:
        return 0x8003e97cu;
    case 0x8003dcf4u:
        return 0x8003ec54u;
    case 0x8003dd00u:
        return 0x8003eebcu;
    case 0x8003dd18u:
        return 0x8003f434u;
    case 0x8003dd30u:
        return 0u;
    case 0x8003dd24u:
        return 0x8003f5c8u;
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

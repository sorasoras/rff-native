#include "tc_rt.h"

u32 fn_800dd4e4(u32 param_1, u32 param_2)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0;
    u32 sw_ = 0;
    f64 f0 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0, f12 = 0.0;
    f64 f13 = 0.0;
    TcArgs a = {0};
    (void)param_1;
    r3 = 1u;
    if (param_2 > 0x20u) {
        return 1u;
    }
    r5 = rd32(((param_2 << 2u) & 0xfffffffcu) - 0x7fca9590u);
    sw_ = r5;
    switch (sw_) {
    case 0x800dd6a0u:
        break;
    case 0x800dd508u:
        if ((u32)rd8(0x80492834u) != 0u) {
            r0 = 1u;
        } else {
            r0 = 0u;
        }
        if (r0 != 0u) {
            return 1u;
        }
        return 0u;
    case 0x800dd538u:
        if ((u32)rd8(0x80492833u) != 0u) {
            return 1u;
        }
        return 0u;
    case 0x800dd554u:
        if ((u32)rd8(0x80492831u) == 2u) {
            return 1u;
        }
        return 0u;
    case 0x800dd570u:
        if ((u32)rd8(0x80492831u) == 3u) {
            return 1u;
        }
        return 0u;
    case 0x800dd58cu:
        if ((u32)rd8(0x80492831u) == 4u) {
            return 1u;
        }
        return 0u;
    case 0x800dd5a8u:
        if ((u32)rd8(0x80492830u) == 2u) {
            return 1u;
        }
        return 0u;
    case 0x800dd5c4u:
        if ((u32)rd8(0x80492830u) == 3u) {
            return 1u;
        }
        return 0u;
    case 0x800dd5e0u:
        if ((u32)rd8(0x80492830u) == 4u) {
            return 1u;
        }
        return 0u;
    case 0x800dd5fcu:
        if ((u32)rd8(0x80492833u) == 1u) {
            return 1u;
        }
        return 0u;
    case 0x800dd618u:
        if ((u32)rd8(0x80492833u) == 2u) {
            return 1u;
        }
        return 0u;
    case 0x800dd634u:
        if ((u32)rd8(0x80492833u) == 3u) {
            return 1u;
        }
        return 0u;
    case 0x800dd650u:
        if ((u32)rd8(0x80492832u) == 2u) {
            return 1u;
        }
        return 0u;
    case 0x800dd66cu:
        if ((u32)rd8(0x80492832u) == 3u) {
            return 1u;
        }
        return 0u;
    case 0x800dd688u:
        if ((u32)rd8(0x80492832u) == 4u) {
            return 1u;
        }
        r3 = 0u;
        break;
    default:
        a.r[0] = 1u;
        a.r[1] = param_2;
        a.r[2] = r5;
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

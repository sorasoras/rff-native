#include "tc_rt.h"

u32 fn_800dd8fc(u32 param_1, u32 param_2)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0;
    u32 sw_ = 0;
    f64 f0 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0, f12 = 0.0;
    f64 f13 = 0.0;
    TcArgs a = {0};
    (void)param_1;
    r3 = 1u;
    if (param_2 > 0x64u) {
        return 1u;
    }
    r5 = rd32(((param_2 << 2u) & 0xfffffffcu) - 0x7fca94d8u);
    sw_ = r5;
    switch (sw_) {
    case 0x800ddc60u:
        break;
    case 0x800dd920u:
        if ((u32)rd8(0x80492831u) == 0u) {
            return 1u;
        }
        return 0u;
    case 0x800dd93cu:
        if ((u32)rd8(0x80492831u) == 1u) {
            return 1u;
        }
        return 0u;
    case 0x800dd958u:
        if ((u32)rd8(0x80492831u) == 2u) {
            return 1u;
        }
        return 0u;
    case 0x800dd974u:
        if ((u32)rd8(0x80492831u) == 3u) {
            return 1u;
        }
        return 0u;
    case 0x800dd990u:
        if ((u32)rd8(0x80492831u) == 4u) {
            return 1u;
        }
        return 0u;
    case 0x800dd9acu:
        if ((u32)rd8(0x80492832u) == 0u) {
            return 1u;
        }
        return 0u;
    case 0x800dd9c8u:
        if ((u32)rd8(0x80492832u) == 1u) {
            return 1u;
        }
        return 0u;
    case 0x800dd9e4u:
        if ((u32)rd8(0x80492832u) == 2u) {
            return 1u;
        }
        return 0u;
    case 0x800dda00u:
        if ((u32)rd8(0x80492832u) == 3u) {
            return 1u;
        }
        return 0u;
    case 0x800dda1cu:
        if ((u32)rd8(0x80492832u) == 4u) {
            return 1u;
        }
        return 0u;
    case 0x800dda38u:
        if ((u32)rd8(0x80492830u) == 0u) {
            return 1u;
        }
        return 0u;
    case 0x800dda54u:
        if ((u32)rd8(0x80492830u) == 1u) {
            return 1u;
        }
        return 0u;
    case 0x800dda70u:
        if ((u32)rd8(0x80492830u) == 2u) {
            return 1u;
        }
        return 0u;
    case 0x800dda8cu:
        if ((u32)rd8(0x80492830u) == 3u) {
            return 1u;
        }
        return 0u;
    case 0x800ddaa8u:
        if ((u32)rd8(0x80492830u) == 4u) {
            return 1u;
        }
        return 0u;
    case 0x800ddac4u:
        if ((u32)rd8(0x80492834u) != 0u) {
            r0 = 1u;
        } else {
            r0 = 0u;
        }
        if (r0 != 0u) {
            return 1u;
        }
        return 0u;
    case 0x800ddaf4u:
        return 1u;
    case 0x800ddafcu:
        r0 = (u32)rd8(0x80492832u);
        if (r0 == 1u) {
            return 1u;
        }
        if (r0 == 0u) {
            return 1u;
        }
        return 0u;
    case 0x800ddb68u:
        if ((u32)rd8(0x80492832u) == 2u) {
            return 1u;
        }
        return 0u;
    case 0x800ddb84u:
        if ((u32)rd8(0x80492832u) == 3u) {
            return 1u;
        }
        return 0u;
    case 0x800ddba0u:
        if ((u32)rd8(0x80492832u) == 4u) {
            return 1u;
        }
        return 0u;
    case 0x800ddb20u:
        r0 = (u32)rd8(0x80492830u);
        if (r0 == 1u) {
            return 1u;
        }
        if (r0 == 0u) {
            return 1u;
        }
        return 0u;
    case 0x800ddbbcu:
        if ((u32)rd8(0x80492830u) == 2u) {
            return 1u;
        }
        return 0u;
    case 0x800ddbd8u:
        if ((u32)rd8(0x80492830u) == 3u) {
            return 1u;
        }
        return 0u;
    case 0x800ddbf4u:
        if ((u32)rd8(0x80492830u) == 4u) {
            return 1u;
        }
        return 0u;
    case 0x800ddc10u:
        if ((u32)rd8(0x80492831u) == 3u) {
            return 1u;
        }
        return 0u;
    case 0x800ddb44u:
        r0 = (u32)rd8(0x80492831u);
        if (r0 == 1u) {
            return 1u;
        }
        if (r0 == 0u) {
            return 1u;
        }
        return 0u;
    case 0x800ddc2cu:
        if ((u32)rd8(0x80492831u) == 2u) {
            return 1u;
        }
        return 0u;
    case 0x800ddc48u:
        if ((u32)rd8(0x80492831u) == 4u) {
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

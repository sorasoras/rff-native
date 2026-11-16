#include "tc_rt.h"

void fn_8026c6b0(u32 param_r3)
{
    u32 fl_ = 0, r3 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    a.r[0] = 0x805031e0u;
    (void)tc_call(0x8022d56cu, &a);
    r30 = 0u;
    r28 = 0x805031d0u;
    for (;;) {
        a.r[0] = 0x805031d0u;
        a.r[1] = r30;
        r3 = tc_call(0x8026d5c0u, &a);
        r30 = r3;
        if (r3 == 0u) {
            fl_ = 1u;
            break;
        }
        if (rd32(r3 + 0x18u) <= param_r3 && param_r3 < rd32(r3 + 0x1cu)) {
            fl_ = 2u;
            break;
        }
    }
    do {
        if (fl_ == 2u) {
            fl_ = 0u;
        } else if (fl_ == 1u) {
            fl_ = 0u;
            break;
        }
        r31 = 0u;
        for (;;) {
            a.r[0] = r30 + 0xcu;
            a.r[1] = r31;
            r3 = tc_call(0x8026d5c0u, &a);
            r31 = r3;
            if (r3 == 0u) {
                fl_ = 3u;
                break;
            }
            if (rd32(r3 + 0x18u) <= param_r3 && param_r3 < rd32(r3 + 0x1cu)) {
                fl_ = 4u;
                break;
            }
        }
        do {
            if (fl_ == 4u) {
                fl_ = 0u;
            } else if (fl_ == 3u) {
                fl_ = 0u;
                break;
            }
            r29 = 0u;
            for (;;) {
                a.r[0] = r31 + 0xcu;
                a.r[1] = r29;
                r3 = tc_call(0x8026d5c0u, &a);
                r29 = r3;
                if (r3 == 0u) {
                    r3 = 0u;
                    break;
                }
                if (rd32(r3 + 0x18u) <= param_r3 && param_r3 < rd32(r3 + 0x1cu)) {
                    r3 = r3 + 0xcu;
                    a.r[0] = r3;
                    a.r[1] = param_r3;
                    r3 = tc_call(0x8026c3b0u, &a);
                    if (r3 == 0u) {
                        r3 = r29;
                        break;
                    }
                    break;
                }
            }
            if (r3 == 0u) {
                r3 = r31;
                fl_ = 5u;
                break;
            }
            fl_ = 5u;
            break;
        } while (0);
        if (fl_ == 5u) {
            fl_ = 0u;
        } else {
            r3 = 0u;
        }
        if (r3 == 0u) {
            r3 = r30;
            fl_ = 6u;
            break;
        }
        fl_ = 6u;
        break;
    } while (0);
    if (fl_ == 6u) {
        fl_ = 0u;
    } else {
        r3 = 0u;
    }
    if (r3 != 0u) {
        r28 = r3 + 0xcu;
    }
    a.r[0] = r28;
    a.r[1] = param_r3;
    (void)tc_call(0x8026d554u, &a);
    a.r[0] = 0x805031e0u;
    (void)tc_call(0x8022d648u, &a);
    wr32(param_r3, 0u);
    return;
}

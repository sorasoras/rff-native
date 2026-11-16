#include "tc_rt.h"

static u32 px_rec(u32 sp_, u32 param_1, u32 param_2)
{
    u32 fl_ = 0, r1 = 0, r3 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(sp_ - 0x20u, sp_);
    r1 = sp_ - 0x20u;
    wr32(r1 + 0x24u, 0x817ff000u);
    wr32(r1 + 0x1cu, 0u);
    wr32(r1 + 0x18u, 0u);
    wr32(r1 + 0x14u, 0u);
    r29 = 0u;
    wr32(r1 + 0x10u, 0u);
    do {
        a.r[0] = param_1;
        a.r[1] = r29;
        r3 = tc_call(0x8026d5c0u, &a);
        r29 = r3;
        if (r3 == 0u) {
            r3 = 0u;
            return r3;
        }
    } while (rd32(r3 + 0x18u) > param_2 || param_2 >= rd32(r3 + 0x1cu));
    r31 = 0u;
    for (;;) {
        a.r[0] = r29 + 0xcu;
        a.r[1] = r31;
        r3 = tc_call(0x8026d5c0u, &a);
        r31 = r3;
        if (r3 == 0u) {
            fl_ = 1u;
            break;
        }
        if (rd32(r3 + 0x18u) <= param_2 && param_2 < rd32(r3 + 0x1cu)) {
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
        r30 = 0u;
        for (;;) {
            a.r[0] = r31 + 0xcu;
            a.r[1] = r30;
            r3 = tc_call(0x8026d5c0u, &a);
            r30 = r3;
            if (r3 == 0u) {
                r3 = 0u;
                fl_ = 3u;
                break;
            }
            if (rd32(r3 + 0x18u) <= param_2 && param_2 < rd32(r3 + 0x1cu)) {
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
            r3 = r3 + 0xcu;
            r3 = px_rec(r1, r3, param_2);
            if (r3 == 0u) {
                r3 = r30;
            }
        } while (0);
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
        r3 = r29;
    }
    return r3;
}

s32 fn_8026c3b0(u32 param_1, u32 param_2)
{
    return (s32)px_rec(0x817fe000u, param_1, param_2);
}

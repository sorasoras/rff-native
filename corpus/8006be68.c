#include "tc_rt.h"

s32 fn_8006be68(s32 param_1, s32 param_2)
{
    u32 r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r31 = 0x21u;
    if (param_2 >= 570 && param_2 <= 591) {
        r31 = 0xdu;
    } else {
        if (param_2 >= 592 && param_2 <= 613) {
            r31 = 9u;
        } else {
            if (param_2 >= 614 && param_2 <= 624) {
                r31 = 0x1eu;
            } else {
                if (param_2 >= 548 && param_2 <= 569) {
                    r31 = 0x19u;
                } else {
                    if (param_2 >= 504 && param_2 <= 525) {
                        r31 = 0xfu;
                    } else {
                        if (param_2 >= 526 && param_2 <= 547) {
                            r31 = 0x16u;
                        }
                    }
                }
            }
        }
    }
    if (r31 == 0x21u) {
        return (s32)r31;
    }
    a.r[0] = (u32)param_1;
    a.r[1] = r31;
    a.r[2] = (u32)rd8((u32)param_1 + 0x5c4u);
    f1 = tc_callf(0x8006d400u, &a);
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    a.r[0] = (u32)param_1;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.r[6] = 0u;
    a.r[7] = 0u;
    (void)tc_call(0x8006d6d8u, &a);
    if ((u32)rd8((r31 * 0x58u) - 0x7fb97210u) == 0u) {
        r31 = 0x21u;
    }
    return (s32)r31;
}

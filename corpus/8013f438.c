#include "tc_rt.h"

u32 fn_8013f438(u32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = param_1;
    r3 = tc_call(0x8013f288u, &a);
    if (r3 != 0u) {
        r3 = rd32(0x804beac0u);
    } else {
        a.r[0] = param_1;
        r3 = tc_call(0x8013f2c0u, &a);
        if (r3 != 0u) {
            r3 = rd32(0x804beac4u);
        } else {
            a.r[0] = param_1;
            r3 = tc_call(0x8013f2f8u, &a);
            if (r3 != 0u) {
                r3 = rd32(0x804beac8u);
            } else {
                a.r[0] = param_1;
                r3 = tc_call(0x8013f330u, &a);
                if (r3 != 0u) {
                    r3 = rd32(0x804beaccu);
                } else {
                    a.r[0] = param_1;
                    r3 = tc_call(0x8013f368u, &a);
                    if (r3 != 0u) {
                        r3 = rd32(0x804bead0u);
                    } else {
                        r3 = 0u;
                    }
                }
            }
        }
    }
    return r3;
}

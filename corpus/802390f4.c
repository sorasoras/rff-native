#include "tc_rt.h"

u32 fn_802390f4(u32 param_1)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x8022c2b0u, &a);
    r30 = r3;
    if (rd32(param_1 + 0xcu) == 3u) {
        r31 = 1u;
    } else {
        if (rd32(param_1 + 0xcu) == 5u) {
            r31 = 4u;
        } else {
            if (rd32(0x80571650u) == 0x804e5c90u) {
                r3 = tc_call(0x80239c3cu, &a);
                if (r3 != 0u) {
                    if (param_1 == r3) {
                        r31 = 1u;
                        a.r[0] = r30;
                        (void)tc_call(0x8022c2d8u, &a);
                        return r31;
                    }
                    r31 = rd32(param_1 + 0xcu);
                    a.r[0] = r30;
                    (void)tc_call(0x8022c2d8u, &a);
                    return r31;
                }
                if (param_1 == 0x804e5c90u) {
                    r31 = 0u;
                    a.r[0] = r30;
                    (void)tc_call(0x8022c2d8u, &a);
                    return r31;
                }
                r31 = rd32(param_1 + 0xcu);
            } else {
                r31 = rd32(param_1 + 0xcu);
            }
        }
    }
    a.r[0] = r30;
    (void)tc_call(0x8022c2d8u, &a);
    return r31;
}

#include "tc_rt.h"

u32 fn_8026a9fc(u32 param_1, u32 param_2, u32 param_3)
{
    u32 c0lt = 0, r0 = 0, r3 = 0;
    TcArgs a = {0};
    (void)param_1;
    (void)param_2;
    r3 = tc_call(0x8026b30cu, &a);
    if ((r3 & 0xffu) != 0u) {
        r3 = tc_call(0x80268310u, &a);
        if (r3 != 0u) {
            wr32(0x817fdfe8u, rd32(param_3));
            r3 = tc_call(0x8026a5b0u, &a);
            r0 = r3 & 0xffu;
            c0lt = (s32)r0 < 1;
            wr32(param_3, rd32(0x817fdfe8u));
            if (r0 != 1u) {
                if (!c0lt) {
                    if ((s32)r0 < 3) {
                        r3 = 2u;
                        return r3;
                    }
                } else if ((s32)r0 >= 0) {
                    r3 = 0u;
                    return r3;
                }
            }
            r3 = 1u;
        } else {
            r3 = 1u;
        }
    } else {
        r3 = 1u;
    }
    return r3;
}

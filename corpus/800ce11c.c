#include "tc_rt.h"

u32 fn_800ce11c(u32 param_1, u32 param_2, u32 param_3)
{
    u32 c0lt = 0, r3 = 0, r4 = 0;
    TcArgs a = {0};
    a.r[0] = 0x80355848u;
    a.r[1] = param_2;
    a.r[2] = param_3;
    r3 = tc_call(0x800ce000u, &a);
    c0lt = (s32)r3 < 2;
    if (r3 == 2u) {
        r3 = 1u;
        wr32(param_1, 0x80499110u);
    } else {
        if (!c0lt) {
            if ((s32)r3 < 4) {
                r4 = (u32)rd8(0x8049912au);
                if (r4 != 0x21u) {
                    a.r[0] = 0x804ac83cu;
                    a.r[1] = r4;
                    r3 = tc_call(0x801655e4u, &a);
                    wr32(param_1, r3);
                    r3 = 1u;
                    return r3;
                }
                r3 = 1u;
                wr32(param_1, 0x80570778u);
                return r3;
            }
        } else {
            c0lt = (s32)r3 < 0;
            if (r3 == 0u) {
                r3 = 1u;
                wr32(param_1, 0x804990ccu);
                return r3;
            }
            if (!c0lt) {
                r3 = 1u;
                wr32(param_1, 0x804990e6u);
                return r3;
            }
        }
        a.r[0] = param_1;
        a.r[1] = param_2;
        a.r[2] = param_3;
        r3 = tc_call(0x800ce080u, &a);
        if (r3 == 0u) {
            r3 = 0u;
        } else {
            r3 = 1u;
        }
    }
    return r3;
}

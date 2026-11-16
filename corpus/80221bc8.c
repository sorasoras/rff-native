#include "tc_rt.h"

u32 fn_80221bc8(u32 param_1, s32 param_2)
{
    u32 r0 = 0, r3 = 0, r5 = 0, r6 = 0;
    TcArgs a = {0};
    if (param_1 != 0u) {
        r0 = rd32(param_1 + 0xb8u);
        wr32(param_1, 0x80378eb0u);
        if (r0 != 0u) {
            a.r[0] = r0;
            (void)tc_call(0x80157e6cu, &a);
            wr32(param_1 + 0xb8u, 0u);
        }
        a.r[0] = param_1;
        a.r[1] = 0u;
        (void)tc_call(0x800d5c7cu, &a);
        if (param_2 > 0 && param_1 != 0u) {
            r3 = tc_call(0x8006bb94u, &a);
            r6 = r3;
            if (rd32(r3 + 0x10u) != 0u) {
                r5 = rd32(r3 + 0xcu);
                r3 = rd32(r3);
                r6 = r6 + 0x18u;
                a.r[0] = r3;
                a.r[1] = param_1;
                a.r[2] = r5;
                a.r[3] = r6;
                (void)tc_call(0x80040e98u, &a);
            } else {
                if (rd32(r3 + 0x20u) != 0u) {
                    r3 = r3 + 0x24u;
                    a.r[0] = r3;
                    a.r[1] = param_1;
                    (void)tc_call(0x80094ec0u, &a);
                } else {
                    r5 = rd32(r3 + 0xcu);
                    r3 = rd32(r3);
                    r6 = r6 + 0x18u;
                    a.r[0] = r3;
                    a.r[1] = param_1;
                    a.r[2] = r5;
                    a.r[3] = r6;
                    (void)tc_call(0x80040e98u, &a);
                }
            }
        }
    }
    return param_1;
}

#include "tc_rt.h"

u32 fn_800a61ec(u32 param_1, u32 param_2, s32 param_3)
{
    u32 r0 = 0, r3 = 0;
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x800a62ccu, &a);
    if (param_2 == 0u) {
        r3 = 0u;
    } else {
        if ((u32)param_3 == 0u) {
            r0 = 0u;
        } else {
            if (rd32(param_2 + 0x10u) != 0u) {
                a.r[0] = rd32(param_2);
                a.r[1] = (u32)param_3;
                a.r[2] = rd32(param_2 + 0xcu);
                a.r[3] = param_2 + 0x18u;
                r3 = tc_call(0x80040db8u, &a);
            } else {
                if (rd32(param_2 + 0x20u) != 0u) {
                    a.r[0] = param_2 + 0x24u;
                    a.r[1] = 0x20u;
                    a.r[2] = (u32)param_3;
                    r3 = tc_call(0x80094e80u, &a);
                } else {
                    a.r[0] = rd32(param_2);
                    a.r[1] = (u32)param_3;
                    a.r[2] = rd32(param_2 + 0xcu);
                    a.r[3] = param_2 + 0x18u;
                    r3 = tc_call(0x80040cd8u, &a);
                }
            }
            r0 = r3;
        }
        if (r0 == 0u) {
            r3 = 0u;
        } else {
            wr32(param_1, param_2);
            r3 = 1u;
            wr32(param_1 + 8u, r0);
            wr32(param_1 + 4u, (u32)param_3);
        }
    }
    return r3;
}

#include "tc_rt.h"

s32 fn_80231cec(u32 param_1, u32 param_2)
{
    u32 r0 = 0, r3 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x8022efe4u, &a);
    if (r3 != 0u) {
        r3 = 0u;
    } else {
        r3 = 0xffffffffu;
    }
    if ((s32)r3 >= 0) {
        a.r[0] = 0x80386c08u;
        a.r[1] = 0u;
        r3 = tc_call(0x8026f5f8u, &a);
        r30 = r3;
        if ((s32)r3 >= 0) {
            r31 = 0u;
        } else if (r3 != 0xfffffffau) {
            r31 = 0xffffffd6u;
        } else {
            r31 = 0xffffffe3u;
        }
        if ((s32)r31 >= 0) {
            wr32(0x804e0fc0u, param_1);
            wr32(0x804e0fc4u, param_2);
            a.r[0] = r3;
            a.r[1] = 0x17u;
            a.r[2] = 0x804e0fc0u;
            a.r[3] = 0x20u;
            a.r[4] = 0x804e0fe0u;
            a.r[5] = 0x20u;
            r3 = tc_call(0x8026fea8u, &a);
            if ((s32)r3 >= 0) {
                r31 = 0u;
            } else {
                r31 = 0xffffffd6u;
            }
            if ((s32)r31 >= 0) {
                r31 = rd32(0x804e0fe0u);
            }
            a.r[0] = r30;
            r3 = tc_call(0x8026f7d8u, &a);
            if ((s32)r3 >= 0) {
                r0 = 0u;
            } else {
                r0 = 0xffffffd6u;
            }
            if ((s32)r31 >= 0) {
                r31 = r0;
            }
        }
        r3 = r31;
    }
    return (s32)r3;
}

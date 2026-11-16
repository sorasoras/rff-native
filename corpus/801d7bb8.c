#include "tc_rt.h"

void fn_801d7bb8(u32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r0 = rd32(param_1 + 0xd68u);
    if (r0 != 0u) {
        a.r[0] = r0;
        (void)tc_call(0x80157e6cu, &a);
        wr32(param_1 + 0xd68u, 0u);
    }
    r3 = rd32(param_1 + 0xd6cu);
    if (r3 != 0u) {
        a.r[0] = r3;
        (void)tc_call(0x80157e6cu, &a);
        wr32(param_1 + 0xd6cu, 0u);
    }
    r3 = rd32(param_1 + 0xd70u);
    if (r3 != 0u) {
        a.r[0] = r3;
        (void)tc_call(0x80157e6cu, &a);
        wr32(param_1 + 0xd70u, 0u);
    }
    r4 = rd32(param_1 + 0xdacu);
    if (r4 != 0xffffffffu) {
        a.r[0] = 0x804b9e80u;
        a.r[1] = r4;
        r3 = tc_call(0x80121060u, &a);
        if (r3 != 0u) {
            a.r[0] = 0x804b9e80u;
            a.r[1] = rd32(param_1 + 0xdacu);
            (void)tc_call(0x801206f4u, &a);
            wr32(param_1 + 0xdacu, 0xffffffffu);
        }
    }
    wr32(param_1 + 0xce4u, 2u);
    a.r[0] = param_1;
    f1 = tc_callf(0x8007f7e4u, &a);
    a.r[0] = param_1;
    a.r[1] = 0u;
    a.r[2] = 1u;
    a.r[3] = 7u;
    a.r[4] = 1u;
    a.f[0] = f1;
    (void)tc_call(rd32(rd32(param_1) + 0x18cu), &a);
    a.r[0] = param_1;
    (void)tc_call(0x801dada8u, &a);
    if (rd32(param_1 + 0xdf8u) != 0u) {
        a.r[0] = (rd32(0x805710e0u) * 0x6d0u) - 0x7fc2e738u;
        (void)tc_call(0x80056f08u, &a);
        wr32(param_1 + 0xdf8u, 0u);
    }
    return;
}

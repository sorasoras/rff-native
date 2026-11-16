#include "tc_rt.h"

u32 fn_80263964(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = (((u32)param_1 << 6u) & 0xffffffc0u) - 0x7faff5d0u;
    r3 = tc_call(0x8022c2b0u, &a);
    r30 = r3;
    if ((rd32(r31 + 0xcu) & 8u) == 0u) {
        a.r[0] = r3;
        (void)tc_call(0x8022c2d8u, &a);
        r3 = 1u;
    } else {
        if ((rd32(r31 + 0xcu) & 0x10u) != 0u && rd32(r31 + 0x18u) == 0u) {
            a.r[0] = r3;
            (void)tc_call(0x8022c2d8u, &a);
            r3 = 0u;
        } else {
            wr32(r31 + 0xcu, rd32(r31 + 0xcu) & 0xfffffff7u);
            r0 = (((u32)param_1 << 2u) & 0xfffffffcu) - (u32)param_1;
            a.r[0] = ((r0 & 0x20u) != 0u) ? 0u : (0x500000u >> (r0 & 0x1fu));
            (void)tc_call(0x8022c640u, &a);
            a.r[0] = r30;
            (void)tc_call(0x8022c2d8u, &a);
            r3 = 1u;
        }
    }
    return r3;
}

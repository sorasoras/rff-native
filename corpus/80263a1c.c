#include "tc_rt.h"

void fn_80263a1c(u32 param_1, u32 param_2, s32 param_3)
{
    u32 c0lt = 0, r3 = 0, r4 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = ((param_1 << 6u) & 0xffffffc0u) - 0x7faff5d0u;
    r3 = tc_call(0x8022c2b0u, &a);
    r30 = r3;
    if ((rd32(r31 + 0xcu) & 4u) == 0u) {
        if (param_1 != 2u) {
            if (param_2 == 0u && (rd32(r31 + 0xcu) & 8u) == 0u) {
                a.r[0] = param_1;
                r3 = tc_call(0x802636ccu, &a);
                if (r3 == 0u) {
                    a.r[0] = r30;
                    (void)tc_call(0x8022c2d8u, &a);
                    return;
                }
            }
            if ((rd32(r31 + 0xcu) & 0x10u) == 0u || rd32(r31 + 0x18u) != param_2) {
                a.r[0] = r30;
                (void)tc_call(0x8022c2d8u, &a);
                return;
            }
        }
        wr32(r31 + 0xcu, rd32(r31 + 0xcu) | 4u);
        r4 = (param_1 * 0x14u) - 0x33000000u;
        wr32(r4 + 0x6800u, (rd32(r4 + 0x6800u) & 0x405u) | (((u32)param_3 << 4u) & 0xfffffff0u) | (((((param_2 & 0x20u) != 0u) ? 0u : (1u << (param_2 & 0x1fu))) << 7u) & 0xffffff80u));
        if ((rd32(r31 + 0xcu) & 8u) != 0u) {
            c0lt = (s32)param_1 < 1;
            if (param_1 == 1u) {
                a.r[0] = 0x20000u;
                (void)tc_call(0x8022c640u, &a);
            } else if (c0lt && (s32)param_1 >= 0) {
                a.r[0] = 0x100000u;
                (void)tc_call(0x8022c640u, &a);
            }
        }
        a.r[0] = r30;
        (void)tc_call(0x8022c2d8u, &a);
        return;
    }
    a.r[0] = r30;
    (void)tc_call(0x8022c2d8u, &a);
    return;
}

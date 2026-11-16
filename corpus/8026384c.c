#include "tc_rt.h"

void fn_8026384c(u32 param_r3, u32 param_r4)
{
    u32 r0 = 0, r3 = 0, r28 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    r31 = ((param_r3 << 6u) & 0xffffffc0u) - 0x7faff5d0u;
    a.r[0] = param_r3;
    r3 = tc_call(0x802636ccu, &a);
    if (r3 != 0u && rd32(r31 + 0x20u) == 0u) {
        a.r[0] = param_r3;
        a.r[1] = 0u;
        a.r[2] = 0x817fdfd8u;
        (void)tc_call(0x802643acu, &a);
    }
    r3 = tc_call(0x8022c2b0u, &a);
    r30 = r3;
    if (rd32(r31 + 0x20u) != 0u) {
        r3 = tc_call(0x8022c2b0u, &a);
        r28 = r3;
        if ((rd32(r31 + 0xcu) & 8u) == 0u) {
            a.r[0] = param_r3;
            r3 = tc_call(0x802636ccu, &a);
            if (r3 != 0u) {
                r3 = (param_r3 * 0x14u) - 0x33000000u;
                wr32(r3 + 0x6800u, (rd32(r3 + 0x6800u) & 0x7f5u) | 2u);
                wr32(r31 + 8u, param_r4);
                r0 = ((param_r3 << 2u) & 0xfffffffcu) - param_r3;
                a.r[0] = ((r0 & 0x20u) != 0u) ? 0u : (0x100000u >> (r0 & 0x1fu));
                (void)tc_call(0x8022c6c0u, &a);
                wr32(r31 + 0xcu, rd32(r31 + 0xcu) | 8u);
                a.r[0] = r28;
                (void)tc_call(0x8022c2d8u, &a);
                a.r[0] = r30;
                (void)tc_call(0x8022c2d8u, &a);
                return;
            }
        }
        a.r[0] = r28;
        (void)tc_call(0x8022c2d8u, &a);
        a.r[0] = r30;
        (void)tc_call(0x8022c2d8u, &a);
        return;
    }
    a.r[0] = r3;
    (void)tc_call(0x8022c2d8u, &a);
    return;
}

#include "tc_rt.h"

u32 fn_80263b4c(s32 param_1)
{
    u32 c0lt = 0, r3 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = (((u32)param_1 << 6u) & 0xffffffc0u) - 0x7faff5d0u;
    r3 = tc_call(0x8022c2b0u, &a);
    r29 = r3;
    if ((rd32(r31 + 0xcu) & 4u) != 0u) {
        wr32(r31 + 0xcu, rd32(r31 + 0xcu) & 0xfffffffbu);
        r3 = ((u32)param_1 * 0x14u) - 0x33000000u;
        r30 = rd32(r3 + 0x6800u);
        wr32(r3 + 0x6800u, r30 & 0x405u);
        if ((rd32(r31 + 0xcu) & 8u) != 0u) {
            c0lt = param_1 < 1;
            if ((u32)param_1 == 1u) {
                a.r[0] = 0x20000u;
                (void)tc_call(0x8022c6c0u, &a);
            } else if (c0lt && param_1 >= 0) {
                a.r[0] = 0x100000u;
                (void)tc_call(0x8022c6c0u, &a);
            }
        }
        a.r[0] = r29;
        (void)tc_call(0x8022c2d8u, &a);
        if ((u32)param_1 == 2u || (r30 & 0x80u) == 0u) {
            r3 = 1u;
        } else {
            a.r[0] = (u32)param_1;
            r3 = tc_call(0x802636ccu, &a);
            r3 = (((0u - r3) | r3) >> 0x1fu) & 1u;
        }
    } else {
        a.r[0] = r3;
        (void)tc_call(0x8022c2d8u, &a);
        r3 = 0u;
    }
    return r3;
}

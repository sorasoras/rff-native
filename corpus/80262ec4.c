#include "tc_rt.h"

void fn_80262ec4(s32 param_1, u32 param_2)
{
    u32 c0lt = 0, r3 = 0;
    TcArgs a = {0};
    c0lt = param_1 < 1;
    if ((u32)param_1 == 1u) {
        if (rd32(param_2) == 0u || (rd32(param_2 + 0xcu) & 0x10u) != 0u) {
            a.r[0] = 0x80000u;
            (void)tc_call(0x8022c640u, &a);
        } else {
            a.r[0] = 0x80000u;
            (void)tc_call(0x8022c6c0u, &a);
        }
    } else if (!c0lt) {
        if (param_1 < 3) {
            a.r[0] = 0x19u;
            r3 = tc_call(0x8022c310u, &a);
            if (r3 != 0u && (rd32(param_2 + 0xcu) & 0x10u) == 0u) {
                a.r[0] = 0x40u;
                (void)tc_call(0x8022c6c0u, &a);
                return;
            }
            a.r[0] = 0x40u;
            (void)tc_call(0x8022c640u, &a);
        }
    } else if (param_1 >= 0) {
        if ((rd32(param_2) != 0u || rd32(0x80500ab0u) != 0u) && (rd32(param_2 + 0xcu) & 0x10u) == 0u) {
            a.r[0] = 0x410000u;
            (void)tc_call(0x8022c6c0u, &a);
        } else {
            a.r[0] = 0x410000u;
            (void)tc_call(0x8022c640u, &a);
        }
    }
    return;
}

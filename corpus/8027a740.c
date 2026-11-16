#include "tc_rt.h"

void fn_8027a740(s32 param_1, u32 param_2)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = rd32((((u32)param_1 << 2u) & 0xfffffffcu) - 0x7faf46b0u);
    r3 = tc_call(0x8022c2b0u, &a);
    if (rd32(r31 + 0x8bcu) != 0xffffffffu) {
        if (rd32(0x80571afcu) != 0u || (param_2 == 0u && rd32(r31 + 0x8d4u) == 1u)) {
            if ((param_2 != 0u || rd32(r31 + 0x8d4u) != 0u) && (param_2 != 1u || rd32(r31 + 0x8d4u) != 1u)) {
                wr32(r31 + 0x8d4u, (((0u - param_2) | param_2) >> 0x1fu) & 1u);
                wr32(r31 + 0x8d0u, 1u);
                a.r[0] = r3;
                (void)tc_call(0x8022c2d8u, &a);
            } else {
                a.r[0] = r3;
                (void)tc_call(0x8022c2d8u, &a);
            }
        } else {
            a.r[0] = r3;
            (void)tc_call(0x8022c2d8u, &a);
        }
    } else {
        a.r[0] = r3;
        (void)tc_call(0x8022c2d8u, &a);
    }
    return;
}

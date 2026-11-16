#include "tc_rt.h"

void fn_80100404(u32 param_1)
{
    u32 r3 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r30 = 0u;
    r29 = 0u;
    r31 = rd32(param_1 + 0x1cu);
    while ((s32)r29 < (s32)rd32(param_1 + 0x18u)) {
        if (r31 != 0u) {
            a.r[0] = r31;
            (void)tc_call(0x80100038u, &a);
            r30 = rd32(r31 + 0xe0u);
            if (r31 != 0u) {
                if ((r31 + 0x24u) != 0u) {
                    r3 = r31 + 0x48u;
                    if (r3 != 0u) {
                        a.r[0] = r3;
                        a.r[1] = 0u;
                        (void)tc_call(0x802dea2cu, &a);
                    }
                    a.r[0] = r31 + 0x24u;
                    a.r[1] = 0u;
                    (void)tc_call(0x802eef60u, &a);
                }
                a.r[0] = 0u;
                r3 = tc_call(0x801b3a7cu, &a);
                a.r[0] = r3;
                a.r[1] = r31;
                (void)tc_call(0x801b3a38u, &a);
            }
        }
        r31 = r30;
        r29 = r29 + 1u;
    }
    if (rd32(param_1) != 0u) {
        a.r[0] = rd32(param_1 + 4u);
        (void)tc_call(0x8026cddcu, &a);
        a.r[0] = 1u;
        r3 = tc_call(0x801b3a7cu, &a);
        a.r[0] = r3;
        a.r[1] = rd32(param_1);
        (void)tc_call(0x801b3a38u, &a);
    }
    wr32(param_1, 0u);
    wr32(param_1 + 0x1cu, 0u);
    wr32(param_1 + 0x20u, 0u);
    wr32(param_1 + 0x24u, 0u);
    wr32(param_1 + 0x18u, 0u);
    return;
}

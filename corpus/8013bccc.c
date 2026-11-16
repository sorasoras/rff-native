#include "tc_rt.h"

void fn_8013bccc(s32 param_1)
{
    u32 r0 = 0, r3 = 0;
    TcArgs a = {0};
    r0 = rd32((u32)param_1 + 4u);
    if (r0 != 0u) {
        a.r[0] = r0;
        a.r[1] = 0u;
        (void)tc_call(0x801f0fa0u, &a);
        if (rd32((u32)param_1 + 0xcu) != 4u) {
            a.r[0] = rd32((u32)param_1 + 4u);
            r3 = tc_call(0x801f1144u, &a);
            if (r3 != 0u) {
                a.r[0] = (u32)param_1;
                a.r[1] = rd32((u32)param_1 + 0xcu);
                a.r[2] = 0u;
                r3 = tc_call(0x8013bdc0u, &a);
                a.r[0] = rd32((u32)param_1 + 4u);
                a.r[1] = r3;
                (void)tc_call(0x801f100cu, &a);
                a.r[0] = rd32((u32)param_1 + 4u);
                a.r[1] = 0u;
                (void)tc_call(0x801f10b8u, &a);
                wr32((u32)param_1 + 8u, rd32((u32)param_1 + 0xcu));
                wr32((u32)param_1 + 0xcu, 4u);
            }
        }
    }
    return;
}

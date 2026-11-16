#include "tc_rt.h"

u32 fn_80148f04(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = rd32((u32)param_1 + 0x78u);
    a.r[1] = (u32)param_1 + 0x150u;
    a.r[2] = (u32)param_1 + 0x744u;
    (void)tc_call(0x80147414u, &a);
    if (rd32((u32)param_1 + 0xa4u) != 0u) {
        a.r[0] = (u32)param_1 + 0x80u;
        (void)tc_call(0x800cb5a8u, &a);
    }
    if (rd32((u32)param_1 + 0x774u) != 0u) {
        a.r[0] = (u32)param_1;
        a.r[1] = rd32((u32)param_1 + 0x130u);
        r3 = tc_call(0x800dacf8u, &a);
        if (r3 == 0xffffffffu) {
            a.r[0] = (u32)param_1;
            (void)tc_call(0x800dad3cu, &a);
            a.r[0] = rd32((u32)param_1 + 0x130u);
            (void)tc_call(0x8014d968u, &a);
        } else {
            if (r3 == 0u) {
                a.r[0] = (u32)param_1;
                (void)tc_call(0x800dad3cu, &a);
            }
        }
    }
    wr32((u32)param_1 + 0x148u, 0u);
    return 0u;
}

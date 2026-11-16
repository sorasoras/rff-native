#include "tc_rt.h"

void fn_801a3958(s32 param_1, s32 param_2)
{
    u32 c0lt = 0, r3 = 0;
    TcArgs a = {0};
    c0lt = param_2 < 8;
    if ((u32)param_2 != 8u) {
        if (!c0lt) {
            return;
        }
        if ((u32)param_2 != 0u) {
            return;
        }
        r3 = rd32((u32)param_1 + 0xef0u);
        if (r3 == 0u) {
            return;
        }
        a.r[0] = r3;
        (void)tc_call(0x80157f30u, &a);
        wr32((u32)param_1 + 0xef0u, 0u);
    } else {
        r3 = rd32((u32)param_1 + 0xef4u);
        if (r3 != 0u) {
            a.r[0] = r3;
            (void)tc_call(0x80157f30u, &a);
            wr32((u32)param_1 + 0xef4u, 0u);
        }
    }
    return;
}

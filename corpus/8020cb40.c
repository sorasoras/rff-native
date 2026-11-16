#include "tc_rt.h"

void fn_8020cb40(u32 param_1, s32 param_2, s32 param_3)
{
    TcArgs a = {0};
    if ((rd32(param_1 + 0xcu) + 0x10000u) != 0xffffu) {
        a.r[0] = param_1 + 4u;
        (void)tc_call(0x8020c0f8u, &a);
        if ((u32)param_2 != 0xffffffffu && (u32)param_3 != 0xffffffffu) {
            if (rd32(param_1 + 0x15cu) == 0u) {
                return;
            }
            a.r[0] = param_1 + 0x148u;
            a.r[1] = (u32)param_2;
            a.r[2] = (u32)param_3;
            (void)tc_call(0x8020c6ecu, &a);
        }
        wr32(param_1, 0u);
    }
    return;
}

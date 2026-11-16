#include "tc_rt.h"

void fn_802dff50(s32 param_1, s32 param_2)
{
    u32 c0lt = 0, r0 = 0;
    c0lt = param_2 < 2;
    if ((u32)param_2 == 2u) {
        r0 = rd32(0x8039ca84u);
        wr32((u32)param_1 + 4u, rd32(0x8039ca80u));
        wr32((u32)param_1 + 8u, r0);
        wr32((u32)param_1 + 0xcu, rd32(0x8039ca88u));
        return;
    }
    if (c0lt) {
        c0lt = param_2 < 0;
        if ((u32)param_2 == 0u) {
            r0 = rd32(0x8039ca6cu);
            wr32((u32)param_1 + 4u, rd32(0x8039ca68u));
            wr32((u32)param_1 + 8u, r0);
            wr32((u32)param_1 + 0xcu, rd32(0x8039ca70u));
            return;
        }
        if (!c0lt) {
            r0 = rd32(0x8039ca78u);
            wr32((u32)param_1 + 4u, rd32(0x8039ca74u));
            wr32((u32)param_1 + 8u, r0);
            wr32((u32)param_1 + 0xcu, rd32(0x8039ca7cu));
            return;
        }
    }
    r0 = rd32(0x8039ca90u);
    wr32((u32)param_1 + 4u, rd32(0x8039ca8cu));
    wr32((u32)param_1 + 8u, r0);
    wr32((u32)param_1 + 0xcu, rd32(0x8039ca94u));
    return;
}

#include "tc_rt.h"

void fn_8015e0c4(s32 param_1)
{
    u32 r3 = 0, r4 = 0;
    TcArgs a = {0};
    wr32(rd32((u32)param_1 + 0x148u) + 0x78u, 1u);
    wr32(rd32((u32)param_1 + 0x148u) + 0x54u, 1u);
    r4 = rd32((u32)param_1 + 0x140u);
    wr32((u32)param_1 + 0x124u, 0u);
    if (r4 != 0xffffffffu) {
        a.r[0] = (u32)param_1;
        a.r[1] = r4;
        r3 = tc_call(0x800dacf8u, &a);
        if (r3 != 0xffffffffu) {
            return;
        }
        a.r[0] = (u32)param_1;
        (void)tc_call(0x800dad3cu, &a);
        a.r[0] = rd32((u32)param_1 + 0x140u);
        (void)tc_call(0x8014d968u, &a);
    } else {
        a.r[0] = (u32)param_1;
        (void)tc_call(0x800dad3cu, &a);
    }
    return;
}

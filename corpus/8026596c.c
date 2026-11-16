#include "tc_rt.h"

void fn_8026596c(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r31 = 0;
    TcArgs a = {0};
    r0 = (u32)((s32)ppc_mulhw(715827883, (s32)((u32)param_1 + 0x7faff450u)) >> 3);
    r0 = r0 + ((r0 >> 0x1fu) & 1u);
    r0 = (r0 << 5u) & 0xffffffe0u;
    r3 = rd32(r0 - 0x7faff510u);
    r31 = r0 - 0x7faff510u;
    if (r3 != 0xffffffffu) {
        a.r[0] = r3;
        a.r[1] = rd32(r31 + 4u);
        a.r[2] = rd32(r31 + 8u);
        a.r[3] = rd32(r31 + 0xcu);
        a.r[4] = rd32(r31 + 0x10u);
        a.r[5] = rd32(r31 + 0x14u);
        r3 = tc_call(0x80265534u, &a);
        if (r3 != 0u) {
            wr32(r31, 0xffffffffu);
        }
    }
    return;
}

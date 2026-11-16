#include "tc_rt.h"

u32 fn_802277c4(u32 param_1, s32 param_2)
{
    u32 ctr = 0, r3 = 0, t0 = 0;
    r3 = param_1;
    if ((u32)param_2 > 0u) {
        ctr = (((u32)param_2 + (param_1 & 0x1fu) + 0x1fu) >> 5u) & 0x7ffffffu;
        do {
            t0 = r3 & 0xffffffe0u;
            wr32(t0, 0u);
            wr32(t0 + 4u, 0u);
            wr32(t0 + 8u, 0u);
            wr32(t0 + 0xcu, 0u);
            wr32(t0 + 0x10u, 0u);
            wr32(t0 + 0x14u, 0u);
            wr32(t0 + 0x18u, 0u);
            wr32(t0 + 0x1cu, 0u);
            r3 = r3 + 0x20u;
            ctr = ctr - 1u;
        } while (ctr != 0u);
        return r3;
    }
    return param_1;
}

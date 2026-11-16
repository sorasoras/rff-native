#include "tc_rt.h"

u32 fn_8009c4e4(s32 param_1, u32 param_2)
{
    u32 r0 = 0, r6 = 0, r12 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = 0u;
    if ((u32)param_1 != 0u) {
        r6 = rd32((u32)param_1 + 0x14u);
        if (r6 == 0u || rd32((u32)param_1 + 0x18u) == 0u) {
            r12 = rd32(rd32((u32)param_1 + 0xcu) + 0x3cu);
            if (r12 != 0u) {
                a.r[0] = rd32((u32)param_1 + 0x20u);
                a.r[1] = rd32((u32)param_1 + 0x24u);
                a.r[2] = 0u;
                a.r[3] = r6;
                a.f[0] = 0.0;
                (void)tc_call(r12, &a);
            }
            wr32((u32)param_1 + 0x58u, 5u);
            wr32((u32)param_1 + 0x5cu, 1u);
        } else {
            r0 = rd32((u32)param_1 + 0x1cu) - 1u;
            wr32((u32)param_1 + 0x1cu, r0);
            if (param_2 != 0u) {
                r0 = (r0 << 2u) & 0xfffffffcu;
                r0 = rd32(r6 + r0);
                wr32(param_2, r0);
            }
            r31 = 1u;
        }
    }
    return r31;
}

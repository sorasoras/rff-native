#include "tc_rt.h"

u32 fn_8009c430(s32 param_1, u32 param_2)
{
    u32 r5 = 0, r6 = 0, r7 = 0, r12 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = 0u;
    if ((u32)param_1 != 0u) {
        r7 = rd32((u32)param_1 + 0x14u);
        if (r7 != 0u) {
            r5 = rd32((u32)param_1 + 0x1cu);
            r6 = rd32((u32)param_1 + 0x18u);
            if (r6 >= r5 && r6 >= (r5 + 1u)) {
                r31 = 1u;
                wr32(r7 + ((r5 << 2u) & 0xfffffffcu), param_2);
                wr32((u32)param_1 + 0x1cu, rd32((u32)param_1 + 0x1cu) + 1u);
                return r31;
            }
        }
        r12 = rd32(rd32((u32)param_1 + 0xcu) + 0x3cu);
        if (r12 != 0u) {
            a.r[0] = rd32((u32)param_1 + 0x20u);
            a.r[1] = rd32((u32)param_1 + 0x24u);
            a.r[2] = r5;
            a.r[3] = r6;
            a.r[4] = r7;
            a.f[0] = 0.0;
            (void)tc_call(r12, &a);
        }
        wr32((u32)param_1 + 0x58u, 5u);
        wr32((u32)param_1 + 0x5cu, 1u);
    }
    return r31;
}

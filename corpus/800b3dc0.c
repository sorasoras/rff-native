#include "tc_rt.h"

void fn_800b3dc0(s32 param_1)
{
    u32 r3 = 0, r4 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    if ((rd32((u32)param_1 + 0xe88u) & 0x80000000u) != 0u) {
        r3 = rd32((u32)param_1 + 0xda4u);
        if (r3 != 0u) {
            a.r[0] = r3;
            a.r[1] = (u32)param_1;
            a.f[0] = 0.0;
            f1 = tc_callf(rd32(rd32(r3) + 0x10u), &a);
            r3 = rd32((u32)param_1 + 0xda4u);
            a.r[0] = r3;
            a.r[1] = (u32)param_1;
            a.f[0] = f1;
            (void)tc_call(rd32(rd32(r3) + 0x1cu), &a);
            r4 = (u32)param_1 + ((rd32(rd32((u32)param_1 + 0xda4u) + 4u) << 2u) & 0xfffffffcu);
            wr32(r4 + 0xdacu, rd32(r4 + 0xdacu) + 1u);
            r4 = rd32((u32)param_1 + 0xcecu);
            wr32((u32)param_1 + 0xda8u, rd32((u32)param_1 + 0xda4u));
            wr32((u32)param_1 + 0xeb4u, r4);
            wr32((u32)param_1 + 0xda4u, 0u);
        }
    }
    return;
}

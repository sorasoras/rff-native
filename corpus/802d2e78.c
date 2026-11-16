#include "tc_rt.h"

void fn_802d2e78(u32 param_1, s32 param_2)
{
    u32 r3 = 0, r4 = 0, r31 = 0;
    TcArgs a = {0};
    if ((u32)param_2 != 0u) {
        r4 = (u32)param_2 + 1u;
        r31 = (r4 << 1u) & 0xfffeu;
        if (r31 > (u32)rd16(param_1 + 0xf8u)) {
            a.r[0] = param_1;
            a.r[1] = r4;
            a.f[0] = 0.0;
            (void)tc_call(rd32(rd32(param_1) + 0x68u), &a);
            a.r[0] = rd32(0x805474e0u);
            r3 = tc_call(0x8026d490u, &a);
            wr32(param_1 + 0xd4u, r3);
            if (r3 != 0u) {
                wr16(param_1 + 0xf8u, (u16)r31);
            }
        }
    }
    return;
}

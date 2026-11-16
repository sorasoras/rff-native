#include "tc_rt.h"

void fn_802e4aec(u32 param_1, u32 param_2)
{
    u32 r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    if (((u32)rd8(param_1 + 0xbbu) & 1u) != 0u) {
        a.r[0] = param_1;
        a.r[1] = param_2;
        a.f[0] = 0.0;
        f1 = tc_callf(rd32(rd32(param_1) + 0x18u), &a);
        r30 = param_1 + 0x14u;
        r31 = rd32(r30);
        while (r31 != r30) {
            a.r[0] = r31 - 4u;
            a.r[1] = param_2;
            a.f[0] = f1;
            f1 = tc_callf(rd32(rd32(r31 - 4u) + 0x14u), &a);
            r31 = rd32(r31);
        }
    }
    return;
}

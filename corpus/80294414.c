#include "tc_rt.h"

void fn_80294414(s32 param_1)
{
    u32 r12 = 0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    if (rd32((u32)param_1 + 0x10u) == 4u) {
        r12 = rd32(0x8053df1cu);
        wr8(0x817fdfe8u, 0xau);
        wr16(0x817fdff0u, 0u);
        wr32(0x8053df1cu, 0u);
        if (r12 != 0u) {
            a.r[0] = 0x817fdfe8u;
            a.r[1] = 0x8053d958u;
            a.f[0] = 0.0;
            (void)tc_call(r12, &a);
        }
    }
    return;
}

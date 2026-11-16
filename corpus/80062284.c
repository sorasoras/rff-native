#include "tc_rt.h"

void fn_80062284(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    if (rd32((u32)param_1 + 0x70u) != 0u) {
        r3 = tc_call(0x800545e4u, &a);
        a.r[0] = 0x80469958u;
        a.r[1] = rd32((u32)param_1 + 0x70u);
        a.r[2] = r3;
        (void)tc_call(0x80058638u, &a);
        wr32((u32)param_1 + 0x70u, 0u);
    }
    a.r[0] = (u32)param_1;
    (void)tc_call(0x80064ac8u, &a);
    wr32((u32)param_1 + 0xacu, 0xb7u);
    wr32((u32)param_1 + 0x144u, 0u);
    wr32((u32)param_1 + 0xf4u, 0u);
    wr32((u32)param_1 + 0xe0u, 0u);
    return;
}

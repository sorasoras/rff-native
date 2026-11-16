#include "tc_rt.h"

void fn_8017ea84(s32 param_1)
{
    u32 r0 = 0, r3 = 0;
    TcArgs a = {0};
    r0 = rd32((u32)param_1 + 0x78u);
    if (r0 != 0u) {
        a.r[0] = r0;
        (void)tc_call(0x80157e6cu, &a);
        wr32((u32)param_1 + 0x78u, 0u);
    }
    r3 = rd32((u32)param_1 + 0x80u);
    wr32((u32)param_1 + 0x7cu, 0u);
    if (r3 != 8u) {
        a.r[0] = r3;
        a.r[1] = 1u;
        (void)tc_call(0x8017fde4u, &a);
    }
    a.r[0] = (u32)param_1 + 0xacu;
    a.r[1] = 0u;
    a.r[2] = 4u;
    (void)tc_call(0x8000443cu, &a);
    return;
}

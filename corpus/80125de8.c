#include "tc_rt.h"

void fn_80125de8(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 0x44u;
    (void)tc_call(0x8007ae84u, &a);
    a.r[0] = (u32)param_1 + 0x1acu;
    (void)tc_call(0x8007ae84u, &a);
    r3 = rd32((u32)param_1 + 0x3cu);
    if (r3 != 0u) {
        a.r[0] = r3;
        (void)tc_call(0x800fec80u, &a);
    }
    a.r[0] = (u32)param_1;
    (void)tc_call(0x801973e0u, &a);
    a.r[0] = (u32)param_1 + 0x320u;
    (void)tc_call(0x8019087cu, &a);
    if (rd32(rd32(0x805711ccu) + 0xfcu) != 2u) {
        a.r[0] = (u32)param_1 + 0x3e8u;
        a.r[1] = 5u;
        (void)tc_call(0x801e6354u, &a);
    } else {
        a.r[0] = (u32)param_1 + 0x3e8u;
        a.r[1] = 0xbu;
        (void)tc_call(0x801e6354u, &a);
    }
    a.r[0] = (u32)param_1 + 0x3e8u;
    (void)tc_call(0x801e6364u, &a);
    return;
}

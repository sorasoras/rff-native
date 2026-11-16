#include "tc_rt.h"

void fn_800fa810(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    r3 = tc_call(0x800fb14cu, &a);
    if (r3 != 0u) {
        a.r[0] = (u32)param_1;
        r3 = tc_call(0x800fb14cu, &a);
        a.r[0] = r3;
        (void)tc_call(0x80185b88u, &a);
    }
    a.r[0] = rd32((u32)param_1 + 0x1cu) + 4u;
    a.r[1] = 0xau;
    (void)tc_call(0x800f8544u, &a);
    return;
}

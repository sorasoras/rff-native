#include "tc_rt.h"

void fn_800fa860(u32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = param_1;
    r3 = tc_call(0x800fb14cu, &a);
    if (r3 != 0u) {
        a.r[0] = param_1;
        r3 = tc_call(0x800fb14cu, &a);
        a.r[0] = r3;
        (void)tc_call(0x80185b88u, &a);
    }
    a.r[0] = rd32(rd32(0x80571398u) + 0x38u);
    (void)tc_call(0x801c13d4u, &a);
    a.r[0] = param_1;
    (void)tc_call(0x80221898u, &a);
    return;
}

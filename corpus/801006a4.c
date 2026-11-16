#include "tc_rt.h"

void fn_801006a4(u32 param_1, u32 param_2, u32 param_3)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    if (param_2 != 0u && (u32)rd16(param_2) != 0u) {
        r3 = tc_call(0x80052c3cu, &a);
        r31 = r3;
        a.r[0] = r3;
        (void)tc_call(0x800cb808u, &a);
        a.r[0] = r31;
        a.r[1] = param_3;
        (void)tc_call(0x800cd5b0u, &a);
        a.r[0] = param_1;
        a.r[1] = param_2;
        a.r[2] = r31;
        (void)tc_call(0x80100890u, &a);
    }
    return;
}

#include "tc_rt.h"

void fn_8013dcb0(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    if ((u32)rd8(0x8049912au) == rd32((u32)param_1 + 0x25cu)) {
        r3 = (u32)rd8(0x8049912eu);
        if (r3 != 0x21u) {
            a.r[0] = r3;
            r3 = tc_call(0x800a4500u, &a);
            if (r3 != 0u) {
                wr32(r3 + 0xb20u, 0u);
            }
        }
    }
    a.r[0] = (u32)param_1;
    (void)tc_call(0x8013e23cu, &a);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x80093a5cu, &a);
    return;
}

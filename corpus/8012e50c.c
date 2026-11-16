#include "tc_rt.h"

u32 fn_8012e50c(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = rd32((u32)param_1 + 0x1cu);
    a.r[1] = 1u;
    r3 = tc_call(0x8012c2acu, &a);
    if (r3 != 0u) {
        a.r[0] = 0x804b9da0u;
        a.r[1] = 0x2741u;
        (void)tc_call(0x8010a75cu, &a);
        r3 = 0u;
    } else {
        r3 = 1u;
    }
    return r3;
}

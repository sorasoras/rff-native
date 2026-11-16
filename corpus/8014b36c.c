#include "tc_rt.h"

void fn_8014b36c(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    r3 = tc_call(0x8014b364u, &a);
    if (r3 != 0u) {
        a.r[0] = (u32)param_1 + 0x10u;
        a.r[1] = 1u;
        (void)tc_call(0x800f857cu, &a);
        r3 = rd32((u32)param_1 + 0xcu);
        if (r3 != 0u) {
            a.r[0] = r3;
            (void)tc_call(0x800fec80u, &a);
        }
    }
    return;
}

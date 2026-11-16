#include "tc_rt.h"

u32 fn_8012b384(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = rd32((u32)param_1 + 0x1cu);
    r3 = tc_call(0x8012ac00u, &a);
    if (r3 != 0u) {
        r3 = tc_call(0x8012aafcu, &a);
        a.r[0] = r3;
        a.r[1] = 0u;
        (void)tc_call(0x8011a004u, &a);
        r3 = 0u;
    } else {
        r3 = 1u;
    }
    return r3;
}

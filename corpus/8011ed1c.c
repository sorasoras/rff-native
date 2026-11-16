#include "tc_rt.h"

u32 fn_8011ed1c(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = 0x80362978u;
    r3 = tc_call(0x80255850u, &a);
    if (r3 != 0u) {
        a.r[0] = rd32((u32)param_1 + 0x1cu);
        a.r[1] = 1u;
        (void)tc_call(0x8011ea88u, &a);
    }
    return 1u;
}

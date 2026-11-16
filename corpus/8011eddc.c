#include "tc_rt.h"

u32 fn_8011eddc(s32 param_1)
{
    u32 r4 = 0;
    TcArgs a = {0};
    r4 = rd32((u32)param_1 + 0x1cu);
    if (rd32(r4 + 0x5cu) != 0u) {
        a.r[0] = r4;
        a.r[1] = 2u;
        (void)tc_call(0x8011ea88u, &a);
        wr32(rd32((u32)param_1 + 0x1cu) + 0x5cu, 0u);
    }
    return 1u;
}

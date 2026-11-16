#include "tc_rt.h"

u32 fn_8011ed80(s32 param_1)
{
    u32 r5 = 0;
    TcArgs a = {0};
    r5 = rd32((u32)param_1 + 0x1cu);
    if (rd32(r5 + 0x50u) != 0u) {
        wr32(r5 + 0xcu, 0xffffffffu);
        a.r[0] = rd32((u32)param_1 + 0x1cu);
        a.r[1] = 3u;
        (void)tc_call(0x8011ea88u, &a);
        wr32(rd32((u32)param_1 + 0x1cu) + 0x5cu, 0u);
    }
    return 1u;
}

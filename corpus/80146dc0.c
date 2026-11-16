#include "tc_rt.h"

void fn_80146dc0(s32 param_1)
{
    u32 r31 = 0;
    TcArgs a = {0};
    r31 = 0u;
    do {
        a.r[0] = (u32)param_1;
        a.r[1] = r31;
        (void)tc_call(0x80146d8cu, &a);
        r31 = r31 + 1u;
    } while (r31 < 0xau);
    wr32((u32)param_1 + 0xd8cu, 0u);
    wr32((u32)param_1 + 0xd90u, 0u);
    wr32((u32)param_1 + 0xd94u, 9u);
    wr16((u32)param_1 + 0xd98u, 0u);
    wr32((u32)param_1 + 0xe1cu, 0xau);
    wr32((u32)param_1 + 0xe20u, 0u);
    wr8((u32)param_1 + 0xe2cu, 3u);
    wr8((u32)param_1 + 0xe2du, 3u);
    wr32((u32)param_1 + 0xe28u, 0xffffffffu);
    return;
}

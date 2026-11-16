#include "tc_rt.h"

void fn_800ac5dc(s32 param_1)
{
    u32 r4 = 0;
    TcArgs a = {0};
    r4 = rd32((u32)param_1 + 0x58u);
    if (r4 != 0u && rd32((u32)param_1 + 0xcu) == 2u) {
        a.r[0] = r4;
        (void)tc_call(0x800ac540u, &a);
        wr32((u32)param_1 + 0x58u, 0u);
    }
    return;
}

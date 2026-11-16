#include "tc_rt.h"

u32 fn_800614e4(s32 param_1)
{
    TcArgs a = {0};
    wr32(0x80571138u, 0u);
    wr32(0x8057113cu, 0u);
    wr32((u32)param_1 + 0x14u, 0u);
    wr32((u32)param_1 + 0xcu, 0u);
    wr32(0x804b9e08u, 0u);
    (void)tc_call(0x8003c20cu, &a);
    wr32(0x80571124u, 0u);
    a.r[0] = 0u;
    (void)tc_call(0x80035b6cu, &a);
    return 1u;
}

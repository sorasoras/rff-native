#include "tc_rt.h"

void fn_80284c8c(u32 param_1)
{
    TcArgs a = {0};
    (void)param_1;
    (void)tc_call(0x80289ba4u, &a);
    if ((u32)rd8(0x8050f10du) != 0u) {
        wr8(0x8050f10du, 8u);
    }
    return;
}

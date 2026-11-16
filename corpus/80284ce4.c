#include "tc_rt.h"

void fn_80284ce4(u32 param_1)
{
    TcArgs a = {0};
    (void)param_1;
    (void)tc_call(0x80289ba4u, &a);
    wr8(0x8050f111u, 3u);
    return;
}

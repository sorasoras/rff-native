#include "tc_rt.h"

void fn_80284d30(u32 param_1)
{
    TcArgs a = {0};
    (void)param_1;
    (void)tc_call(0x80289ba4u, &a);
    wr8(0x8050f110u, 4u);
    return;
}

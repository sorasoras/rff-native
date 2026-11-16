#include "tc_rt.h"

void fn_80284c14(s32 param_1)
{
    TcArgs a = {0};
    (void)tc_call(0x80289ba4u, &a);
    if ((u32)rd8(0x8050f10cu) != 0u) {
        if ((u32)param_1 == 0u) {
            wr8(0x8050f10cu, 0x17u);
        } else {
            wr8(0x8050f10cu, 0xffu);
        }
    }
    return;
}

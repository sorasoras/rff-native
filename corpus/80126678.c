#include "tc_rt.h"

void fn_80126678(s32 param_1)
{
    TcArgs a = {0};
    if (rd32((u32)param_1 + 0x40u) != 8u) {
        a.r[0] = (u32)param_1 + 0x3e8u;
        (void)tc_call(0x801e63e8u, &a);
        a.r[0] = (u32)param_1;
        (void)tc_call(0x80197794u, &a);
        a.r[0] = 0x804b9da0u;
        a.r[1] = 0xbu;
        (void)tc_call(0x8010a75cu, &a);
    }
    return;
}

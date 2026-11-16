#include "tc_rt.h"

void fn_800fb410(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 0x70u;
    (void)tc_call(0x80210870u, &a);
    (void)tc_call(0x800f974cu, &a);
    a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x9c8u;
    (void)tc_call(0x8019124cu, &a);
    a.r[0] = rd32((u32)param_1 + 0x24u);
    (void)tc_call(0x80184bb8u, &a);
    a.r[0] = rd32((u32)param_1 + 0x28u);
    (void)tc_call(0x80185910u, &a);
    a.r[0] = rd32((u32)param_1 + 0x28u);
    (void)tc_call(0x80197674u, &a);
    a.r[0] = rd32((u32)param_1 + 0x24u);
    (void)tc_call(0x80197674u, &a);
    return;
}

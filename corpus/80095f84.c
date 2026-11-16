#include "tc_rt.h"

void fn_80095f84(s32 param_1, s32 param_2)
{
    TcArgs a = {0};
    wr32((u32)param_1 + 0xfcu, rd32((u32)param_1 + 0xfcu) + 1u);
    a.r[0] = (u32)param_1 + 0xd8u;
    a.r[1] = (u32)param_2;
    (void)tc_call(0x8007b03cu, &a);
    wr32((u32)param_2 + 0x160u, rd32((u32)param_1 + 0xdcu));
    a.r[0] = 0x8046ad74u;
    a.r[1] = (u32)param_2;
    (void)tc_call(0x8007b03cu, &a);
    wr32((u32)param_2 + 0x15cu, rd32(0x8046ad78u));
    return;
}

#include "tc_rt.h"

s32 fn_800c90fc(s32 param_1, s32 param_2)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 0x20u;
    a.r[1] = (u32)param_2;
    a.r[2] = 0x73cu;
    (void)tc_call(0x80004338u, &a);
    a.r[0] = (u32)param_1 + 0x760u;
    a.r[1] = (u32)param_2 + 0x740u;
    a.r[2] = 0xd90u;
    (void)tc_call(0x80004338u, &a);
    return (s32)((u32)param_2 + 0x14e0u);
}

#include "tc_rt.h"

void fn_80080f48(s32 param_1, s32 param_2, s32 param_3, s32 param_4, s32 param_5)
{
    TcArgs a = {0};
    if ((u32)param_1 != 0xffu) {
        wr8(0x80492825u, (u8)param_1);
    }
    if ((u32)param_2 != 0xffu) {
        wr8(0x80492824u, (u8)param_2);
    }
    if ((u32)param_3 != 0xffu) {
        wr8(0x80492823u, (u8)param_3);
    }
    if ((u32)param_4 != 0xffu) {
        wr8(0x80492822u, (u8)param_4);
    }
    if ((u32)param_5 != 0xffu) {
        wr8(0x80492821u, (u8)param_5);
    }
    a.r[0] = 0x8046d8c8u;
    (void)tc_call(0x8008c9f0u, &a);
    return;
}

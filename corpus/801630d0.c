#include "tc_rt.h"

void fn_801630d0(s32 param_1, s32 param_2)
{
    u32 c0lt = 0;
    TcArgs a = {0};
    c0lt = param_2 < 2;
    if ((u32)param_2 == 2u) {
        a.r[0] = (u32)param_1;
        (void)tc_call(0x80163598u, &a);
    } else if (!c0lt) {
        if (param_2 < 4) {
            a.r[0] = (u32)param_1;
            (void)tc_call(0x801635f0u, &a);
            wr32((u32)param_1 + 0x70u, 0xffffffffu);
        }
    } else {
        c0lt = param_2 < 0;
        if ((u32)param_2 == 0u) {
            a.r[0] = (u32)param_1;
            (void)tc_call(0x80163144u, &a);
        } else if (!c0lt) {
            a.r[0] = (u32)param_1;
            (void)tc_call(0x80163158u, &a);
        }
    }
    return;
}

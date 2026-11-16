#include "tc_rt.h"

s32 fn_8011c9f8(s32 param_1, s32 param_2)
{
    u32 r3 = 0;
    TcArgs a = {0};
    if ((u32)param_1 != 0u) {
        wr32((u32)param_1 + 0x9a4u, 0x80362910u);
        a.r[0] = (u32)param_1;
        (void)tc_call(0x8011ca88u, &a);
        a.r[0] = (u32)param_1 + 0xd0u;
        a.r[1] = 0xffffffffu;
        (void)tc_call(0x802ed9f4u, &a);
        if (((u32)param_1 + 0x18u) != 0u) {
            r3 = (u32)param_1 + 0x3cu;
            if (r3 != 0u) {
                a.r[0] = r3;
                a.r[1] = 0u;
                (void)tc_call(0x802dea2cu, &a);
            }
            a.r[0] = (u32)param_1 + 0x18u;
            a.r[1] = 0u;
            (void)tc_call(0x802eef60u, &a);
        }
        if (param_2 > 0) {
            (void)tc_call(0x80040cd4u, &a);
        }
    }
    return param_1;
}

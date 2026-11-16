#include "tc_rt.h"

s32 fn_8011c970(s32 param_1)
{
    u32 r30 = 0, r31 = 0;
    TcArgs a = {0};
    wr32((u32)param_1 + 0x9a4u, 0x80362910u);
    a.r[0] = (u32)param_1 + 0x18u;
    (void)tc_call(0x802ef1c4u, &a);
    a.r[0] = (u32)param_1 + 0xd0u;
    (void)tc_call(0x802ed980u, &a);
    r30 = (u32)param_1 + 0x13cu;
    r31 = (u32)param_1 + 0x83cu;
    do {
        a.r[0] = r30;
        (void)tc_call(0x8011c7f4u, &a);
        r30 = r30 + 0x38u;
    } while (r30 < r31);
    wr32((u32)param_1 + 0x14u, 0u);
    wr32((u32)param_1 + 0xc8u, 0u);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x8011ca88u, &a);
    return param_1;
}

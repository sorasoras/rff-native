#include "tc_rt.h"

void fn_8011b138(u32 param_1)
{
    u32 r31 = 0;
    TcArgs a = {0};
    r31 = 0u;
    do {
        a.r[0] = param_1;
        a.r[1] = r31;
        (void)tc_call(0x8011b288u, &a);
        r31 = r31 + 1u;
    } while ((s32)r31 < 4);
    wr32(0x80571198u, rd32(0x80571198u) | 0xfffu);
    return;
}

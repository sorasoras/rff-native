#include "tc_rt.h"

void fn_8011e538(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = rd32(param_1);
    (void)tc_call(0x8011e4f4u, &a);
    return;
}

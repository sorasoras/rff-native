#include "tc_rt.h"

void fn_8011f6bc(u32 param_1, u32 param_2)
{
    (void)param_1;
    wr32(0x80571290u, param_2);
    return;
}

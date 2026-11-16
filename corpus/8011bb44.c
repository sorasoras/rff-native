#include "tc_rt.h"

void fn_8011bb44(u32 param_1)
{
    wr32(param_1, 0xffffffffu);
    wr32(param_1 + 4u, 0xffffffffu);
    return;
}

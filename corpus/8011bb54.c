#include "tc_rt.h"

u32 fn_8011bb54(u32 param_1)
{
    return ((rd32(param_1) >> 0x1fu) & 1u) ^ 1u;
}

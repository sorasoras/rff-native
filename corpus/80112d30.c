#include "tc_rt.h"

u32 fn_80112d30(u32 param_1)
{
    u32 r0 = 0;
    if (rd32(param_1 + 0x40u) != 0u) {
        r0 = rd32(param_1);
    } else {
        r0 = 0xffffffffu;
    }
    if (r0 == 4u) {
        return 1u;
    }
    return 0u;
}

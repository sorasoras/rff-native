#include "tc_rt.h"

u32 fn_80255850(u32 param_1)
{
    u32 c6eq = 0, c7eq = 0;
    c6eq = rd32(param_1 + 4u) == 0u;
    c7eq = rd32(param_1 + 8u) == 0u;
    if (rd32(param_1) == 0u) {
        if (!c6eq) {
            return 1u;
        }
        if (!c7eq) {
            return 1u;
        }
        return 0u;
    }
    return 1u;
}

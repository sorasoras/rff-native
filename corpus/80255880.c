#include "tc_rt.h"

u32 fn_80255880(u32 param_1, u32 param_2)
{
    u32 c6eq = 0, c7eq = 0;
    c6eq = rd32(param_1 + 4u) == rd32(param_2 + 4u);
    c7eq = rd32(param_1 + 8u) == rd32(param_2 + 8u);
    if (rd32(param_1) == rd32(param_2)) {
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

#include "tc_rt.h"

void fn_8030571c(u32 param_1)
{
    u32 r4 = 0;
    r4 = rd32(param_1);
    if (r4 != 0u) {
        if (rd32(r4 + 8u) == param_1) {
            wr32(r4 + 8u, 0u);
        }
        r4 = rd32(param_1);
        if (rd32(r4 + 0xcu) == param_1) {
            wr32(r4 + 0xcu, 0u);
        }
    }
    if (rd32(param_1) != 0u) {
        wr32(param_1, 0u);
        return;
    }
    return;
}

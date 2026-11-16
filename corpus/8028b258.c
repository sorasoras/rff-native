#include "tc_rt.h"

void fn_8028b258(s32 param_1)
{
    u32 c0lt = 0, r3 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x8028b77cu, &a);
    c0lt = param_1 < 1;
    if ((u32)param_1 != 1u) {
        if (!c0lt) {
            return;
        }
        if (param_1 < 0) {
            return;
        }
        r3 = (r3 << 2u) & 0x3fcu;
        r3 = r3 - 0x7fabef58u;
        wr32(r3 - 0x7780u, 0u);
        wr32(r3 - 0x77a0u, 0u);
    } else {
        r3 = (r3 << 2u) & 0x3fcu;
        r3 = r3 - 0x7fabef58u;
        wr32(r3 - 0x7740u, 0u);
        wr32(r3 - 0x7760u, 0u);
    }
    return;
}

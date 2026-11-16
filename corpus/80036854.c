#include "tc_rt.h"

u32 fn_80036854(void)
{
    u32 r3 = 0;
    r3 = rd32(0x803a4ba8u);
    if (r3 == 0u) {
        return 0u;
    }
    wr32(0x803a4ba8u, rd32(r3));
    wr32(r3, 0u);
    return r3;
}

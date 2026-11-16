#include "tc_rt.h"

u32 fn_80038b40(void)
{
    u32 r3 = 0;
    TcArgs a = {0};
    if (rd32(0x803af118u) == 0u) {
        a.r[0] = 1u;
        (void)tc_call(0x8003893cu, &a);
        r3 = 0u;
    } else {
        r3 = 1u;
    }
    return r3;
}

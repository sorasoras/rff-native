#include "tc_rt.h"

u32 fn_801082e0(u32 param_1)
{
    u32 r5 = 0;
    TcArgs a = {0};
    r5 = rd32(rd32(rd32(0x80571398u) + 0x38u) + 0x20u) + (u32)rd16(0x80499084u);
    if ((s32)r5 < 0) {
        r5 = 0u;
    } else {
        if ((s32)r5 > 999) {
            r5 = 0x3e7u;
        }
    }
    a.r[0] = param_1;
    a.r[1] = 0u;
    a.r[2] = r5;
    (void)tc_call(0x80100bb4u, &a);
    return 1u;
}

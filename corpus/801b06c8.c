#include "tc_rt.h"

u32 fn_801b06c8(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    if (rd32(0x805706e8u) != 1u) {
        r3 = 0u;
    } else {
        if ((u32)param_1 != 0x24u) {
            r3 = 0u;
        } else {
            a.r[0] = 0x48u;
            a.r[1] = 1u;
            (void)tc_call(0x8014d9dcu, &a);
            r3 = 1u;
        }
    }
    return r3;
}

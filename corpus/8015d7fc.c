#include "tc_rt.h"

u32 fn_8015d7fc(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 0x10u;
    r3 = tc_call(0x8015c5dcu, &a);
    if (r3 != 0u) {
        a.r[0] = (u32)param_1 + 0x10u;
        r3 = tc_call(0x8015c5c8u, &a);
        if (r3 == 0u) {
            r3 = 1u;
            return r3;
        }
    }
    if (rd32((u32)param_1 + 0x4b0u) != 0u) {
        a.r[0] = (u32)param_1 + 0xcu;
        r3 = tc_call(0x8015ca60u, &a);
        if (r3 != 0u) {
            r3 = 1u;
            return r3;
        }
    }
    r3 = 0u;
    return r3;
}

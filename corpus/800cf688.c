#include "tc_rt.h"

u32 fn_800cf688(s32 param_1)
{
    u32 r0 = 0, r3 = 0;
    TcArgs a = {0};
    r0 = rd32((u32)param_1 + 4u);
    if (r0 == 0u) {
        a.r[0] = 0x804b14d4u;
        a.r[1] = (u32)param_1;
        (void)tc_call(0x8007b03cu, &a);
        wr32((u32)param_1 + 0x10u, rd32(0x804b14d8u));
    } else {
        if (r0 == 1u) {
            a.r[0] = 0x804b14fcu;
            a.r[1] = (u32)param_1;
            (void)tc_call(0x8007b03cu, &a);
            wr32((u32)param_1 + 0x10u, rd32(0x804b1500u));
        } else {
            r3 = 0u;
            return r3;
        }
    }
    r3 = 1u;
    return r3;
}

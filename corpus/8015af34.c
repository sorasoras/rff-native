#include "tc_rt.h"

u32 fn_8015af34(s32 param_1, u32 param_2)
{
    u32 r0 = 0, r3 = 0, r31 = 0;
    TcArgs a = {0};
    if ((u32)param_1 == 0u) {
        r3 = 0u;
    } else {
        r3 = rd32((u32)param_1 + 0x34u);
        r31 = rd32(r3 + 0x14u);
        a.r[0] = r3;
        r3 = tc_call(0x802ee834u, &a);
        r0 = rd32(r31 + 0x14u);
        if (r0 == 0u) {
            r3 = 0u;
        } else {
            a.r[0] = r0;
            a.r[1] = r3;
            r3 = tc_call(0x802e5528u, &a);
            if (r3 == 0u) {
                r3 = 0u;
            } else {
                r0 = r3 + 0xcu;
                if (param_2 != 0u) {
                    wr32(param_2, r0);
                }
                r3 = 1u;
            }
        }
    }
    return r3;
}

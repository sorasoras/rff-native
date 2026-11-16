#include "tc_rt.h"

u32 fn_802761b0(s32 param_1, u32 param_2, u32 param_3)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    a.r[1] = param_2;
    r3 = tc_call(0x80275d08u, &a);
    r5 = rd32((u32)param_1 + 4u);
    if ((s32)r3 >= 0) {
        r4 = r3 * 0xcu;
        if ((rd32(r5 + r4) & 0xff000000u) != 0u) {
            r0 = r3 + 1u;
            wr32(param_3 + 4u, r3);
            r4 = r5 + r4;
            r3 = 1u;
            wr32(param_3, (u32)param_1);
            wr32(param_3 + 8u, r0);
            wr32(param_3 + 0xcu, rd32(r4 + 8u));
            return r3;
        }
    }
    r3 = 0u;
    return r3;
}

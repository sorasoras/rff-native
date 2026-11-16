#include "tc_rt.h"

u32 fn_8010ebd4(u32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    u32 r3 = 0, r5 = 0, r6 = 0;
    TcArgs a = {0};
    (void)param_1;
    r5 = param_3;
    r6 = param_4;
    wr32(0x817fdfa0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    if (param_3 == 0u) {
        r3 = tc_call(0x80097da4u, &a);
        r3 = rd32(r3);
        a.r[0] = r3;
        a.r[1] = param_2;
        a.r[2] = 0x817fdfa8u;
        r3 = tc_call(0x800a2f2cu, &a);
        if (r3 == 0u) {
            r3 = 1u;
            return r3;
        }
        r5 = 0x817fdfa8u;
        r6 = rd32(0x817fdfe8u);
    }
    a.r[0] = param_2;
    a.r[1] = r5;
    a.r[2] = r6;
    r3 = tc_call(0x8010d6f0u, &a);
    r3 = (ppc_cntlzw(r3) >> 5u) & 0x7ffffffu;
    return r3;
}

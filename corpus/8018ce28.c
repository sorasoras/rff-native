#include "tc_rt.h"

u32 fn_8018ce28(s32 param_1)
{
    u32 r0 = 0, r3 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    r3 = tc_call(0x8018d1b0u, &a);
    if (r3 == 0u) {
        r3 = 0u;
    } else {
        a.r[0] = (u32)param_1;
        r3 = tc_call(0x8018ceb4u, &a);
        a.r[0] = (u32)param_1;
        a.r[1] = r3;
        (void)tc_call(0x8018d734u, &a);
        a.r[0] = (u32)param_1;
        a.r[1] = 1u;
        a.r[2] = 1u;
        a.r[3] = 0u;
        (void)tc_call(0x8018d1e8u, &a);
        wr32((u32)param_1 + 0x84u, 0x11u);
        r3 = 1u;
        r0 = rd32(0x8036fec4u);
        wr32((u32)param_1 + 0x38u, rd32(0x8036fec0u));
        wr32((u32)param_1 + 0x3cu, r0);
        wr32((u32)param_1 + 0x40u, rd32(0x8036fec8u));
    }
    return r3;
}

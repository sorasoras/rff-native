#include "tc_rt.h"

u32 fn_802b70b4(u32 param_1, s32 param_2)
{
    u32 r3 = 0, r5 = 0;
    TcArgs a = {0};
    r5 = (u32)rd16(param_1);
    if (r5 != ((u32)rd16((u32)param_2 + 6u) & 0xfffu)) {
        r3 = 0u;
    } else {
        if (r5 == 2u) {
            r3 = (ppc_cntlzw((u32)rd16((u32)param_2 + 8u) - (u32)rd16(param_1 + 4u)) >> 5u) & 0xffu;
        } else {
            if (r5 == 4u) {
                r3 = (ppc_cntlzw(rd32((u32)param_2 + 8u) - rd32(param_1 + 4u)) >> 5u) & 0xffu;
            } else {
                a.r[0] = param_1 + 4u;
                a.r[1] = (u32)param_2 + 8u;
                a.r[2] = 0x10u;
                r3 = tc_call(0x802592d8u, &a);
                r3 = (ppc_cntlzw(r3) >> 5u) & 0xffu;
            }
        }
    }
    return r3;
}

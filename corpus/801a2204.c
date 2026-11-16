#include "tc_rt.h"

void fn_801a2204(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    if (rd32((u32)param_1 + 0xdc0u) == 0u) {
        a.r[0] = (u32)param_1;
        (void)tc_call(0x801a23d0u, &a);
    } else {
        r3 = tc_call(0x80040b64u, &a);
        if ((r3 - (((ppc_mulhwu(0xcccccccdu, r3) >> 3u) & 0x1fffffffu) * 0xau)) < 8u) {
            a.r[0] = (u32)param_1;
            a.r[1] = 0x10u;
            (void)tc_call(0x801a1e2cu, &a);
            wr32((u32)param_1 + 0x260u, 6u);
        } else {
            a.r[0] = (u32)param_1;
            a.r[1] = 0xbu;
            (void)tc_call(0x801a1e2cu, &a);
        }
    }
    return;
}

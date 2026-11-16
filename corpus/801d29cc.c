#include "tc_rt.h"

void fn_801d29cc(s32 param_1)
{
    u32 r3 = 0, r6 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 0x354u;
    r3 = tc_call(0x80255850u, &a);
    if (r3 == 0u) {
        a.r[0] = (u32)param_1;
        a.r[1] = 2u;
        a.r[2] = 1u;
        a.r[3] = 0u;
        (void)tc_call(0x801d204cu, &a);
    } else {
        a.r[0] = (u32)param_1;
        r3 = tc_call(0x802558bcu, &a);
        if (r3 == 0u) {
            a.r[0] = (u32)param_1;
            a.r[1] = 1u;
            a.r[2] = 0u;
            (void)tc_call(0x801d2be8u, &a);
            r6 = 0u;
            if (rd32((u32)param_1 + 0x350u) == 0u) {
                wr32((u32)param_1 + 0x350u, 2u);
                r3 = tc_call(0x80040b64u, &a);
                r6 = ((r3 - (((ppc_mulhwu(0xaaaaaaabu, r3) >> 2u) & 0x3fffffffu) * 6u)) << 3u) & 0xfffffff8u;
            }
            a.r[0] = (u32)param_1;
            a.r[1] = rd32((u32)param_1 + 0x350u);
            a.r[2] = 1u;
            a.r[3] = r6;
            (void)tc_call(0x801d204cu, &a);
            wr32((u32)param_1 + 0x350u, 0u);
        }
    }
    return;
}

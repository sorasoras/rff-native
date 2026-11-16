#include "tc_rt.h"

u32 fn_801cd370(s32 param_1, s32 param_2)
{
    u32 r3 = 0, r4 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = 1u;
    if ((u32)param_2 == 0u) {
        r30 = 0u;
        r3 = tc_call(0x80040b64u, &a);
        if ((r3 - (((ppc_mulhwu(0xcccccccdu, r3) >> 4u) & 0xfffffffu) * 0x14u)) < 0xau) {
            r30 = 1u;
        }
        a.r[0] = (u32)param_1;
        a.r[1] = r30;
        a.r[2] = 3u;
        a.r[3] = 0u;
        (void)tc_call(0x801ce348u, &a);
        r30 = r30 + 1u;
        r4 = (r30 >> 0x1fu) & 1u;
        r4 = ((r30 & 1u) ^ r4) - r4;
        a.r[0] = (u32)param_1;
        a.r[1] = r4;
        a.r[2] = 3u;
        a.r[3] = 0x140000u;
        (void)tc_call(0x801ce348u, &a);
        wr32((u32)param_1 + 0xd28u, 0u);
        wr32((u32)param_1 + 0xd18u, 0u);
    } else {
        if ((u32)param_2 == 1u) {
            if (rd32((u32)param_1 + 0xd28u) != 1u) {
                a.r[0] = (u32)param_1;
                r3 = tc_call(0x801cd018u, &a);
                if (r3 == 0u) {
                    return r31;
                }
            }
            r31 = 0u;
        }
    }
    return r31;
}

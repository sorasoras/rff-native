#include "tc_rt.h"

void fn_802f47ec(s32 param_1, s32 param_2, u32 param_3)
{
    u32 r0 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff0u, 0u);
    if ((u32)rd8((u32)param_1 + 0x24u) == 0u) {
        r30 = (u32)param_2;
        r29 = 0u;
        r0 = (ppc_mulhwu(0x38e38e39u, param_3) >> 4u) & 0xfffffffu;
        wr32((u32)param_1 + 0x28u, r0);
        if (r0 != 0u) {
            r31 = (u32)param_1 + 0x10u;
            while (r29 < rd32((u32)param_1 + 0x28u)) {
                wr32(0x817fdfe8u, r31);
                a.r[0] = (u32)param_1 + 0xcu;
                a.r[1] = 0x817fdfe8u;
                a.r[2] = r30 + 0x40u;
                (void)tc_call(0x802deba4u, &a);
                r30 = r30 + 0x48u;
                r29 = r29 + 1u;
            }
        }
        wr8((u32)param_1 + 0x24u, 1u);
    }
    return;
}

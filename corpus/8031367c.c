#include "tc_rt.h"

void fn_8031367c(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(0x817fdf90u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    if ((rd32((u32)param_1 + 0x20u) & 0x200u) == 0u && rd32((u32)param_1 + 0xb4u) == 0u) {
        r0 = (u32)rd16((u32)param_1 + 0xe8u);
        wr32((u32)param_1 + 0xb4u, 1u);
        if (r0 != 0u) {
            r4 = rd32((u32)param_1 + 0xbcu);
            wr32(r4 + 0x50u, rd32(r4 + 0x50u) | 0x10000u);
        }
        if (rd32((u32)param_1 + 0xcu) == 1u) {
            a.r[0] = (u32)param_1 + 0xc0u;
            a.r[1] = 0u;
            r3 = tc_call(0x802de9f0u, &a);
            r31 = r3;
            a.r[0] = r3;
            a.r[1] = 0x817fdf98u;
            (void)tc_call(0x8031efa8u, &a);
            a.r[0] = 0x817fdf98u;
            a.r[1] = 0x817fdf98u;
            (void)tc_call(0x8023386cu, &a);
            a.r[0] = (u32)param_1;
            a.r[1] = 0x817fdfc8u;
            (void)tc_call(0x80313b9cu, &a);
            a.r[0] = 0x817fdf98u;
            a.r[1] = 0x817fdfc8u;
            a.r[2] = 0x817fdfc8u;
            (void)tc_call(0x802337a0u, &a);
            r3 = (u32)rd16((u32)param_1 + 0xdeu);
            if (r3 != 0u) {
                wr16((u32)param_1 + 0xdeu, (u16)(r3 - 1u));
                return;
            }
            a.r[0] = (u32)param_1;
            a.r[1] = r31;
            a.r[2] = 0x817fdfc8u;
            (void)tc_call(0x80312ff8u, &a);
            wr32((u32)param_1 + 0xe4u, rd32((u32)param_1 + 0xe4u) + 1u);
        } else {
            r4 = (u32)rd16((u32)param_1 + 0xdeu);
            if (r4 != 0u) {
                wr16((u32)param_1 + 0xdeu, (u16)(r4 - 1u));
            } else {
                wr32((u32)param_1 + 0xe4u, rd32((u32)param_1 + 0xe4u) + 1u);
            }
        }
    }
    return;
}

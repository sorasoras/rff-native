#include "tc_rt.h"

void fn_802ab180(s32 param_1, s32 param_2)
{
    u32 r0 = 0, r3 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    if ((u32)rd8((u32)param_2 + 2u) != 0u) {
        r0 = (u32)rd16((u32)param_2 + 4u);
        wr16((u32)param_1 + 0x38u, (u16)r0);
        if (r0 > 0x69bu) {
            wr16((u32)param_2 + 4u, 0x69bu);
            wr16((u32)param_1 + 0x38u, 0x69bu);
        }
    }
    if ((u32)rd8((u32)param_2 + 6u) != 0u) {
        r0 = rd32((u32)param_2 + 0xcu);
        wr32((u32)param_1 + 0x58u, rd32((u32)param_2 + 8u));
        wr32((u32)param_1 + 0x5cu, r0);
        r0 = rd32((u32)param_2 + 0x14u);
        wr32((u32)param_1 + 0x60u, rd32((u32)param_2 + 0x10u));
        wr32((u32)param_1 + 0x64u, r0);
        r0 = rd32((u32)param_2 + 0x1cu);
        wr32((u32)param_1 + 0x68u, rd32((u32)param_2 + 0x18u));
        wr32((u32)param_1 + 0x6cu, r0);
    }
    if ((u32)rd8((u32)param_2 + 0x20u) != 0u) {
        r0 = (u32)rd16((u32)param_2 + 0x22u);
        if (r0 != 0u) {
            wr16((u32)param_1 + 0x3cu, (u16)r0);
            r31 = rd32((u32)param_1 + 0x10u);
            r3 = (u32)rd16((u32)param_2 + 0x22u);
            if (r3 < (u32)rd16(r31 + 0x32u)) {
                wr16(r31 + 0x32u, (u16)r3);
                r0 = (u32)rd16((u32)param_2 + 0x22u);
                if (r0 <= 0x4ffu) {
                    r0 = ((r0 << 3u) & 0x7fff8u) + 3u;
                    r0 = ppc_mulhw(1717986919, (s32)r0);
                    r0 = (u32)((s32)r0 >> 1);
                    r0 = r0 + ((r0 >> 0x1fu) & 1u);
                    r30 = r0 & 0xffffu;
                    a.r[0] = 2u;
                    r3 = tc_call(0x8028a274u, &a);
                    if (r3 != 0u) {
                        a.r[0] = r3;
                        a.r[1] = (u32)rd16(r31 + 0x28u);
                        a.r[2] = r30;
                        (void)tc_call(0x802a1868u, &a);
                    }
                }
            }
        }
    }
    return;
}

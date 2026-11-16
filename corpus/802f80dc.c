#include "tc_rt.h"

void fn_802f80dc(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r12 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r0 = rd32((u32)param_1 + 0xecu);
    if (r0 != 0u) {
        a.r[0] = r0;
        (void)tc_call(0x8030c2e4u, &a);
        a.r[0] = rd32((u32)param_1 + 0xecu);
        f1 = tc_callf(0x8030bf80u, &a);
        r12 = rd32((u32)param_1 + 0xdcu);
        wr32((u32)param_1 + 0xecu, 0u);
        wr8((u32)param_1 + 0x35u, 0u);
        wr8((u32)param_1 + 0x36u, 0u);
        if (r12 != 0u) {
            a.r[0] = (u32)param_1;
            a.r[1] = 0u;
            a.r[2] = rd32((u32)param_1 + 0xe0u);
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.f[0] = f1;
            f1 = tc_callf(r12, &a);
        }
        r3 = rd32((u32)param_1 + 0xe4u);
        if (r3 != 0u) {
            a.r[0] = r3;
            a.r[1] = rd32((u32)param_1 + 0xe8u);
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.f[0] = f1;
            (void)tc_call(rd32(rd32(r3) + 0xcu), &a);
        }
        if ((u32)rd8((u32)param_1 + 0x37u) != 0u) {
            wr8((u32)param_1 + 0x37u, 0u);
            if ((u32)(s8)rd8(0x80571d90u) == 0u) {
                wr32(0x805483c0u, 0u);
                wr32(0x805483c4u, 0u);
                wr32(0x805483b8u, 0u);
                wr32(0x805483bcu, 0u);
                wr32(0x805483c0u, 0x805483c0u);
                wr32(0x805483c4u, 0x805483c0u);
                wr8(0x805483c8u, 0u);
                wr32(0x805483ccu, 0u);
                a.r[0] = 0x805483b8u;
                a.r[1] = 0x802f7568u;
                a.r[2] = 0x805483a8u;
                (void)tc_call(0x802551b8u, &a);
                wr8(0x80571d90u, 1u);
            }
            a.r[0] = 0x805483bcu;
            a.r[1] = (u32)param_1 + 0xf4u;
            (void)tc_call(0x802debd0u, &a);
            if ((u32)param_1 != 0u) {
                a.r[0] = 0x805483b8u;
                a.r[1] = (u32)param_1;
                (void)tc_call(0x802fad08u, &a);
            }
        }
    }
    return;
}

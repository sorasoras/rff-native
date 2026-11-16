#include "tc_rt.h"

void fn_802f8240(u32 param_1, s32 param_2, s32 param_3)
{
    u32 c0lt = 0, r3 = 0, r5 = 0, r12 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r5 = (u32)param_3;
    c0lt = param_2 < 2;
    if ((u32)param_2 == 2u) {
        r31 = 1u;
    } else if (!c0lt) {
        if (param_2 < 4) {
            r31 = 1u;
        }
    } else {
        c0lt = param_2 < 0;
        if ((u32)param_2 == 0u) {
            r31 = 2u;
            a.r[0] = param_1;
            f1 = tc_callf(0x8030bf80u, &a);
            r5 = 0u;
        } else if (!c0lt) {
            r31 = 3u;
            a.r[0] = param_1;
            f1 = tc_callf(0x8030bf80u, &a);
            r5 = 0u;
        }
    }
    r12 = rd32((u32)param_3 + 0xdcu);
    if (r12 != 0u) {
        a.r[0] = (u32)param_3;
        a.r[1] = r31;
        a.r[2] = rd32((u32)param_3 + 0xe0u);
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.f[0] = f1;
        f1 = tc_callf(r12, &a);
        r5 = 0u;
    }
    r3 = rd32((u32)param_3 + 0xe4u);
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = rd32((u32)param_3 + 0xe8u);
        a.r[2] = r5;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.f[0] = f1;
        (void)tc_call(rd32(rd32(r3) + 0xcu), &a);
    }
    wr32((u32)param_3 + 0xecu, 0u);
    wr8((u32)param_3 + 0x35u, 0u);
    wr8((u32)param_3 + 0x36u, 0u);
    wr8((u32)param_3 + 0x37u, 0u);
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
    a.r[1] = (u32)param_3 + 0xf4u;
    (void)tc_call(0x802debd0u, &a);
    if ((u32)param_3 != 0u) {
        a.r[0] = 0x805483b8u;
        a.r[1] = (u32)param_3;
        (void)tc_call(0x802fad08u, &a);
    }
    return;
}

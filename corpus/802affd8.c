#include "tc_rt.h"

void fn_802affd8(s32 param_1, s32 param_2, s32 param_3)
{
    u32 c0gt = 0, r0 = 0, r3 = 0, r4 = 0, r6 = 0, r7 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r0 = 1u;
    if ((u32)rd8((u32)param_1 + 0x6du) == 0u) {
        r0 = 0u;
    }
    r6 = (r0 << 1u) & 0xfeu;
    r3 = (u32)rd16((u32)param_3 + 4u) - 3u;
    c0gt = (u32)rd16((u32)param_3 + 2u) > 0x7fu;
    wr16((u32)param_3 + 4u, (u16)r3);
    if (c0gt) {
        r3 = r3 & 0xffffu;
        wr16((u32)param_3 + 4u, (u16)(r3 - 1u));
    }
    if ((u32)param_2 != 0u) {
        r0 = (u32)rd16((u32)param_3 + 6u) & 0xffu;
    } else {
        r0 = 0u;
    }
    if (r0 != 0u) {
        wr16((u32)param_3 + 4u, (u16)((u32)rd16((u32)param_3 + 4u) - 1u));
    }
    r6 = r6 | 1u;
    r7 = (u32)param_3 + (u32)rd16((u32)param_3 + 4u);
    wr8(r7 + 8u, (u8)(r6 | (((u32)param_2 << 2u) & 0x3fcu)));
    r4 = r7 + 0xau;
    wr8(r7 + 9u, (u8)(((u32)((s32)((0u - r0) | r0) >> 31) & 0x10u) | 0xefu));
    r3 = (u32)rd16((u32)param_3 + 2u);
    if (r3 <= 0x7fu) {
        r3 = (r3 << 1u) & 0x1fffeu;
        r3 = r3 | 1u;
        wr8(r4, (u8)r3);
        r4 = r4 + 1u;
        wr16((u32)param_3 + 2u, (u16)((u32)rd16((u32)param_3 + 2u) + 3u));
    } else {
        r3 = (r3 << 1u) & 0xfeu;
        wr8(r4, (u8)r3);
        wr8(r4 + 1u, (u8)((s32)rd16((u32)param_3 + 2u) >> 7));
        r4 = r4 + 2u;
        wr16((u32)param_3 + 2u, (u16)((u32)rd16((u32)param_3 + 2u) + 4u));
    }
    if (r0 != 0u) {
        wr8(r4, (u8)r0);
        wr16((u32)param_3 + 2u, (u16)((u32)rd16((u32)param_3 + 2u) + 1u));
    }
    r4 = (u32)rd16((u32)param_3 + 2u);
    r6 = (u32)param_3 + (u32)rd16((u32)param_3 + 4u);
    wr16((u32)param_3 + 2u, (u16)(r4 + 1u));
    a.r[0] = 2u;
    a.r[1] = r6 + 8u;
    r3 = tc_call(0x802b134cu, &a);
    f1 = tc_lastf();
    wr8(r6 + r4 + 8u, (u8)r3);
    if ((u32)param_2 == 0u) {
        a.r[0] = (u32)param_1;
        a.r[1] = (u32)param_3;
        (void)tc_call(0x802b1ac8u, &a);
    } else {
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = (u32)rd16((u32)param_1 + 0x68u);
        a.r[1] = (u32)param_3;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        (void)tc_call(0x802a5e34u, &a);
    }
    return;
}

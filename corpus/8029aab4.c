#include "tc_rt.h"

void fn_8029aab4(u32 param_1, s32 param_2, u32 param_3)
{
    u32 c1eq = 0, r3 = 0, r4 = 0, r6 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    r3 = tc_call(0x80295360u, &a);
    f1 = tc_lastf();
    c1eq = r3 == 0u;
    r31 = r3;
    if (c1eq) {
        if ((u32)rd8(0x80540118u) < 2u) {
            return;
        }
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = 0xd0001u;
        a.r[1] = 0x803943a0u;
        a.r[2] = (u32)rd8(param_1);
        a.r[3] = (u32)rd8(param_1 + 1u);
        a.r[4] = (u32)rd8(param_1 + 2u);
        a.r[5] = (u32)rd8(param_1 + 3u);
        a.r[6] = (u32)rd8(param_1 + 4u);
        a.r[7] = (u32)rd8(param_1 + 5u);
        (void)tc_call(0x8028cce4u, &a);
    } else {
        if ((u32)rd8(0x80540118u) >= 4u) {
            if (!c1eq) {
                r6 = (u32)rd8(r3 + 0x7fu);
            } else {
                r6 = 0u;
            }
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = 0xd0003u;
            a.r[1] = 0x80394400u;
            a.r[2] = (u32)param_2;
            a.r[3] = r6;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            f1 = tc_callf(0x8028cc84u, &a);
        }
        if ((u32)param_2 == 0u) {
            wr8(r31 + 0x76u, (u8)((u32)rd8(r31 + 0x76u) | 1u));
            wr32(r31 + 0x10u, rd32(param_3));
            wr32(r31 + 0x14u, rd32(param_3 + 4u));
        }
        if ((u32)rd8(r31 + 0x7fu) == 4u) {
            wr8(r31 + 0x7fu, 0u);
            if ((u32)param_2 != 0u) {
                if (rd32(r31 + 4u) == 0u) {
                    return;
                }
                if ((u32)rd8(r31 + 0x80u) != 0u) {
                    r3 = rd32(r31);
                    if (r3 != 0u && rd32(r3) == 3u) {
                        wr32(r3 + 4u, 0u);
                    }
                }
                a.r[0] = param_1;
                a.r[1] = rd32(r31 + 8u);
                a.r[2] = (u32)param_2;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                a.f[0] = f1;
                (void)tc_call(rd32(r31 + 4u), &a);
                wr32(r31 + 4u, 0u);
            } else {
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                a.r[0] = r31;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                r3 = tc_call(0x8029cfb0u, &a);
                f1 = tc_lastf();
                r4 = r3;
                if ((r3 & 0xffu) != 1u && rd32(r31 + 4u) != 0u) {
                    if ((u32)rd8(r31 + 0x80u) != 0u) {
                        r3 = rd32(r31);
                        if (r3 != 0u && rd32(r3) == 3u) {
                            wr32(r3 + 4u, 0u);
                        }
                    }
                    a.r[0] = param_1;
                    a.r[1] = rd32(r31 + 8u);
                    a.r[2] = r4 & 0xffu;
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    a.r[6] = 0u;
                    a.r[7] = 0u;
                    a.f[0] = f1;
                    (void)tc_call(rd32(r31 + 4u), &a);
                    wr32(r31 + 4u, 0u);
                }
            }
        }
    }
    return;
}

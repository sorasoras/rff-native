#include "tc_rt.h"

void fn_802ac088(u32 param_1, u32 param_2, u32 param_3)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r12 = 0, r29 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = param_2;
    r3 = tc_call(0x802acd40u, &a);
    f1 = tc_lastf();
    r31 = r3;
    if ((u32)rd8(0x8054161cu) >= 4u) {
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = 0x90003u;
        a.r[1] = 0x80396d70u;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        (void)tc_call(0x8028cc54u, &a);
    }
    if (r31 != 0u) {
        a.r[0] = r31;
        a.r[1] = (u32)rd8(r31 + 0x5fu);
        a.r[2] = (u32)rd8(param_3);
        r3 = tc_call(0x802ace8cu, &a);
        f1 = tc_lastf();
        r29 = r3;
        wr8(r31 + 0x5fu, rd8(param_3));
        wr8(r31 + 0x60u, rd8(param_3 + 1u));
        wr8(r31 + 0x61u, rd8(param_3 + 2u));
        wr8(r31 + 0x62u, rd8(param_3 + 3u));
        wr8(r31 + 0x63u, rd8(param_3 + 4u));
        r4 = (u32)rd8(r31 + 0x64u);
        if ((r4 & 1u) == 0u) {
            a.r[0] = rd32(r31 + 0x6cu);
            a.r[1] = (u32)rd8(r31 + 0xdu);
            a.r[2] = r31 + 0x5au;
            f1 = tc_callf(0x802afac0u, &a);
        } else {
            if ((r4 & 4u) == 0u) {
                r29 = r3 | (rd32(r31 + 0x88u) & 0x200u);
            }
            if ((r4 & 2u) != 0u) {
                a.r[0] = r31;
                r3 = tc_call(0x802ac85cu, &a);
                f1 = tc_lastf();
                r29 = r29 | r3;
            }
        }
        wr8(r31 + 0x64u, (u8)((u32)rd8(r31 + 0x64u) | 0xcu));
        if ((u32)rd8(param_3 + 1u) != 0u) {
            r29 = r29 | (rd32(r31 + 0x88u) & 0x40u);
        }
        if (r29 != 0u) {
            r12 = rd32(r31 + 0x8cu);
            if (r12 != 0u) {
                a.r[0] = r29;
                a.r[1] = (u32)rd8(r31);
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.f[0] = f1;
                f1 = tc_callf(r12, &a);
            }
        }
        if ((u32)rd8(0x8054161cu) >= 4u) {
            r0 = (u32)rd8(r31 + 0x5fu);
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = 0x90003u;
            a.r[1] = 0x80396d80u;
            a.r[2] = r0 & 1u;
            a.r[3] = (r0 >> 1u) & 1u;
            a.r[4] = (r0 >> 2u) & 1u;
            a.r[5] = (r0 >> 3u) & 1u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            (void)tc_call(0x8028ccb4u, &a);
        }
    }
    return;
}

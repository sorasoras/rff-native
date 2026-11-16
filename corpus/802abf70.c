#include "tc_rt.h"

void fn_802abf70(u32 param_1, u32 param_2, u32 param_3, s32 param_4)
{
    u32 r3 = 0, r30 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    (void)param_3;
    a.r[0] = param_1;
    a.r[1] = param_2;
    r3 = tc_call(0x802acd40u, &a);
    f1 = tc_lastf();
    r30 = r3;
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
        a.r[1] = 0x80396d20u;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        f1 = tc_callf(0x8028cc54u, &a);
    }
    if (r30 == 0u) {
        if ((u32)rd8(0x8054161cu) < 2u) {
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
        a.r[0] = 0x90001u;
        a.r[1] = 0x80396d30u;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        (void)tc_call(0x8028cc54u, &a);
    } else {
        if ((u32)param_4 != 0u) {
            wr8(r30 + 0xeu, 0xeu);
            a.r[0] = param_1;
            a.r[1] = (u32)rd8(r30 + 0xdu);
            f1 = tc_callf(0x802afca0u, &a);
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = r30;
            a.r[1] = 0xeu;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            (void)tc_call(0x802ac954u, &a);
        } else {
            if (((u32)rd8(r30 + 0x64u) & 1u) == 0u) {
                a.r[0] = rd32(r30 + 0x6cu);
                a.r[1] = (u32)rd8(r30 + 0xdu);
                a.r[2] = r30 + 0x5au;
                (void)tc_call(0x802afac0u, &a);
            } else {
                if ((u32)rd8(0x8054161cu) >= 2u) {
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    a.f[3] = 0.0;
                    a.f[4] = 0.0;
                    a.f[5] = 0.0;
                    a.f[6] = 0.0;
                    a.f[7] = 0.0;
                    a.r[0] = 0x90001u;
                    a.r[1] = 0x80396d48u;
                    a.r[2] = 0u;
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    a.r[6] = 0u;
                    a.r[7] = 0u;
                    (void)tc_call(0x8028cc54u, &a);
                }
            }
        }
    }
    return;
}

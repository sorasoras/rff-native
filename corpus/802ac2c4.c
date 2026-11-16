#include "tc_rt.h"

void fn_802ac2c4(u32 param_1, u32 param_2, u32 param_3)
{
    u32 r3 = 0, r12 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = param_2;
    r3 = tc_call(0x802acd40u, &a);
    f1 = tc_lastf();
    r31 = r3;
    r30 = 0u;
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
        a.r[1] = 0x80396dd0u;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        f1 = tc_callf(0x8028cc54u, &a);
    }
    if (r31 != 0u) {
        wr8(r31 + 0xfu, (u8)((u32)rd8(r31 + 0xfu) | param_3));
        if ((param_3 & 2u) != 0u) {
            r30 = 0x2000u;
        }
        if ((param_3 & 1u) != 0u) {
            r30 = r30 | 0x40u;
        }
        if ((param_3 & 0xfcu) != 0u) {
            r30 = r30 | 0x80u;
        }
        r12 = rd32(r31 + 0x8cu);
        if (r12 != 0u) {
            r3 = rd32(r31 + 0x88u) & r30;
            if (r3 != 0u) {
                a.r[0] = r3;
                a.r[1] = (u32)rd8(r31);
                a.r[2] = 0u;
                a.f[0] = f1;
                (void)tc_call(r12, &a);
            }
        }
    }
    return;
}

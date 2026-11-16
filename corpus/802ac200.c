#include "tc_rt.h"

void fn_802ac200(u32 param_r3, u32 param_r4)
{
    u32 r3 = 0, r12 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_r3;
    a.r[1] = param_r4;
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
        a.r[1] = 0x80396dc0u;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        f1 = tc_callf(0x8028cc54u, &a);
    }
    if (r31 != 0u) {
        r3 = (u32)rd8(r31 + 0x64u);
        if ((r3 & 2u) == 0u) {
            r3 = r3 | 2u;
            wr8(r31 + 0x64u, (u8)r3);
            if ((r3 & 4u) != 0u) {
                r30 = rd32(r31 + 0x88u) & 0x200u;
            }
        }
        if ((r3 & 4u) != 0u) {
            a.r[0] = r31;
            r3 = tc_call(0x802ac85cu, &a);
            f1 = tc_lastf();
            r30 = r30 | r3;
        }
        if (r30 != 0u) {
            r12 = rd32(r31 + 0x8cu);
            if (r12 != 0u) {
                a.r[0] = r30;
                a.r[1] = (u32)rd8(r31);
                a.f[0] = f1;
                (void)tc_call(r12, &a);
            }
        }
    }
    return;
}

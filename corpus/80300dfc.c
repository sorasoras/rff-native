#include "tc_rt.h"

void fn_80300dfc(u32 param_1, u32 param_r5)
{
    u32 r3 = 0, r7 = 0, r9 = 0, r12 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    do {
        r9 = rd32(param_r5 + 0x18u);
        r7 = 0x1fu;
        if ((r9 & 1u) != 0u) {
            r7 = 0x1eu;
        }
        if ((r9 & 2u) != 0u) {
            r7 = r7 & 0xfffffffdu;
        }
        if ((r9 & 4u) != 0u) {
            r7 = r7 & 0xfffffffbu;
        }
        if ((r9 & 8u) != 0u) {
            r7 = r7 & 0xfffffff7u;
        }
        if ((u32)rd8(param_r5 + 0x1eu) == 0u) {
            r7 = r7 & 0xffffffefu;
        }
        r12 = rd32(param_1);
        r12 = rd32(r12 + 0x18u);
    } while (r12 == 0x80300dfcu);
    if (r12 == 0x817ff000u) {
        return;
    }
    a.r[0] = param_1;
    a.r[1] = 0u;
    a.r[2] = param_r5;
    a.r[4] = r7;
    a.r[6] = r9;
    a.f[0] = 0.0;
    r3 = tc_call(r12, &a);
    f1 = tc_lastf();
    return;
}

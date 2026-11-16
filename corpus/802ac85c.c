#include "tc_rt.h"

void fn_802ac85c(u32 param_r3)
{
    u32 r3 = 0, r4 = 0, r27 = 0, r28 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r28 = 0u;
    if (rd32(param_r3 + 0x28u) != 0u) {
        while ((u32)rd8(param_r3 + 0x24u) == 0u) {
            r3 = rd32(param_r3 + 0x6cu);
            if (r3 == 0u || (u32)rd8(r3 + 0x71u) == 0u) break;
            a.r[0] = param_r3 + 0x18u;
            r3 = tc_call(0x8028a9f8u, &a);
            f1 = tc_lastf();
            r27 = r3;
            if (r3 == 0u) break;
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
                a.r[1] = 0x80396e8cu;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                (void)tc_call(0x8028cc54u, &a);
            }
            r3 = rd32(param_r3 + 0x6cu);
            r4 = (u32)rd8(param_r3 + 0xdu);
            wr32(param_r3 + 0x28u, rd32(param_r3 + 0x28u) - (u32)rd16(r27 + 2u));
            a.r[0] = r3;
            a.r[1] = r4;
            a.r[2] = r27;
            (void)tc_call(0x802afcccu, &a);
            r28 = r28 | 0x4000u;
            if (rd32(param_r3 + 0x28u) == 0u) break;
        }
        a.r[0] = param_r3;
        (void)tc_call(0x802ace1cu, &a);
    }
    return;
}

#include "tc_rt.h"

void fn_802ab33c(u32 param_r3)
{
    u32 r3 = 0, r5 = 0, r24 = 0, r25 = 0, r27 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(param_r3 + 4u, 3u);
    r24 = 0x80540a28u;
    r25 = 0u;
    do {
        if ((r24 != param_r3 && (u32)rd8(r24) != 0u) && (u32)rd8(r24 + 0x30u) == 1u) {
            a.r[0] = r24 + 0x2au;
            r3 = tc_call(0x8029a574u, &a);
            f1 = tc_lastf();
            r27 = r3;
            if ((u32)rd8(0x80540a20u) >= 3u) {
                r5 = 0x80570e58u;
                if ((r3 & 0xffu) == 1u) {
                    r5 = 0x80570e50u;
                }
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                a.r[0] = 0x80002u;
                a.r[1] = 0x80396b64u;
                a.r[2] = r5;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                (void)tc_call(0x8028cc6cu, &a);
            }
            if ((r27 & 0xffu) != 1u && ((u32)rd8(0x8053df98u) & 0x20u) != 0u) {
                wr32(param_r3 + 4u, 2u);
                wr8(param_r3 + 0x30u, 0u);
                a.r[0] = r24 + 0x2au;
                a.r[1] = 0u;
                a.r[2] = 0u;
                (void)tc_call(0x8029364cu, &a);
                a.r[0] = param_r3 + 0x10u;
                a.r[1] = 2u;
                a.r[2] = 0xau;
                (void)tc_call(0x8028d220u, &a);
                return;
            }
        }
        r25 = r25 + 1u;
        r24 = r24 + 0x5cu;
    } while ((s32)r25 < 4);
    a.r[0] = param_r3;
    (void)tc_call(0x802ab454u, &a);
    return;
}

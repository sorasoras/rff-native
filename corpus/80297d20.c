#include "tc_rt.h"

void fn_80297d20(u32 param_r3)
{
    u32 r3 = 0, r12 = 0, r28 = 0, r29 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    if ((u32)rd8(0x8053f1a0u) == 0u && (u32)rd8(0x8053f006u) == 0u && (u32)rd8(0x8053f19cu) == 0u) {
        r28 = 0x8053f03cu;
        r29 = 0u;
        do {
            do {
                if ((u32)rd8(r28 + 0x1au) != 0u) {
                    if (param_r3 != 0u) {
                        a.r[0] = r28 + 0xau;
                        a.r[1] = param_r3;
                        a.r[2] = 6u;
                        r3 = tc_call(0x802592d8u, &a);
                        f1 = tc_lastf();
                        if (r3 != 0u) break;
                    }
                    wr8(r28 + 0x1au, 0u);
                    r12 = rd32(0x8053f014u);
                    if (r12 != 0u) {
                        a.r[0] = r28 + 8u;
                        a.r[1] = 0u;
                        a.r[2] = 0u;
                        a.f[0] = f1;
                        f1 = tc_callf(r12, &a);
                    }
                }
            } while (0);
            r29 = r29 + 1u;
            r28 = r28 + 0x1cu;
        } while (r29 < 0xcu);
    }
    return;
}

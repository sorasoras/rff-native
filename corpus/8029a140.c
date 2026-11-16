#include "tc_rt.h"

void fn_8029a140(s32 param_1)
{
    u32 r3 = 0, r4 = 0, r29 = 0, r30 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r4 = 0x8053d958u;
    r30 = 0x8053f1acu;
    r29 = 0u;
    do {
        do {
            if ((u32)rd16(r30 + 8u) != 0u) {
                if ((u32)param_1 != 0u) {
                    a.r[0] = r30 + 0x28u;
                    a.r[1] = (u32)param_1;
                    a.r[2] = 6u;
                    r3 = tc_call(0x802592d8u, &a);
                    f1 = tc_lastf();
                    r4 = tc_lastr4();
                    if (r3 != 0u || (u32)rd8(r30 + 0xdu) == 0u) break;
                }
                wr16(r30 + 8u, 0u);
                wr32(r30 + 0x10u, 0u);
                a.r[0] = r29 & 0xffffu;
                a.r[1] = r4;
                a.r[2] = 0u;
                a.f[0] = f1;
                f1 = tc_callf(rd32(r30 + 4u), &a);
                r4 = tc_lastr4();
            }
        } while (0);
        r29 = r29 + 1u;
        r30 = r30 + 0x34u;
    } while (r29 < 3u);
    return;
}

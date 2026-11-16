#include "tc_rt.h"

void fn_80248618(u32 param_r3)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r25 = 0, r26 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r25 = 0u;
    r30 = param_r3;
    r29 = param_r3;
    do {
        a.r[0] = (rd32(param_r3 + 0x14u) << 2u) & 0xfffffffcu;
        a.r[1] = r4;
        a.f[0] = f1;
        r3 = tc_call(rd32(0x80570b78u), &a);
        f1 = tc_lastf();
        r4 = tc_lastr4();
        wr32(r30, r3);
        if (r3 == 0u) {
            return;
        }
        r0 = rd32(param_r3 + 0x30u);
        if (r0 == 0u) {
            wr32(r30 + 0x1cu, 0u);
        } else {
            a.r[0] = (r0 << 2u) & 0xfffffffcu;
            a.r[1] = r4;
            a.f[0] = f1;
            r3 = tc_call(rd32(0x80570b78u), &a);
            f1 = tc_lastf();
            r4 = tc_lastr4();
            wr32(r30 + 0x1cu, r3);
            if (r3 == 0u) {
                return;
            }
        }
        r27 = param_r3;
        r28 = r29;
        r26 = 0u;
        do {
            a.r[0] = (rd32(r27 + 0x5cu) << 2u) & 0xfffffffcu;
            a.r[1] = r4;
            a.f[0] = f1;
            r3 = tc_call(rd32(0x80570b78u), &a);
            f1 = tc_lastf();
            r4 = tc_lastr4();
            wr32(r28 + 0x34u, r3);
            if (r3 == 0u) {
                return;
            }
            r26 = r26 + 1u;
            r28 = r28 + 4u;
            r27 = r27 + 4u;
        } while (r26 < 2u);
        r28 = param_r3;
        r27 = r29;
        r26 = 0u;
        do {
            a.r[0] = (rd32(r28 + 0x94u) << 2u) & 0xfffffffcu;
            a.r[1] = r4;
            a.f[0] = f1;
            r3 = tc_call(rd32(0x80570b78u), &a);
            f1 = tc_lastf();
            r4 = tc_lastr4();
            wr32(r27 + 0x6cu, r3);
            if (r3 == 0u) {
                return;
            }
            r26 = r26 + 1u;
            r27 = r27 + 4u;
            r28 = r28 + 4u;
        } while (r26 < 2u);
        r25 = r25 + 1u;
        r29 = r29 + 8u;
        r30 = r30 + 4u;
    } while (r25 < 3u);
    return;
}

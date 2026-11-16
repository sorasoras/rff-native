#include "tc_rt.h"

void fn_80311838(u32 param_r3, u32 param_r4)
{
    u32 c0eq = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r25 = 0, r28 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fcfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    r3 = rd32(param_r3 + 0xc018u) + (param_r4 * 0x1cu);
    r31 = 0u;
    a.r[0] = r3;
    a.r[1] = 0x817fcfd8u;
    a.r[2] = (u32)rd16(r3 + 8u);
    r3 = tc_call(0x803200acu, &a);
    f1 = tc_lastf();
    r28 = r3 & 0xffffu;
    r30 = 0u;
    while ((r30 & 0xffffu) < r28) {
        r25 = rd32(((r30 << 2u) & 0x3fffcu) - 0x7e803028u);
        c0eq = rd32(r25 + 0xcu) == 1u;
        if (c0eq) {
            if (!c0eq) {
                r0 = 0u;
            } else {
                r5 = rd32(param_r3 + 0xc018u) + (rd32(r25 + 0x40u) * 0x1cu);
                r4 = (u32)rd16(r5 + 0x18u);
                wr16(r5 + 0x18u, (u16)(r4 - 1u));
                a.r[0] = r25;
                a.r[1] = r4;
                a.r[2] = r5;
                a.f[0] = f1;
                f1 = tc_callf(rd32(rd32(r25 + 0x1cu) + 0xcu), &a);
                r4 = tc_lastr4();
                wr32(r25 + 0xcu, 2u);
                if (rd32(r25 + 0x10u) == 0u) {
                    a.r[0] = r25;
                    a.r[1] = r4;
                    a.r[2] = 0u;
                    a.f[0] = f1;
                    f1 = tc_callf(rd32(rd32(r25 + 0x1cu) + 8u), &a);
                }
                r0 = 1u;
            }
            r31 = r31 + r0;
        }
        r30 = r30 + 1u;
    }
    return;
}

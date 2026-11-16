#include "tc_rt.h"

void fn_80310c3c(u32 param_r3)
{
    u32 c0eq = 0, r0 = 0, r3 = 0, r4 = 0, r26 = 0, r27 = 0, r28 = 0, r31 = 0;
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
    r28 = 0u;
    a.r[0] = param_r3 + 0x24u;
    a.r[1] = 0x817fcfd8u;
    a.r[2] = (u32)rd16(param_r3 + 0x2cu);
    r3 = tc_call(0x803200acu, &a);
    f1 = tc_lastf();
    r31 = r3 & 0xffffu;
    r27 = 0u;
    while ((r27 & 0xffffu) < r31) {
        r26 = rd32(((r27 << 2u) & 0x3fffcu) - 0x7e803028u);
        c0eq = rd32(r26 + 0xcu) == 1u;
        if (c0eq) {
            if (!c0eq) {
                r0 = 0u;
            } else {
                r4 = (u32)rd16(param_r3 + 0x3cu);
                wr16(param_r3 + 0x3cu, (u16)(r4 - 1u));
                a.r[0] = r26;
                a.r[1] = r4;
                a.r[2] = 0u;
                a.f[0] = f1;
                f1 = tc_callf(rd32(rd32(r26 + 0x1cu) + 0xcu), &a);
                r4 = tc_lastr4();
                wr32(r26 + 0xcu, 2u);
                if (rd32(r26 + 0x10u) == 0u) {
                    a.r[0] = r26;
                    a.r[1] = r4;
                    a.r[2] = 0u;
                    a.f[0] = f1;
                    f1 = tc_callf(rd32(rd32(r26 + 0x1cu) + 8u), &a);
                }
                r0 = 1u;
            }
            r28 = r28 + r0;
        }
        r27 = r27 + 1u;
    }
    return;
}

#include "tc_rt.h"

void fn_800384fc(u32 param_1)
{
    u32 r3 = 0, r30 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    a.r[0] = rd32(param_1 + 0x2cu) + 0x28u;
    r3 = tc_call(0x80037b5cu, &a);
    f1 = tc_lastf();
    if (r3 == 0u) {
        if ((rd32(param_1 + 4u) & 1u) == 0u) {
            r30 = rd32(param_1 + 0x2cu);
            wr32(param_1 + 0x28u, 0x817fdfd8u);
            a.r[0] = 0x817fdfd8u;
            a.r[1] = 0u;
            a.r[2] = 0x18u;
            (void)tc_call(0x8000443cu, &a);
            wr32(0x817fdfd8u, rd32(r30));
            wr32(0x817fdfdcu, rd32(r30 + 4u));
            wr32(0x817fdfe0u, rd32(r30 + 0xcu) + 1u);
            wr32(0x817fdfe4u, rd32(r30 + 0x10u));
            a.r[0] = param_1 + 0x28u;
            a.r[1] = param_1 + 4u;
            f1 = tc_callf(0x8003802cu, &a);
            wr32(rd32(param_1 + 0x2cu) + 0x28u, rd32(0x817fdfe8u));
            if (rd32(0x817fdfe8u) == 0u) {
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                a.r[0] = param_1;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                r3 = tc_call(0x80038474u, &a);
                f1 = tc_lastf();
                if (r3 != 0u) {
                    wr32(param_1, 0u);
                    return;
                }
                if ((rd32(param_1 + 4u) & 1u) == 0u) {
                    a.r[0] = param_1;
                    r3 = tc_call(0x80038310u, &a);
                    f1 = tc_lastf();
                    if (r3 != 0u || rd32(rd32(param_1 + 0x2cu) + 0x2cu) != 0u) {
                        wr32(param_1, 0u);
                        return;
                    }
                    wr32(param_1 + 4u, rd32(param_1 + 4u) | 1u);
                }
            }
        }
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = param_1;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        r3 = tc_call(0x80038474u, &a);
        if (r3 != 0u) {
            wr32(param_1, 0u);
            return;
        }
    }
    wr32(param_1, 0u);
    return;
}

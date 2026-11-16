#include "tc_rt.h"

void fn_801c374c(u32 param_1)
{
    u32 c0eq = 0, r0 = 0, r3 = 0, r4 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r0 = rd32(param_1 + 0x10u);
    if (r0 != 0u) {
        a.r[0] = r0;
        a.r[1] = rd32(param_1);
        a.f[0] = 0.0;
        r3 = tc_call(rd32(rd32(r0) + 0x10u), &a);
        f1 = tc_lastf();
        if (r3 == 0u) {
            r3 = rd32(param_1 + 0x10u);
            a.r[0] = r3;
            a.r[1] = rd32(param_1);
            a.f[0] = f1;
            f1 = tc_callf(rd32(rd32(r3) + 0x14u), &a);
            wr32(param_1 + 0x10u, 0u);
        }
    }
    if (rd32(param_1 + 0x14u) != 0u) {
        wrf32d(rd32(param_1) + 0xd3cu, (f64)rdf32(0x80575cfcu));
        r3 = rd32(param_1 + 0x10u);
        if (r3 != 0u) {
            a.r[0] = r3;
            a.r[1] = rd32(param_1);
            a.f[0] = f1;
            f1 = tc_callf(rd32(rd32(r3) + 0x14u), &a);
        }
        r3 = rd32(param_1 + 0x14u);
        a.r[0] = r3;
        a.r[1] = rd32(param_1);
        a.f[0] = f1;
        f1 = tc_callf(rd32(rd32(r3) + 0xcu), &a);
        wr32(param_1 + 0x10u, rd32(param_1 + 0x14u));
        wr32(param_1 + 0x14u, 0u);
    }
    if (rd32(param_1 + 0x10u) == 0u) {
        r4 = rd32(param_1 + 0x2cu);
        c0eq = rd32(param_1 + 0x30u) == r4;
        wr32(param_1 + 4u, rd32(param_1 + 8u));
        if (c0eq) {
            wr32(param_1 + 8u, rd32(param_1 + 0xcu));
        } else {
            r3 = rd32(param_1 + 0x2cu);
            r4 = param_1 + ((r4 << 2u) & 0xfffffffcu);
            wr32(param_1 + 8u, rd32(r4 + 0x18u));
            if ((s32)r3 >= 4) {
                wr32(param_1 + 0x2cu, 0u);
            } else {
                wr32(param_1 + 0x2cu, r3 + 1u);
            }
        }
        r4 = rd32(param_1);
        r3 = rd32(((rd32(param_1 + 8u) << 2u) & 0xfffffffcu) - 0x7fb23668u);
        wr32(param_1 + 0x10u, r3);
        a.r[0] = r3;
        a.r[1] = r4;
        a.f[0] = f1;
        (void)tc_call(rd32(rd32(r3) + 0xcu), &a);
    }
    return;
}

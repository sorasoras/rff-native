#include "tc_rt.h"

u32 fn_8021b074(u32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r26 = 0, r27 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(param_1, 0x803788b0u);
    r3 = tc_call(0x80097e5cu, &a);
    f1 = tc_lastf();
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    a.r[0] = r3;
    a.r[1] = 0x45au;
    a.r[2] = 1u;
    a.r[3] = 0u;
    a.r[4] = 0xffffffffu;
    r3 = tc_call(0x80050dd4u, &a);
    wr32(param_1 + 0x14u, r3);
    wr32(param_1 + 4u, r3);
    wr32(param_1 + 0xcu, r3 + 8u);
    r3 = r3 + ((rd32(r3) << 3u) & 0xfffffff8u);
    wr32(param_1 + 0x10u, r3 + 8u);
    r3 = tc_call(0x80097e5cu, &a);
    a.r[0] = 0x148u;
    a.r[1] = r3;
    r3 = tc_call(0x80215268u, &a);
    wr32(param_1 + 8u, r3);
    r31 = 0u;
    r27 = 0u;
    do {
        r30 = 0u;
        r26 = 0u;
        wr32(rd32(param_1 + 8u) + r27, 0u);
        while ((s32)r30 < (s32)rd32(rd32(param_1 + 4u))) {
            if (r31 == rd32(rd32(param_1 + 0xcu) + r26)) {
                r3 = tc_call(0x80097e5cu, &a);
                a.r[0] = 8u;
                a.r[1] = r3;
                r3 = tc_call(0x80215200u, &a);
                if (r3 != 0u) {
                    wr32(r3, rd32(param_1 + 0xcu) + r26);
                    wr32(r3 + 4u, 0u);
                }
                r0 = rd32(param_1 + 8u);
                r4 = rd32(r27 + r0);
                if (r4 != 0u) {
                    wr32(r3 + 4u, rd32(r4 + 4u));
                    wr32(rd32(r27 + rd32(param_1 + 8u)) + 4u, r3);
                } else {
                    wr32(r27 + r0, r3);
                }
            }
            r26 = r26 + 8u;
            r30 = r30 + 1u;
        }
        r31 = r31 + 1u;
        r27 = r27 + 4u;
    } while ((s32)r31 < 82);
    return param_1;
}

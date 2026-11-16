#include "tc_rt.h"

void fn_802eddc8(u32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    u32 ctr = 0, r3 = 0, r4 = 0, r26 = 0, r27 = 0, r28 = 0, r29 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r27 = (u32)rd16(param_2 + 0xcu);
    wr32(param_1 + 0xcu, param_2);
    wr32(param_1 + 0x14u, 0u);
    if (r27 != 0u) {
        a.r[0] = rd32(0x80571d40u);
        r3 = tc_call(0x8026d490u, &a);
        f1 = tc_lastf();
        if (r3 == 0u) {
            r3 = 0u;
        } else {
            r4 = r3;
            ctr = r27;
            if (r27 > 0u) {
                do {
                    if (r4 != 0u) {
                        wr32(r4, 0u);
                    }
                    r4 = r4 + 4u;
                    ctr = ctr - 1u;
                } while (ctr != 0u);
            }
        }
        wr32(param_1 + 0x14u, r3);
        if (r3 != 0u) {
            r26 = 0u;
            r27 = 0u;
            r29 = rd32(param_1 + 0xcu) + 0x14u;
            r28 = r29;
            while ((s32)r26 < (s32)rd16(rd32(param_1 + 0xcu) + 0xcu)) {
                a.r[0] = param_3;
                a.r[1] = 0x74696d67u;
                a.r[2] = r29 + rd32(r28);
                a.r[3] = 0u;
                a.f[0] = f1;
                r3 = tc_call(rd32(rd32(param_3) + 0xcu), &a);
                f1 = tc_lastf();
                r28 = r28 + 4u;
                r26 = r26 + 1u;
                wr32(rd32(param_1 + 0x14u) + r27, r3);
                r27 = r27 + 4u;
            }
        }
    }
    a.r[0] = rd32(0x80571d40u);
    r3 = tc_call(0x8026d490u, &a);
    if (r3 == 0u) {
        r3 = 0u;
    } else {
        r4 = r3;
        ctr = param_4;
        if (param_4 > 0u) {
            do {
                if (r4 != 0u) {
                    wr32(r4, 0u);
                    wr32(r4 + 4u, 0u);
                    wr32(r4 + 8u, 0u);
                    wr16(r4 + 0xcu, 0u);
                    wr8(r4 + 0xeu, 0u);
                }
                r4 = r4 + 0x10u;
                ctr = ctr - 1u;
            } while (ctr != 0u);
        }
    }
    wr32(param_1 + 0x18u, r3);
    if (r3 != 0u) {
        wr16(param_1 + 0x1cu, (u16)param_4);
    }
    return;
}

#include "tc_rt.h"

void fn_802ca9f4(u32 param_1, u32 param_2, u32 param_3)
{
    u32 r0 = 0, r3 = 0, r5 = 0, r6 = 0, r25 = 0, r26 = 0, r27 = 0, r28 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r6 = (u32)rd16(param_2 + 0xcu);
    wr32(param_1 + 0xcu, param_2);
    wr32(param_1 + 0x14u, 0u);
    if (r6 != 0u) {
        a.r[0] = rd32(0x805474e0u);
        r3 = tc_call(0x8026d490u, &a);
        f1 = tc_lastf();
        wr32(param_1 + 0x14u, r3);
        if (r3 != 0u) {
            r25 = 0u;
            r26 = 0u;
            r28 = rd32(param_1 + 0xcu) + 0x14u;
            r27 = r28;
            while ((s32)r25 < (s32)rd16(rd32(param_1 + 0xcu) + 0xcu)) {
                a.r[0] = param_3;
                a.r[1] = 0x74696d67u;
                a.r[2] = r28 + rd32(r27);
                a.r[3] = 0u;
                a.f[0] = f1;
                r3 = tc_call(rd32(rd32(param_3) + 0xcu), &a);
                f1 = tc_lastf();
                r27 = r27 + 4u;
                r25 = r25 + 1u;
                wr32(rd32(param_1 + 0x14u) + r26, r3);
                r26 = r26 + 4u;
            }
        }
    }
    a.r[0] = rd32(0x805474e0u);
    r3 = tc_call(0x8026d490u, &a);
    wr32(param_1 + 0x18u, r3);
    if (r3 != 0u) {
        r0 = (u32)rd16(param_2 + 0xeu);
        wr16(param_1 + 0x1cu, (u16)r0);
        a.r[0] = r3;
        a.r[1] = 0u;
        a.r[2] = (r0 << 4u) & 0xfffffff0u;
        (void)tc_call(0x8000443cu, &a);
        r5 = 0u;
        while ((r5 & 0xffffu) < (u32)rd16(param_2 + 0xeu)) {
            r3 = rd32(param_1 + 0x18u) + ((r5 << 4u) & 0xffff0u);
            if (r3 != 0u) {
                wr32(r3, 0u);
                wr32(r3 + 4u, 0u);
                wr8(r3 + 0xeu, 0u);
                wr32(r3 + 8u, 0u);
                wr16(r3 + 0xcu, 0u);
            }
            r5 = r5 + 1u;
        }
    }
    return;
}

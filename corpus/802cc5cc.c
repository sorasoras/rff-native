#include "tc_rt.h"

void fn_802cc5cc(u32 param_1, u32 param_2, u32 param_3)
{
    u32 c0eq = 0, r3 = 0, r5 = 0, r7 = 0, r26 = 0, r27 = 0, r28 = 0, r30 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfc0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfdcu, 0u);
    wr32(0x817fdfe0u, 0u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    wr32(param_1 + 0x10u, 0u);
    r7 = param_1 + 0x10u;
    wr32(param_1 + 0x14u, 0u);
    wr32(param_1, 0x80399c88u);
    wr32(param_1 + 4u, 0u);
    wr32(param_1 + 8u, 0u);
    wr32(param_1 + 0xcu, 0u);
    wr32(param_1 + 0x10u, r7);
    wr32(param_1 + 0x14u, r7);
    wr8(param_1 + 0x28u, 0u);
    a.r[0] = param_1 + 0x18u;
    a.r[1] = param_2 + 8u;
    a.r[2] = 0x10u;
    f1 = tc_callf(0x80004338u, &a);
    r27 = param_2 + 0x1cu;
    r26 = 0u;
    r28 = 0u;
    while ((s32)r26 < (s32)rd16(param_2 + 0x18u)) {
        a.r[0] = param_3;
        a.r[1] = r27 + r28;
        a.r[2] = 1u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.f[0] = f1;
        r3 = tc_call(rd32(rd32(param_3) + 0x3cu), &a);
        f1 = tc_lastf();
        r30 = r3;
        if (r3 != 0u) {
            a.r[0] = rd32(0x805474e0u);
            r3 = tc_call(0x8026d490u, &a);
            f1 = tc_lastf();
            c0eq = r3 == 0u;
            if (!c0eq) {
                r5 = r3;
                if (!c0eq) {
                    wr32(r3, 0u);
                    wr32(r3 + 4u, 0u);
                }
                wr32(r3 + 8u, r30);
                wr32(0x817fdfc8u, param_1 + 0x10u);
                a.r[0] = param_1 + 0xcu;
                a.r[1] = 0x817fdfc8u;
                a.r[2] = r5;
                f1 = tc_callf(0x802d7a8cu, &a);
            }
        }
        r28 = r28 + 0x10u;
        r26 = r26 + 1u;
    }
    return;
}

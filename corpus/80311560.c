#include "tc_rt.h"

void fn_80311560(u32 param_r3, u32 param_r4)
{
    u32 r0 = 0, r3 = 0, r5 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0;
    TcArgs a = {0};
    r5 = param_r3 + 0x10000u;
    wr32(r5 - 0x3fecu, param_r4);
    r3 = rd32(param_r3);
    a.r[0] = r3;
    a.r[1] = (param_r4 * 0x1cu) + 0x20u;
    a.r[2] = r5;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.f[0] = 0.0;
    r3 = tc_call(rd32(rd32(r3) + 0x60u), &a);
    a.r[0] = r3;
    a.r[1] = 0x80311668u;
    a.r[2] = 0u;
    a.r[3] = 0x1cu;
    a.r[4] = param_r4;
    r3 = tc_call(0x80255464u, &a);
    r30 = param_r3 + 0x10000u;
    r27 = 0u;
    wr32(r30 - 0x3fe8u, r3);
    r28 = 0u;
    while (r27 < rd32(r30 - 0x3fecu)) {
        r29 = rd32(r30 - 0x3fe8u) + r28;
        a.r[0] = r29;
        a.r[1] = 0x14u;
        (void)tc_call(0x802de7dcu, &a);
        a.r[0] = r29 + 0xcu;
        a.r[1] = 0x14u;
        (void)tc_call(0x802de7dcu, &a);
        wr16(r29 + 0x18u, 0u);
        r27 = r27 + 1u;
        r0 = rd32(r30 - 0x3fe8u);
        wr32(r28 + r0, 0u);
        r3 = r0 + r28;
        r28 = r28 + 0x1cu;
        wr16(r3 + 8u, 0u);
        wr32(r3 + 4u, 0u);
        wr32(r3 + 0xcu, 0u);
        wr16(r3 + 0x14u, 0u);
        wr32(r3 + 0x10u, 0u);
        wr16(r3 + 0x18u, 0u);
    }
    wr32(r30 - 0x3fe4u, 0u);
    wr32(param_r3 + 4u, 0x80571df8u);
    wr32(param_r3 + 8u, 0x80571dfcu);
    wr32(param_r3 + 0xcu, 0x80571e00u);
    return;
}

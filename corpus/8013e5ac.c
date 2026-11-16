#include "tc_rt.h"

void fn_8013e5ac(u32 param_1)
{
    u32 r3 = 0, r28 = 0, r29 = 0, r30 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r28 = param_1;
    if (rd32(param_1) == 0u) {
        r3 = tc_call(0x8006bb94u, &a);
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
        a.r[1] = 0x31fu;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0xffffffffu;
        r3 = tc_call(0x80050dd4u, &a);
        wr32(param_1, r3);
    }
    wr32(param_1 + 4u, 0u);
    r30 = param_1 + 0x58u;
    r29 = 0u;
    wr32(param_1 + 8u, 0x40u);
    wr32(param_1 + 0xcu, 0x40u);
    wr32(param_1 + 0x10u, 0x40u);
    wr32(param_1 + 0x14u, 0x40u);
    wr32(param_1 + 0x18u, 0x40u);
    wr32(param_1 + 0x1cu, 0x40u);
    wr32(param_1 + 0x20u, 0x40u);
    wr32(param_1 + 0x24u, 0x40u);
    wr32(param_1 + 0x28u, 0x40u);
    wr32(param_1 + 0x2cu, 0x40u);
    wr32(param_1 + 0x30u, 0x40u);
    wr32(param_1 + 0x34u, 0x40u);
    wr32(param_1 + 0x38u, 0x40u);
    wr32(param_1 + 0x3cu, 0x40u);
    wr32(param_1 + 0x40u, 0x40u);
    wr32(param_1 + 0x44u, 0x40u);
    wr32(param_1 + 0x48u, 0x40u);
    wr32(param_1 + 0x4cu, 0x40u);
    wr32(param_1 + 0x50u, 0x40u);
    wr32(param_1 + 0x54u, 0x40u);
    do {
        a.r[0] = r30;
        (void)tc_call(0x8013e3d4u, &a);
        wr32(r28 + 0x70u, 0u);
        r29 = r29 + 1u;
        r30 = r30 + 0x20u;
        wr32(r28 + 0x74u, 0u);
        r28 = r28 + 0x20u;
    } while (r29 < 0x4au);
    return;
}

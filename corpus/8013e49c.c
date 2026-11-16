#include "tc_rt.h"

u32 fn_8013e49c(u32 param_1)
{
    u32 r28 = 0, r29 = 0, r30 = 0;
    TcArgs a = {0};
    r30 = param_1 + 0x58u;
    r29 = param_1;
    r28 = 0u;
    wr32(param_1, 0u);
    wr32(param_1 + 4u, 0u);
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
        wr32(r29 + 0x70u, 0u);
        r28 = r28 + 1u;
        r30 = r30 + 0x20u;
        wr32(r29 + 0x74u, 0u);
        r29 = r29 + 0x20u;
    } while (r28 < 0x4au);
    return param_1;
}

#include "tc_rt.h"

void fn_8021955c(u32 param_r3, u32 param_r4)
{
    u32 r4 = 0, r5 = 0, r6 = 0, r27 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r5 = rd32(param_r4);
    r30 = 0u;
    r27 = param_r4;
    r31 = param_r3;
    wr8(param_r3, (u8)((((0u - r5) | r5) >> 0x1fu) & 1u));
    r4 = rd32(param_r4 + 4u);
    wr8(param_r3 + 1u, (u8)((((0u - r4) | r4) >> 0x1fu) & 1u));
    do {
        r6 = rd32(r27 + 8u);
        wr8(param_r3 + r30 + 2u, (u8)((((0u - r6) | r6) >> 0x1fu) & 1u));
        r4 = rd32(r27 + 0x14u);
        wr32(r31 + 8u, r4);
        r6 = rd32(r27 + 0x20u);
        wr32(r31 + 0x14u, r6);
        a.r[0] = param_r3;
        a.r[1] = r4;
        a.r[2] = r30;
        a.r[3] = r6;
        (void)tc_call(0x8021ab6cu, &a);
        r30 = r30 + 1u;
        r31 = r31 + 4u;
        r27 = r27 + 4u;
    } while ((s32)r30 < 3);
    wr32(param_r3 + 0x20u, rd32(param_r4 + 0x2cu));
    wrf32d(param_r3 + 0x24u, (f64)rdf32(param_r4 + 0x30u));
    wrf32d(param_r3 + 0x28u, (f64)rdf32(param_r4 + 0x34u));
    wrf32d(param_r3 + 0x2cu, (f64)rdf32(param_r4 + 0x38u));
    wr32(param_r3 + 0x34u, rd32(param_r4 + 0x3cu));
    wrf32d(param_r3 + 0x38u, (f64)rdf32(param_r4 + 0x40u));
    wrf32d(param_r3 + 0x3cu, (f64)rdf32(param_r4 + 0x44u));
    wrf32d(param_r3 + 0x40u, (f64)rdf32(param_r4 + 0x48u));
    wr32(param_r3 + 0x44u, rd32(param_r4 + 0x4cu));
    wr32(param_r3 + 0x48u, rd32(param_r4 + 0x50u));
    wr32(param_r3 + 0x4cu, rd32(param_r4 + 0x54u));
    wr32(param_r3 + 0x50u, rd32(param_r4 + 0x58u));
    wr32(param_r3 + 0x54u, rd32(param_r4 + 0x5cu));
    wr32(param_r3 + 0x6cu, 0u);
    wr32(param_r3 + 0x70u, 0u);
    return;
}

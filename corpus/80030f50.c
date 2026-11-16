#include "tc_rt.h"

void fn_80030f50(u32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    u32 r0 = 0, r3 = 0, r28 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    r28 = rd32(param_2 + 8u);
    a.r[0] = param_4;
    r3 = tc_call(0x80030eb4u, &a);
    f1 = (f64)rdf32(0x80571e40u);
    f0 = (f64)rdf32(0x80571e44u);
    r31 = (rd32(param_1) + 3u) & 0xfffffffcu;
    wr32(param_1, r31 + 0x90u);
    r0 = ((r3 * r28) + 3u) & 0xfffffffcu;
    wrf32d(r31, f1);
    wrf32d(r31 + 0x10u, f0);
    wrf32d(r31 + 0x20u, f0);
    wrf32d(r31 + 4u, f0);
    wrf32d(r31 + 0x14u, f1);
    wrf32d(r31 + 0x24u, f0);
    wrf32d(r31 + 8u, f0);
    wrf32d(r31 + 0x18u, f0);
    wrf32d(r31 + 0x28u, f1);
    wrf32d(r31 + 0xcu, f0);
    wrf32d(r31 + 0x1cu, f0);
    wrf32d(r31 + 0x2cu, f0);
    wr16(r31 + 0x32u, (u16)param_4);
    wr32(r31 + 0x34u, r28);
    wr32(r31 + 0x3cu, r3);
    wr16(r31 + 0x30u, 0u);
    wr32(r31 + 0x48u, 0u);
    wr32(r31 + 0x40u, 0u);
    wr32(r31 + 0x44u, 0u);
    wr32(r31 + 0x4cu, param_2);
    wr32(r31 + 0x50u, param_3);
    wrf32d(r31 + 0x54u, f0);
    wrf32d(r31 + 0x58u, f1);
    wrf32d(r31 + 0x5cu, f0);
    wrf32d(r31 + 0x60u, f1);
    wr16(r31 + 0x64u, 0u);
    wr32(r31 + 0x68u, 0u);
    wr16(r31 + 0x66u, 0u);
    wr32(r31 + 0x6cu, 0u);
    r3 = (rd32(param_1) + 3u) & 0xfffffffcu;
    r0 = r3 + r0;
    wr32(param_1, r0);
    wr32(r31 + 0x38u, r3);
    r3 = rd32(param_2 + 0x3cu);
    if (r3 != 0u) {
        r0 = (u32)rd16(r3 + 4u);
    } else {
        r0 = 0u;
    }
    if ((s32)r0 > 0) {
        r0 = (r0 * 0x30u) + 3u;
        r3 = (rd32(param_1) + 3u) & 0xfffffffcu;
        r0 = r0 & 0xfffffffcu;
        r0 = r3 + r0;
        wr32(param_1, r0);
        wr32(r31 + 0x6cu, r3);
    }
    a.r[0] = param_2;
    r3 = tc_call(0x80030ef8u, &a);
    r0 = r3 & 0xffffu;
    wr16(r31 + 0x64u, (u16)r3);
    if (r0 != 0u) {
        r0 = ((r0 << 2u) & 0x3fffcu) + 3u;
        r3 = (rd32(param_1) + 3u) & 0xfffffffcu;
        r0 = r0 & 0xfffffffcu;
        r0 = r3 + r0;
        wr32(param_1, r0);
        wr32(r31 + 0x68u, r3);
    }
    wr32(r31 + 0x78u, 0u);
    wr32(r31 + 0x7cu, 0u);
    wr32(r31 + 0x80u, 0u);
    wr32(r31 + 0x84u, 0u);
    wr32(r31 + 0x88u, 0u);
    wr32(r31 + 0x8cu, 0u);
    return;
}

#include "tc_rt.h"

void fn_80147274(u32 param_1, u32 param_2, s32 param_3, u32 param_4, u32 param_5)
{
    u32 r0 = 0, r3 = 0, r5 = 0, r6 = 0, r28 = 0;
    TcArgs a = {0};
    a.r[0] = param_1;
    r3 = tc_call(0x8014703cu, &a);
    r28 = r3;
    if (r3 == 0xffffffffu) {
        return;
    }
    a.r[0] = param_1;
    a.r[1] = r3;
    (void)tc_call(0x8014714cu, &a);
    r6 = param_1 + ((r28 << 2u) & 0xfffffffcu);
    wr32(r6 + 0x54u, param_2);
    r5 = param_1 + (r28 * 0x3cu);
    wr32(r5 + 0xa8u, rd32((u32)param_3 + 4u));
    wr32(r5 + 0xacu, rd32((u32)param_3 + 8u));
    wr32(r5 + 0xb0u, rd32((u32)param_3 + 0xcu));
    r0 = rd32((u32)param_3 + 0x14u);
    wr32(r5 + 0xb4u, rd32((u32)param_3 + 0x10u));
    wr32(r5 + 0xb8u, r0);
    wr32(r5 + 0xbcu, rd32((u32)param_3 + 0x18u));
    r0 = rd32((u32)param_3 + 0x20u);
    wr32(r5 + 0xc0u, rd32((u32)param_3 + 0x1cu));
    wr32(r5 + 0xc4u, r0);
    r0 = rd32((u32)param_3 + 0x28u);
    wr32(r5 + 0xc8u, rd32((u32)param_3 + 0x24u));
    wr32(r5 + 0xccu, r0);
    wrf32d(r5 + 0xd0u, (f64)rdf32((u32)param_3 + 0x2cu));
    wrf32d(r5 + 0xd4u, (f64)rdf32((u32)param_3 + 0x30u));
    wrf32d(r5 + 0xd8u, (f64)rdf32((u32)param_3 + 0x34u));
    wrf32d(r5 + 0xdcu, (f64)rdf32((u32)param_3 + 0x38u));
    wr32(r6 + 0x554u, param_4);
    wr32(r6 + 0x5a4u, param_5);
    return;
}

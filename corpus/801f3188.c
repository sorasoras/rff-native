#include "tc_rt.h"

void fn_801f3188(u32 param_1, s32 param_2)
{
    u32 c0lt = 0, ctr = 0, r0 = 0, r3 = 0, r5 = 0, r6 = 0;
    TcArgs a = {0};
    wr32(param_1 + 0xfdcu, 0u);
    wr32(param_1 + 0xfe0u, 0u);
    a.r[0] = 0x2010u;
    r3 = tc_call(0x801f4adcu, &a);
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = 0x801f3380u;
        a.r[2] = 0x801f339cu;
        a.r[3] = 0x20u;
        a.r[4] = 0x100u;
        r3 = tc_call(0x80255464u, &a);
    }
    wr32(param_1 + 0xfe4u, r3);
    a.r[0] = 0x1210u;
    r3 = tc_call(0x801f4adcu, &a);
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = 0x801f4654u;
        a.r[2] = 0x801f4690u;
        a.r[3] = 0x48u;
        a.r[4] = 0x40u;
        r3 = tc_call(0x80255464u, &a);
    }
    r5 = param_1;
    r6 = param_1;
    wr32(param_1 + 0xfe8u, r3);
    ctr = 8u;
    do {
        wr32(r5 + 0xf14u, 0xffffffffu);
        wr32(r6, 0u);
        wr32(r6 + 4u, 0u);
        wr32(r6 + 8u, 0u);
        wr32(r6 + 0xcu, 0u);
        wr32(r6 + 0x10u, 0u);
        wr32(r6 + 0x14u, 0u);
        wr32(r5 + 0xf18u, 0xffffffffu);
        wr32(r6 + 0x18u, 0u);
        wr32(r6 + 0x1cu, 0u);
        wr32(r6 + 0x20u, 0u);
        wr32(r6 + 0x24u, 0u);
        wr32(r6 + 0x28u, 0u);
        wr32(r6 + 0x2cu, 0u);
        wr32(r5 + 0xf1cu, 0xffffffffu);
        wr32(r6 + 0x30u, 0u);
        wr32(r6 + 0x34u, 0u);
        wr32(r6 + 0x38u, 0u);
        wr32(r6 + 0x3cu, 0u);
        wr32(r6 + 0x40u, 0u);
        wr32(r6 + 0x44u, 0u);
        wr32(r5 + 0xf20u, 0xffffffffu);
        wr32(r6 + 0x48u, 0u);
        wr32(r6 + 0x4cu, 0u);
        wr32(r6 + 0x50u, 0u);
        wr32(r6 + 0x54u, 0u);
        wr32(r6 + 0x58u, 0u);
        wr32(r6 + 0x5cu, 0u);
        wr32(r5 + 0xf24u, 0xffffffffu);
        r5 = r5 + 0x14u;
        wr32(r6 + 0x60u, 0u);
        wr32(r6 + 0x64u, 0u);
        wr32(r6 + 0x68u, 0u);
        wr32(r6 + 0x6cu, 0u);
        wr32(r6 + 0x70u, 0u);
        wr32(r6 + 0x74u, 0u);
        r6 = r6 + 0x78u;
        ctr = ctr - 1u;
    } while (ctr != 0u);
    r0 = rd32(param_1 + 0xfd4u);
    wr32(param_1 + 0xfccu, 0xffffffffu);
    c0lt = param_2 < 1;
    wr32(param_1 + 0x3c0u, rd32(0x805712b4u));
    wr32(param_1 + 0xfd0u, r0);
    if ((u32)param_2 == 1u) {
        a.r[0] = param_1;
        a.r[1] = 1u;
        (void)tc_call(0x801f3674u, &a);
        if ((s32)rd32(param_1 + 0xf10u) > 0) {
            wr32(param_1 + 0xfd0u, rd32(param_1 + 0xf08u));
        }
    } else if (!c0lt) {
        if (param_2 < 3) {
            a.r[0] = param_1;
            a.r[1] = 2u;
            (void)tc_call(0x801f3810u, &a);
        }
    } else if (param_2 >= 0) {
        a.r[0] = param_1;
        a.r[1] = 0u;
        (void)tc_call(0x801f3674u, &a);
        if ((s32)rd32(param_1 + 0xf10u) > 0) {
            wr32(param_1 + 0xfd0u, rd32(param_1 + 0xf08u));
        }
    }
    return;
}

#include "tc_rt.h"

void fn_8008f290(u32 param_1)
{
    u32 r3 = 0, r4 = 0, r5 = 0;
    TcArgs a = {0};
    r4 = rd32(param_1);
    if ((u32)rd8(r4) == 0u && (u32)rd8(r4 + 1u) == 0u) {
        do {
            if ((u32)rd8(0x80492b98u) == 1u) {
                a.r[0] = rd32(0x805706e8u);
                r3 = tc_call(0x8007d150u, &a);
                if (rd32(r3 + 4u) == 0u) {
                    r4 = rd32(param_1 + 0x8cu);
                    if (((ppc_cntlzw((u32)((s32)((r4 << 1u) & 0xc0000000u) >> 31)) >> 5u) & 0x7ffffffu) == 0u) {
                        r5 = (u32)rd8(rd32(param_1));
                        r4 = (r4 & 0xbfffffffu) | ((ppc_cntlzw((((2u - r5) | (r5 - 2u)) >> 0x1fu) & 1u) << 0x19u) & 0x40000000u);
                        wr32(param_1 + 0x8cu, r4);
                    }
                    wr8(rd32(param_1), 2u);
                    break;
                }
            }
            r4 = rd32(param_1 + 0x8cu);
            if (((ppc_cntlzw((u32)((s32)((r4 << 1u) & 0xc0000000u) >> 31)) >> 5u) & 0x7ffffffu) == 0u) {
                r5 = (u32)rd8(rd32(param_1));
                r4 = (r4 & 0xbfffffffu) | ((ppc_cntlzw((((1u - r5) | (r5 - 1u)) >> 0x1fu) & 1u) << 0x19u) & 0x40000000u);
                wr32(param_1 + 0x8cu, r4);
            }
            wr8(rd32(param_1), 1u);
        } while (0);
        a.r[0] = 0x804b9da0u;
        a.r[1] = 0xbcfu;
        a.r[2] = param_1 + 0x50u;
        (void)tc_call(0x8010a794u, &a);
        a.f[0] = (f64)rdf32(0x80572968u);
        a.r[0] = 0x3du;
        a.r[1] = param_1 + 0x50u;
        a.r[2] = 0x804b15c0u;
        a.r[3] = 0x804890c8u;
        (void)tc_call(0x800d783cu, &a);
    }
    return;
}

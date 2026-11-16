#include "tc_rt.h"

void fn_800a86f0(void)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r7 = 0, r8 = 0, r9 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r31 = 0u;
    r3 = rd32(0x805711ccu);
    f1 = (f64)rdf32(r3 + 0x58u);
    if ((f64)(f32)ppc_fabs(f1) > (f64)rdf32(0x80572b70u)) {
        if (!(f1 > (f64)rdf32(0x80572b60u))) {
            r31 = 8u;
        } else {
            r31 = 2u;
        }
    }
    f1 = (f64)rdf32(r3 + 0x5cu);
    if ((f64)(f32)ppc_fabs(f1) > (f64)rdf32(0x80572b70u)) {
        if (!(f1 > (f64)rdf32(0x80572b60u))) {
            r31 = r31 | 4u;
        } else {
            r31 = r31 | 1u;
        }
    }
    wr32(0x803541c4u, 0u);
    wr32(0x803541c8u, 0u);
    wr32(0x803541ccu, 0u);
    if (r31 != 0u) {
        r7 = 0x80354130u;
        r8 = 0u;
        ctr = 4u;
        do {
            r9 = ((r8 & 0x20u) != 0u) ? 0u : (1u << (r8 & 0x1fu));
            if ((r31 & r9) == 0u) {
                wr8(r7 + 0xa0u, 0u);
                wr8(r7 + 0xa4u, 0u);
            } else {
                r0 = (u32)rd8(r7 + 0xa0u);
                if (r0 >= 0x10u) {
                    r3 = (u32)rd8(r7 + 0xa4u) + 1u;
                    wr8(r7 + 0xa4u, (u8)r3);
                    if ((r3 & 0xffu) > 2u) {
                        wr8(r7 + 0xa4u, 0u);
                        wr32(0x803541ccu, rd32(0x803541ccu) | r9);
                    }
                } else {
                    if (r0 == 0u) {
                        r0 = rd32(0x803541ccu) | r9;
                        wr32(0x803541c4u, rd32(0x803541c4u) | r9);
                        wr32(0x803541ccu, r0);
                    }
                    r3 = (u32)rd8(r7 + 0xa0u) + 1u;
                    wr8(r7 + 0xa0u, (u8)r3);
                    if ((r3 & 0xffu) >= 0x10u) {
                        wr32(0x803541ccu, rd32(0x803541ccu) | r9);
                    }
                }
                wr32(0x803541c8u, rd32(0x803541c8u) | r9);
            }
            r7 = r7 + 1u;
            r8 = r8 + 1u;
            ctr = ctr - 1u;
        } while (ctr != 0u);
    } else {
        (void)tc_call(0x800a86b0u, &a);
    }
    wr32(0x803541c0u, r31);
    return;
}

#include "tc_rt.h"

void fn_80325c8c(u32 param_1)
{
    u32 c0gt = 0, ctr = 0, r0 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    f1 = (f64)rdf32(0x80577be0u);
    f0 = (f64)rdf32(0x80577be4u);
    r6 = param_1 + 0x34u;
    r5 = param_1 + 0x94u;
    wr32(param_1, 0x8039db98u);
    wr32(param_1 + 4u, 0u);
    wrf32d(param_1 + 8u, f1);
    wrf32d(param_1 + 0xcu, f1);
    wrf32d(param_1 + 0x10u, f1);
    wrf32d(param_1 + 0x14u, f1);
    wr32(param_1 + 0x18u, 0u);
    wr32(param_1 + 0x1cu, 0u);
    wrf32d(param_1 + 0x20u, f1);
    wrf32d(param_1 + 0x24u, f1);
    wrf32d(param_1 + 0x28u, f0);
    wrf32d(param_1 + 0x2cu, f0);
    wrf32d(param_1 + 0x30u, f0);
    if (r6 < r5) {
        r8 = param_1 + 0x34u;
        r9 = r5 - r8;
        r7 = param_1 - 0xecu;
        r10 = r9 + 0x2fu;
        r0 = (u32)((s32)ppc_mulhw(715827883, (s32)r10) >> 3);
        r11 = r0 + ((r0 >> 0x1fu) & 1u);
        r12 = r11 + 1u;
        if ((s32)r12 > 8) {
            c0gt = r8 > r5;
            r4 = 0u;
            r5 = 0u;
            if (!c0gt) {
                r8 = 1u;
                if ((r9 & 0x80000000u) == 0u && (r10 & 0x80000000u) != 0u) {
                    r8 = 0u;
                }
                if (r8 != 0u) {
                    r5 = 1u;
                }
            }
            if (r5 != 0u) {
                r8 = r11 & 0x80000000u;
                r5 = 1u;
                if (r8 == 0u && r8 != (r12 & 0x80000000u)) {
                    r5 = 0u;
                }
                if (r5 != 0u) {
                    r4 = 1u;
                }
            }
            if (r4 != 0u) {
                f1 = (f64)rdf32(0x80577be0u);
                f0 = (f64)rdf32(0x80577be4u);
                ctr = ppc_divwu(r7 + 0x17fu - r6, 0x180u);
                if (r6 < r7) {
                    do {
                        wr32(r6, 0u);
                        wrf32d(r6 + 4u, f1);
                        wrf32d(r6 + 8u, f1);
                        wrf32d(r6 + 0xcu, f1);
                        wrf32d(r6 + 0x10u, f1);
                        wr32(r6 + 0x14u, 0u);
                        wr32(r6 + 0x18u, 0u);
                        wrf32d(r6 + 0x1cu, f1);
                        wrf32d(r6 + 0x20u, f1);
                        wrf32d(r6 + 0x24u, f0);
                        wrf32d(r6 + 0x28u, f0);
                        wrf32d(r6 + 0x2cu, f0);
                        wr32(r6 + 0x30u, 0u);
                        wrf32d(r6 + 0x34u, f1);
                        wrf32d(r6 + 0x38u, f1);
                        wrf32d(r6 + 0x3cu, f1);
                        wrf32d(r6 + 0x40u, f1);
                        wr32(r6 + 0x44u, 0u);
                        wr32(r6 + 0x48u, 0u);
                        wrf32d(r6 + 0x4cu, f1);
                        wrf32d(r6 + 0x50u, f1);
                        wrf32d(r6 + 0x54u, f0);
                        wrf32d(r6 + 0x58u, f0);
                        wrf32d(r6 + 0x5cu, f0);
                        wr32(r6 + 0x60u, 0u);
                        wrf32d(r6 + 0x64u, f1);
                        wrf32d(r6 + 0x68u, f1);
                        wrf32d(r6 + 0x6cu, f1);
                        wrf32d(r6 + 0x70u, f1);
                        wr32(r6 + 0x74u, 0u);
                        wr32(r6 + 0x78u, 0u);
                        wrf32d(r6 + 0x7cu, f1);
                        wrf32d(r6 + 0x80u, f1);
                        wrf32d(r6 + 0x84u, f0);
                        wrf32d(r6 + 0x88u, f0);
                        wrf32d(r6 + 0x8cu, f0);
                        wr32(r6 + 0x90u, 0u);
                        wrf32d(r6 + 0x94u, f1);
                        wrf32d(r6 + 0x98u, f1);
                        wrf32d(r6 + 0x9cu, f1);
                        wrf32d(r6 + 0xa0u, f1);
                        wr32(r6 + 0xa4u, 0u);
                        wr32(r6 + 0xa8u, 0u);
                        wrf32d(r6 + 0xacu, f1);
                        wrf32d(r6 + 0xb0u, f1);
                        wrf32d(r6 + 0xb4u, f0);
                        wrf32d(r6 + 0xb8u, f0);
                        wrf32d(r6 + 0xbcu, f0);
                        wr32(r6 + 0xc0u, 0u);
                        wrf32d(r6 + 0xc4u, f1);
                        wrf32d(r6 + 0xc8u, f1);
                        wrf32d(r6 + 0xccu, f1);
                        wrf32d(r6 + 0xd0u, f1);
                        wr32(r6 + 0xd4u, 0u);
                        wr32(r6 + 0xd8u, 0u);
                        wrf32d(r6 + 0xdcu, f1);
                        wrf32d(r6 + 0xe0u, f1);
                        wrf32d(r6 + 0xe4u, f0);
                        wrf32d(r6 + 0xe8u, f0);
                        wrf32d(r6 + 0xecu, f0);
                        wr32(r6 + 0xf0u, 0u);
                        wrf32d(r6 + 0xf4u, f1);
                        wrf32d(r6 + 0xf8u, f1);
                        wrf32d(r6 + 0xfcu, f1);
                        wrf32d(r6 + 0x100u, f1);
                        wr32(r6 + 0x104u, 0u);
                        wr32(r6 + 0x108u, 0u);
                        wrf32d(r6 + 0x10cu, f1);
                        wrf32d(r6 + 0x110u, f1);
                        wrf32d(r6 + 0x114u, f0);
                        wrf32d(r6 + 0x118u, f0);
                        wrf32d(r6 + 0x11cu, f0);
                        wr32(r6 + 0x120u, 0u);
                        wrf32d(r6 + 0x124u, f1);
                        wrf32d(r6 + 0x128u, f1);
                        wrf32d(r6 + 0x12cu, f1);
                        wrf32d(r6 + 0x130u, f1);
                        wr32(r6 + 0x134u, 0u);
                        wr32(r6 + 0x138u, 0u);
                        wrf32d(r6 + 0x13cu, f1);
                        wrf32d(r6 + 0x140u, f1);
                        wrf32d(r6 + 0x144u, f0);
                        wrf32d(r6 + 0x148u, f0);
                        wrf32d(r6 + 0x14cu, f0);
                        wr32(r6 + 0x150u, 0u);
                        wrf32d(r6 + 0x154u, f1);
                        wrf32d(r6 + 0x158u, f1);
                        wrf32d(r6 + 0x15cu, f1);
                        wrf32d(r6 + 0x160u, f1);
                        wr32(r6 + 0x164u, 0u);
                        wr32(r6 + 0x168u, 0u);
                        wrf32d(r6 + 0x16cu, f1);
                        wrf32d(r6 + 0x170u, f1);
                        wrf32d(r6 + 0x174u, f0);
                        wrf32d(r6 + 0x178u, f0);
                        wrf32d(r6 + 0x17cu, f0);
                        r6 = r6 + 0x180u;
                        ctr = ctr - 1u;
                    } while (ctr != 0u);
                }
            }
        }
        r5 = param_1 + 0x94u;
        f1 = (f64)rdf32(0x80577be0u);
        f0 = (f64)rdf32(0x80577be4u);
        ctr = ppc_divwu(r5 + 0x2fu - r6, 0x30u);
        if (r6 >= r5) {
            return;
        }
        do {
            wr32(r6, 0u);
            wrf32d(r6 + 4u, f1);
            wrf32d(r6 + 8u, f1);
            wrf32d(r6 + 0xcu, f1);
            wrf32d(r6 + 0x10u, f1);
            wr32(r6 + 0x14u, 0u);
            wr32(r6 + 0x18u, 0u);
            wrf32d(r6 + 0x1cu, f1);
            wrf32d(r6 + 0x20u, f1);
            wrf32d(r6 + 0x24u, f0);
            wrf32d(r6 + 0x28u, f0);
            wrf32d(r6 + 0x2cu, f0);
            r6 = r6 + 0x30u;
            ctr = ctr - 1u;
        } while (ctr != 0u);
        return;
    }
    return;
}

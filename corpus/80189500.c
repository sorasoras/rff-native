#include "tc_rt.h"

s32 fn_80189500(s32 param_1)
{
    u32 c0gt = 0, ctr = 0, r0 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0;
    TcArgs a = {0};
    r7 = (u32)param_1 + 0x30u;
    r5 = (u32)param_1 + 0x3a0u;
    wr32((u32)param_1 + 8u, 0u);
    wr32((u32)param_1 + 0x20u, 0u);
    wr32((u32)param_1 + 0x1cu, 0u);
    wr32((u32)param_1 + 0x18u, 0xffffffffu);
    wr32((u32)param_1 + 0x24u, 1u);
    wr32((u32)param_1 + 0xcu, 0u);
    wr32((u32)param_1 + 0x10u, 0u);
    wr32((u32)param_1 + 0x14u, 0u);
    wr32((u32)param_1 + 0x28u, 0u);
    wr32((u32)param_1 + 0x2cu, 0u);
    if (r7 < r5) {
        r6 = (u32)param_1 + 0x30u;
        r9 = r5 - r6;
        r8 = (u32)param_1 + 0x260u;
        r10 = r9 + 0x27u;
        r0 = (u32)((s32)ppc_mulhw(1717986919, (s32)r10) >> 4);
        r11 = r0 + ((r0 >> 0x1fu) & 1u);
        r12 = r11 + 1u;
        if ((s32)r12 > 8) {
            c0gt = r6 > r5;
            r4 = 0u;
            r5 = 0u;
            if (!c0gt) {
                r6 = 1u;
                if ((r9 & 0x80000000u) == 0u && (r10 & 0x80000000u) != 0u) {
                    r6 = 0u;
                }
                if (r6 != 0u) {
                    r5 = 1u;
                }
            }
            if (r5 != 0u) {
                r6 = r11 & 0x80000000u;
                r5 = 1u;
                if (r6 == 0u && r6 != (r12 & 0x80000000u)) {
                    r5 = 0u;
                }
                if (r5 != 0u) {
                    r4 = 1u;
                }
            }
            if (r4 != 0u) {
                ctr = ppc_divwu(r8 + 0x13fu - r7, 0x140u);
                if (r7 < r8) {
                    do {
                        wr32(r7, 0u);
                        wr32(r7 + 0x18u, 0u);
                        wr32(r7 + 0x14u, 0u);
                        wr32(r7 + 0x10u, 0xffffffffu);
                        wr32(r7 + 0x1cu, 1u);
                        wr32(r7 + 4u, 0u);
                        wr32(r7 + 8u, 0u);
                        wr32(r7 + 0xcu, 0u);
                        wr32(r7 + 0x20u, 0u);
                        wr32(r7 + 0x24u, 0u);
                        wr32(r7 + 0x28u, 0u);
                        wr32(r7 + 0x40u, 0u);
                        wr32(r7 + 0x3cu, 0u);
                        wr32(r7 + 0x38u, 0xffffffffu);
                        wr32(r7 + 0x44u, 1u);
                        wr32(r7 + 0x2cu, 0u);
                        wr32(r7 + 0x30u, 0u);
                        wr32(r7 + 0x34u, 0u);
                        wr32(r7 + 0x48u, 0u);
                        wr32(r7 + 0x4cu, 0u);
                        wr32(r7 + 0x50u, 0u);
                        wr32(r7 + 0x68u, 0u);
                        wr32(r7 + 0x64u, 0u);
                        wr32(r7 + 0x60u, 0xffffffffu);
                        wr32(r7 + 0x6cu, 1u);
                        wr32(r7 + 0x54u, 0u);
                        wr32(r7 + 0x58u, 0u);
                        wr32(r7 + 0x5cu, 0u);
                        wr32(r7 + 0x70u, 0u);
                        wr32(r7 + 0x74u, 0u);
                        wr32(r7 + 0x78u, 0u);
                        wr32(r7 + 0x90u, 0u);
                        wr32(r7 + 0x8cu, 0u);
                        wr32(r7 + 0x88u, 0xffffffffu);
                        wr32(r7 + 0x94u, 1u);
                        wr32(r7 + 0x7cu, 0u);
                        wr32(r7 + 0x80u, 0u);
                        wr32(r7 + 0x84u, 0u);
                        wr32(r7 + 0x98u, 0u);
                        wr32(r7 + 0x9cu, 0u);
                        wr32(r7 + 0xa0u, 0u);
                        wr32(r7 + 0xb8u, 0u);
                        wr32(r7 + 0xb4u, 0u);
                        wr32(r7 + 0xb0u, 0xffffffffu);
                        wr32(r7 + 0xbcu, 1u);
                        wr32(r7 + 0xa4u, 0u);
                        wr32(r7 + 0xa8u, 0u);
                        wr32(r7 + 0xacu, 0u);
                        wr32(r7 + 0xc0u, 0u);
                        wr32(r7 + 0xc4u, 0u);
                        wr32(r7 + 0xc8u, 0u);
                        wr32(r7 + 0xe0u, 0u);
                        wr32(r7 + 0xdcu, 0u);
                        wr32(r7 + 0xd8u, 0xffffffffu);
                        wr32(r7 + 0xe4u, 1u);
                        wr32(r7 + 0xccu, 0u);
                        wr32(r7 + 0xd0u, 0u);
                        wr32(r7 + 0xd4u, 0u);
                        wr32(r7 + 0xe8u, 0u);
                        wr32(r7 + 0xecu, 0u);
                        wr32(r7 + 0xf0u, 0u);
                        wr32(r7 + 0x108u, 0u);
                        wr32(r7 + 0x104u, 0u);
                        wr32(r7 + 0x100u, 0xffffffffu);
                        wr32(r7 + 0x10cu, 1u);
                        wr32(r7 + 0xf4u, 0u);
                        wr32(r7 + 0xf8u, 0u);
                        wr32(r7 + 0xfcu, 0u);
                        wr32(r7 + 0x110u, 0u);
                        wr32(r7 + 0x114u, 0u);
                        wr32(r7 + 0x118u, 0u);
                        wr32(r7 + 0x130u, 0u);
                        wr32(r7 + 0x12cu, 0u);
                        wr32(r7 + 0x128u, 0xffffffffu);
                        wr32(r7 + 0x134u, 1u);
                        wr32(r7 + 0x11cu, 0u);
                        wr32(r7 + 0x120u, 0u);
                        wr32(r7 + 0x124u, 0u);
                        wr32(r7 + 0x138u, 0u);
                        wr32(r7 + 0x13cu, 0u);
                        r7 = r7 + 0x140u;
                        ctr = ctr - 1u;
                    } while (ctr != 0u);
                }
            }
        }
        r4 = (u32)param_1 + 0x3a0u;
        ctr = ppc_divwu(r4 + 0x27u - r7, 0x28u);
        if (r7 < r4) {
            do {
                wr32(r7, 0u);
                wr32(r7 + 0x18u, 0u);
                wr32(r7 + 0x14u, 0u);
                wr32(r7 + 0x10u, 0xffffffffu);
                wr32(r7 + 0x1cu, 1u);
                wr32(r7 + 4u, 0u);
                wr32(r7 + 8u, 0u);
                wr32(r7 + 0xcu, 0u);
                wr32(r7 + 0x20u, 0u);
                wr32(r7 + 0x24u, 0u);
                r7 = r7 + 0x28u;
                ctr = ctr - 1u;
            } while (ctr != 0u);
        }
    }
    a.r[0] = (u32)param_1;
    (void)tc_call(0x80189824u, &a);
    return param_1;
}

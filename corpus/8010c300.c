#include "tc_rt.h"

s32 fn_8010c300(s32 param_1)
{
    u32 c0gt = 0, ctr = 0, r0 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0;
    TcArgs a = {0};
    r7 = (u32)param_1 + 0x24u;
    r5 = (u32)param_1 + 0x180cu;
    wr32((u32)param_1 + 0xcu, 0xffffffffu);
    wr32((u32)param_1 + 0x14u, 0xffffffffu);
    wr32((u32)param_1 + 0x18u, 0u);
    if (r7 < r5) {
        r8 = (u32)param_1 + 0x24u;
        r9 = r5 - r8;
        r6 = (u32)param_1 + 0x174cu;
        r10 = r9 + 0x17u;
        r0 = (u32)((s32)ppc_mulhw(715827883, (s32)r10) >> 2);
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
                ctr = ppc_divwu(r6 + 0xbfu - r7, 0xc0u);
                if (r7 < r6) {
                    do {
                        wr32(r7, 0xffffffffu);
                        wr32(r7 + 8u, 0xffffffffu);
                        wr32(r7 + 0xcu, 0u);
                        wr32(r7 + 0x18u, 0xffffffffu);
                        wr32(r7 + 0x20u, 0xffffffffu);
                        wr32(r7 + 0x24u, 0u);
                        wr32(r7 + 0x30u, 0xffffffffu);
                        wr32(r7 + 0x38u, 0xffffffffu);
                        wr32(r7 + 0x3cu, 0u);
                        wr32(r7 + 0x48u, 0xffffffffu);
                        wr32(r7 + 0x50u, 0xffffffffu);
                        wr32(r7 + 0x54u, 0u);
                        wr32(r7 + 0x60u, 0xffffffffu);
                        wr32(r7 + 0x68u, 0xffffffffu);
                        wr32(r7 + 0x6cu, 0u);
                        wr32(r7 + 0x78u, 0xffffffffu);
                        wr32(r7 + 0x80u, 0xffffffffu);
                        wr32(r7 + 0x84u, 0u);
                        wr32(r7 + 0x90u, 0xffffffffu);
                        wr32(r7 + 0x98u, 0xffffffffu);
                        wr32(r7 + 0x9cu, 0u);
                        wr32(r7 + 0xa8u, 0xffffffffu);
                        wr32(r7 + 0xb0u, 0xffffffffu);
                        wr32(r7 + 0xb4u, 0u);
                        r7 = r7 + 0xc0u;
                        ctr = ctr - 1u;
                    } while (ctr != 0u);
                }
            }
        }
        r4 = (u32)param_1 + 0x180cu;
        ctr = ppc_divwu(r4 + 0x17u - r7, 0x18u);
        if (r7 < r4) {
            do {
                wr32(r7, 0xffffffffu);
                wr32(r7 + 8u, 0xffffffffu);
                wr32(r7 + 0xcu, 0u);
                r7 = r7 + 0x18u;
                ctr = ctr - 1u;
            } while (ctr != 0u);
        }
    }
    a.r[0] = (u32)param_1;
    a.r[1] = 0x10u;
    (void)tc_call(0x802de7dcu, &a);
    a.r[0] = (u32)param_1;
    a.r[1] = 0u;
    (void)tc_call(0x8010c9f0u, &a);
    return param_1;
}

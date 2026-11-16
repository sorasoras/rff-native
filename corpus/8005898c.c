#include "tc_rt.h"

u32 fn_8005898c(u32 param_1)
{
    u32 c0gt = 0, ctr = 0, r0 = 0, r4 = 0, r6 = 0, r7 = 0;
    TcArgs a = {0};
    r7 = param_1 + 0x14u;
    r0 = param_1 + 0xaf0u;
    c0gt = r7 > r0;
    wr32(param_1, 0u);
    wr32(param_1 + 4u, 0u);
    wr32(param_1 + 0x10u, 1u);
    if (r7 < r0) {
        r6 = param_1 + 0xa50u;
        r0 = 0u;
        r4 = 0u;
        if (!c0gt) {
            r4 = 1u;
        }
        if (r4 != 0u) {
            r0 = 1u;
        }
        if (r0 != 0u) {
            ctr = ppc_divwu(r6 + 0x9fu - r7, 0xa0u);
            if (r7 < r6) {
                do {
                    wr32(r7, 0u);
                    wr32(r7 + 4u, 0u);
                    wr32(r7 + 0x10u, 1u);
                    wr32(r7 + 0x14u, 0u);
                    wr32(r7 + 0x18u, 0u);
                    wr32(r7 + 0x24u, 1u);
                    wr32(r7 + 0x28u, 0u);
                    wr32(r7 + 0x2cu, 0u);
                    wr32(r7 + 0x38u, 1u);
                    wr32(r7 + 0x3cu, 0u);
                    wr32(r7 + 0x40u, 0u);
                    wr32(r7 + 0x4cu, 1u);
                    wr32(r7 + 0x50u, 0u);
                    wr32(r7 + 0x54u, 0u);
                    wr32(r7 + 0x60u, 1u);
                    wr32(r7 + 0x64u, 0u);
                    wr32(r7 + 0x68u, 0u);
                    wr32(r7 + 0x74u, 1u);
                    wr32(r7 + 0x78u, 0u);
                    wr32(r7 + 0x7cu, 0u);
                    wr32(r7 + 0x88u, 1u);
                    wr32(r7 + 0x8cu, 0u);
                    wr32(r7 + 0x90u, 0u);
                    wr32(r7 + 0x9cu, 1u);
                    r7 = r7 + 0xa0u;
                    ctr = ctr - 1u;
                } while (ctr != 0u);
            }
        }
        r4 = param_1 + 0xaf0u;
        ctr = ppc_divwu(r4 + 0x13u - r7, 0x14u);
        if (r7 < r4) {
            do {
                wr32(r7, 0u);
                wr32(r7 + 4u, 0u);
                wr32(r7 + 0x10u, 1u);
                r7 = r7 + 0x14u;
                ctr = ctr - 1u;
            } while (ctr != 0u);
        }
    }
    a.r[0] = param_1;
    (void)tc_call(0x80058b14u, &a);
    return param_1;
}

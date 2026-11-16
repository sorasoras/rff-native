#include "tc_rt.h"

u32 fn_80146f00(s32 param_1)
{
    u32 ctr = 0, r4 = 0, r6 = 0, r7 = 0, r8 = 0;
    r8 = 1u;
    ctr = 2u;
    do {
        r6 = rd32((u32)param_1 + 0xd94u);
        r4 = r6 + r8;
        r7 = r4 - (((ppc_mulhwu(0xcccccccdu, r4) >> 3u) & 0x1fffffffu) * 0xau);
        if ((rd32((u32)param_1 + (r7 * 0x94u) + 0x744u) + 0x10000u) == 0xffffu) {
            return r7;
        }
        r8 = r8 + 1u;
        r4 = r6 + r8;
        r7 = r4 - (((ppc_mulhwu(0xcccccccdu, r4) >> 3u) & 0x1fffffffu) * 0xau);
        if ((rd32((u32)param_1 + (r7 * 0x94u) + 0x744u) + 0x10000u) == 0xffffu) {
            return r7;
        }
        r8 = r8 + 1u;
        r4 = r6 + r8;
        r7 = r4 - (((ppc_mulhwu(0xcccccccdu, r4) >> 3u) & 0x1fffffffu) * 0xau);
        if ((rd32((u32)param_1 + (r7 * 0x94u) + 0x744u) + 0x10000u) == 0xffffu) {
            return r7;
        }
        r8 = r8 + 1u;
        r4 = r6 + r8;
        r7 = r4 - (((ppc_mulhwu(0xcccccccdu, r4) >> 3u) & 0x1fffffffu) * 0xau);
        if ((rd32((u32)param_1 + (r7 * 0x94u) + 0x744u) + 0x10000u) == 0xffffu) {
            return r7;
        }
        r8 = r8 + 1u;
        r4 = r6 + r8;
        r7 = r4 - (((ppc_mulhwu(0xcccccccdu, r4) >> 3u) & 0x1fffffffu) * 0xau);
        if ((rd32((u32)param_1 + (r7 * 0x94u) + 0x744u) + 0x10000u) == 0xffffu) {
            return r7;
        }
        r8 = r8 + 1u;
        ctr = ctr - 1u;
    } while (ctr != 0u);
    return 0xau;
}

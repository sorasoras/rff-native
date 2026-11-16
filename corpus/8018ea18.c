#include "tc_rt.h"

u32 fn_8018ea18(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0;
    TcArgs a = {0};
    a.r[0] = 9u;
    r3 = tc_call(0x800a7934u, &a);
    if (r3 == 1u) {
        r0 = rd32(0x8036ffa8u);
        wr32((u32)param_1 + 0x38u, rd32(0x8036ffa4u));
        wr32((u32)param_1 + 0x3cu, r0);
        wr32((u32)param_1 + 0x40u, rd32(0x8036ffacu));
    } else {
        if (r3 == 2u) {
            r3 = tc_call(0x80040b64u, &a);
            r3 = ((r3 - (((ppc_mulhwu(0x4ec4ec4fu, r3) >> 2u) & 0x3fffffffu) * 0xdu)) << 2u) & 0xfffffffcu;
            wr32((u32)param_1 + ((rd32((u32)param_1 + 0x80u) << 2u) & 0xfffffffcu) + 0x54u, r3 + 0xecu);
            r4 = (u32)param_1 + ((rd32((u32)param_1 + 0x80u) << 2u) & 0xfffffffcu);
            wr32(r4 + 0x54u, rd32(r4 + 0x54u) + rd32((u32)param_1 + 0x500u));
        } else {
            if (r3 == 3u) {
                r3 = tc_call(0x80040b64u, &a);
                r3 = ((r3 - ppc_divwu(r3, 1u)) << 2u) & 0xfffffffcu;
                wr32((u32)param_1 + ((rd32((u32)param_1 + 0x80u) << 2u) & 0xfffffffcu) + 0x54u, r3 + 0x120u);
                r4 = (u32)param_1 + ((rd32((u32)param_1 + 0x80u) << 2u) & 0xfffffffcu);
                wr32(r4 + 0x54u, rd32(r4 + 0x54u) + rd32((u32)param_1 + 0x500u));
            }
        }
        r0 = rd32(0x8036ffb4u);
        wr32((u32)param_1 + 0x38u, rd32(0x8036ffb0u));
        wr32((u32)param_1 + 0x3cu, r0);
        wr32((u32)param_1 + 0x40u, rd32(0x8036ffb8u));
    }
    return 1u;
}

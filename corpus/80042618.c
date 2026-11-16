#include "tc_rt.h"

u32 fn_80042618(u32 param_1, u32 param_2)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = param_2;
    if (param_2 != 0u) {
        a.r[0] = param_2;
        r3 = tc_call(0x802550d4u, &a);
        if (r3 > 0xfu) {
            r3 = 0xfu;
        }
        wr32(param_1, 0u);
        r4 = param_1;
        wr32(param_1 + 4u, 0u);
        wr32(param_1 + 8u, 0u);
        wr32(param_1 + 0xcu, 0u);
        wr32(param_1 + 0x10u, 0u);
        if (r3 > 0u) {
            r0 = (r3 >> 3u) & 0x1fffffffu;
            ctr = r0;
            if (r0 != 0u) {
                do {
                    r0 = (u32)rd8(r31);
                    wr8(r4, (u8)r0);
                    r0 = (u32)(s8)r0;
                    r0 = (rd32(param_1 + 0x10u) * 0x89u) + r0;
                    wr32(param_1 + 0x10u, r0);
                    r0 = (u32)rd8(r31 + 1u);
                    wr8(r4 + 1u, (u8)r0);
                    r0 = (u32)(s8)r0;
                    r0 = (rd32(param_1 + 0x10u) * 0x89u) + r0;
                    wr32(param_1 + 0x10u, r0);
                    r0 = (u32)rd8(r31 + 2u);
                    wr8(r4 + 2u, (u8)r0);
                    r0 = (u32)(s8)r0;
                    r0 = (rd32(param_1 + 0x10u) * 0x89u) + r0;
                    wr32(param_1 + 0x10u, r0);
                    r0 = (u32)rd8(r31 + 3u);
                    wr8(r4 + 3u, (u8)r0);
                    r0 = (u32)(s8)r0;
                    r0 = (rd32(param_1 + 0x10u) * 0x89u) + r0;
                    wr32(param_1 + 0x10u, r0);
                    r0 = (u32)rd8(r31 + 4u);
                    wr8(r4 + 4u, (u8)r0);
                    r0 = (u32)(s8)r0;
                    r0 = (rd32(param_1 + 0x10u) * 0x89u) + r0;
                    wr32(param_1 + 0x10u, r0);
                    r0 = (u32)rd8(r31 + 5u);
                    wr8(r4 + 5u, (u8)r0);
                    r0 = (u32)(s8)r0;
                    r0 = (rd32(param_1 + 0x10u) * 0x89u) + r0;
                    wr32(param_1 + 0x10u, r0);
                    r0 = (u32)rd8(r31 + 6u);
                    wr8(r4 + 6u, (u8)r0);
                    r0 = (u32)(s8)r0;
                    r0 = (rd32(param_1 + 0x10u) * 0x89u) + r0;
                    wr32(param_1 + 0x10u, r0);
                    r0 = (u32)rd8(r31 + 7u);
                    r31 = r31 + 8u;
                    wr8(r4 + 7u, (u8)r0);
                    r0 = (u32)(s8)r0;
                    r4 = r4 + 8u;
                    r0 = (rd32(param_1 + 0x10u) * 0x89u) + r0;
                    wr32(param_1 + 0x10u, r0);
                    ctr = ctr - 1u;
                } while (ctr != 0u);
                r3 = r3 & 7u;
                if (r3 == 0u) {
                    return param_1;
                }
            }
            ctr = r3;
            do {
                r0 = (u32)rd8(r31);
                r31 = r31 + 1u;
                wr8(r4, (u8)r0);
                r0 = (u32)(s8)r0;
                r4 = r4 + 1u;
                r0 = (rd32(param_1 + 0x10u) * 0x89u) + r0;
                wr32(param_1 + 0x10u, r0);
                ctr = ctr - 1u;
            } while (ctr != 0u);
        }
    } else {
        a.r[0] = param_1;
        a.r[1] = 0u;
        a.r[2] = 0x14u;
        (void)tc_call(0x8000443cu, &a);
    }
    return param_1;
}

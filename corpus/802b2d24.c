#include "tc_rt.h"

u32 fn_802b2d24(s32 param_1)
{
    u32 ctr = 0, r0 = 0, r4 = 0, r6 = 0, r8 = 0, r9 = 0, r10 = 0;
    r10 = 0x80542844u;
    if ((u32)param_1 != 0u) {
        r4 = (u32)rd16(0x80542842u);
        if (r4 != 0u) {
            r9 = 0u;
            for (;;) {
                if ((r9 & 0xffffu) >= r4) {
                    return 0u;
                }
                if (rd32(r10) == (u32)param_1) break;
                r9 = r9 + 1u;
                r10 = r10 + 0x298u;
            }
            for (;;) {
                r4 = (u32)rd16(0x80542842u);
                if ((r9 & 0xffffu) >= r4) break;
                r8 = r10 - 4u;
                r6 = r10 + 0x294u;
                ctr = 0x53u;
                do {
                    r4 = rd32(r6 + 4u);
                    r6 = r6 + 8u;
                    r0 = rd32(r6);
                    wr32(r8 + 4u, r4);
                    wr32(r8 + 8u, r0);
                    r8 = r8 + 8u;
                    ctr = ctr - 1u;
                } while (ctr != 0u);
                r8 = 0u;
                while ((r8 & 0xffffu) < (u32)rd16(r10 + 8u)) {
                    r0 = r8 & 0xffffu;
                    r8 = r8 + 1u;
                    r0 = r0 * 0xcu;
                    r6 = r10 + r0;
                    wr32(r6 + 0x10u, rd32(r6 + 0x10u) - 0x298u);
                }
                r9 = r9 + 1u;
                r10 = r10 + 0x298u;
            }
            r0 = rd32(0x8054283cu);
            r4 = r4 - 1u;
            wr16(0x80542842u, (u16)r4);
            if (r0 == (u32)param_1) {
                wr32(0x8054283cu, 0u);
                wr8(0x80542840u, 0u);
            }
            return 1u;
        }
    }
    wr16(0x80542842u, 0u);
    wr32(0x8054283cu, 0u);
    wr8(0x80542840u, 0u);
    return 1u;
}

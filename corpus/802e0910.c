#include "tc_rt.h"

u32 fn_802e0910(u32 param_1)
{
    u32 c0lt = 0, r0 = 0, r4 = 0, r5 = 0, r6 = 0, r12 = 0;
    r5 = 0u;
    r4 = param_1 + (u32)rd16(param_1 + 0xcu);
    r6 = 0u;
    for (;;) {
        if ((s32)r6 >= (s32)rd16(param_1 + 0xeu)) {
            wr32(param_1, 0x52464e55u);
            return r5;
        }
        r12 = rd32(r4);
        c0lt = (s32)r12 < 1179209286;
        if (r12 == 0x46494e46u) {
            r5 = r4 + 8u;
            wr32(r4 + 0x10u, param_1 + rd32(r4 + 0x10u));
            r0 = rd32(r4 + 0x14u);
            if (r0 != 0u) {
                r0 = param_1 + r0;
                wr32(r5 + 0xcu, r0);
            }
            r0 = rd32(r5 + 0x10u);
            if (r0 != 0u) {
                r0 = param_1 + r0;
                wr32(r5 + 0x10u, r0);
            }
        } else if (!c0lt) {
            c0lt = (s32)r12 < 1413958736;
            if (r12 == 0x54474c50u) {
                wr32(r4 + 0x1cu, param_1 + rd32(r4 + 0x1cu));
            } else {
                if (!c0lt) {
                    return 0u;
                }
                if (r12 != 0x474c4752u) break;
            }
        } else {
            c0lt = (s32)r12 < 1129792584;
            if (r12 == 0x43574448u) {
                r0 = rd32(r4 + 0xcu);
                if (r0 != 0u) {
                    r0 = param_1 + r0;
                    wr32(r4 + 0xcu, r0);
                }
            } else {
                if (!c0lt) {
                    return 0u;
                }
                if (r12 != 0x434d4150u) {
                    return 0u;
                }
                r0 = rd32(r4 + 0x10u);
                if (r0 != 0u) {
                    r0 = param_1 + r0;
                    wr32(r4 + 0x10u, r0);
                }
            }
        }
        r6 = r6 + 1u;
        r4 = r4 + rd32(r4 + 4u);
    }
    return 0u;
}

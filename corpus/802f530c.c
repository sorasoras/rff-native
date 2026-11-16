#include "tc_rt.h"

u32 fn_802f530c(u32 param_1, s32 param_2, u32 param_3, u32 param_4)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r6 = 0;
    TcArgs a = {0};
    if (rd32(param_1) != 0u) {
        if (param_2 >= 0) {
            r6 = rd32(param_1 + 4u);
            if (param_2 < (s32)rd32(r6 + 8u)) {
                r4 = r6 + (((u32)param_2 << 3u) & 0xfffffff8u) + 0xcu;
                r0 = (u32)rd8(r4 + 1u);
                if (r0 != 4u) {
                    if (r0 != 1u) {
                        a.r[0] = param_1;
                        a.r[1] = r4;
                        a.r[2] = param_3;
                        r3 = tc_call(0x802f55bcu, &a);
                        r4 = r3;
                        if (r3 == 0u) {
                            r3 = 0u;
                            return r3;
                        }
                    }
                    r0 = (u32)rd8(r4 + 1u);
                    if (r0 != 4u) {
                        if (r0 != 1u) {
                            a.r[0] = param_1;
                            a.r[1] = r4;
                            a.r[2] = param_4;
                            r3 = tc_call(0x802f55bcu, &a);
                            r4 = r3;
                            if (r3 == 0u) {
                                r3 = 0u;
                                return r3;
                            }
                        }
                        if ((u32)rd8(r4 + 1u) == 1u) {
                            r3 = (u32)rd8(r4);
                            r4 = rd32(r4 + 4u);
                            a.r[0] = r3;
                            a.r[1] = r4;
                            a.r[2] = rd32(param_1 + 4u) + 8u;
                            r3 = tc_call(0x8030e93cu, &a);
                            return r3;
                        }
                        r3 = 0u;
                        return r3;
                    }
                    r3 = 0u;
                    return r3;
                }
                r3 = 0u;
                return r3;
            }
        }
        r3 = 0u;
    } else {
        r3 = 0u;
    }
    return r3;
}

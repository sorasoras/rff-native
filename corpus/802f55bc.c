#include "tc_rt.h"

u32 fn_802f55bc(s32 param_1, u32 param_2, s32 param_3)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0;
    TcArgs a = {0};
    r0 = (u32)rd8(param_2 + 1u);
    c0lt = (s32)r0 < 2;
    r5 = 0u;
    if (r0 == 2u) {
        a.r[0] = (u32)rd8(param_2);
        a.r[1] = rd32(param_2 + 4u);
        a.r[2] = rd32((u32)param_1 + 4u) + 8u;
        r3 = tc_call(0x8030e93cu, &a);
        if (r3 == 0u) {
            r3 = 0u;
            return r3;
        }
        r5 = 0u;
        while (param_3 > (s32)rd8(r3 + r5 + 1u)) {
            r5 = r5 + 1u;
            if ((s32)r5 >= (s32)rd8(r3)) {
                r3 = 0u;
                return r3;
            }
        }
        r0 = r3 + ((r5 << 3u) & 0xfffffff8u);
        r3 = (u32)rd8(r3) + 4u;
        r3 = r3 & 0xfffffffcu;
        r5 = r3 + r0;
    } else if (!c0lt) {
        if ((s32)r0 < 4) {
            a.r[0] = (u32)rd8(param_2);
            a.r[1] = rd32(param_2 + 4u);
            a.r[2] = rd32((u32)param_1 + 4u) + 8u;
            r3 = tc_call(0x8030e93cu, &a);
            if (r3 == 0u) {
                r3 = 0u;
                return r3;
            }
            r4 = (u32)rd8(r3);
            if (param_3 < (s32)r4 || param_3 > (s32)rd8(r3 + 1u)) {
                r3 = 0u;
                return r3;
            }
            r3 = r3 + ((((u32)param_3 - r4) << 3u) & 0xfffffff8u);
            r5 = r3 + 4u;
        }
    } else {
        c0lt = (s32)r0 < 0;
        if (r0 != 0u && !c0lt) {
            r5 = param_2;
        }
    }
    r3 = r5;
    return r3;
}

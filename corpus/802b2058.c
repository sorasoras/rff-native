#include "tc_rt.h"

u32 fn_802b2058(s32 param_1, u32 param_2, s32 param_3)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    if ((u32)param_3 != 0u) {
        r31 = rd32((u32)param_3 + 4u);
    } else {
        r31 = rd32((u32)param_1 + 8u);
    }
    while (r31 != 0u) {
        r30 = rd32(r31);
        while (r30 != 0u) {
            r3 = (u32)rd16(r30 + 4u);
            if (r3 == 1u && (u32)((s32)rd16(r30 + 6u) >> 12) == 6u) {
                r30 = rd32(r30 + 8u);
                while (r30 != 0u) {
                    if ((u32)((s32)rd16(r30 + 6u) >> 12) == 3u) {
                        a.r[0] = param_2;
                        a.r[1] = r30;
                        r3 = tc_call(0x802b70b4u, &a);
                        if ((r3 & 0xffu) != 0u) {
                            r3 = r31;
                            return r3;
                        }
                    }
                    r30 = rd32(r30);
                }
                break;
            }
            if (r3 == 3u && (u32)((s32)rd16(r30 + 6u) >> 12) == 3u) {
                a.r[0] = param_2;
                a.r[1] = r30;
                r3 = tc_call(0x802b70b4u, &a);
                if ((r3 & 0xffu) != 0u) {
                    r3 = r31;
                    return r3;
                }
            }
            r30 = rd32(r30);
        }
        r31 = rd32(r31 + 4u);
    }
    r3 = 0u;
    return r3;
}

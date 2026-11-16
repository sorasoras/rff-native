#include "tc_rt.h"

s32 fn_8021ab6c(s32 param_1, s32 param_2, s32 param_3, u32 param_4)
{
    u32 r3 = 0, r5 = 0, r6 = 0, r28 = 0;
    TcArgs a = {0};
    r28 = 0u;
    if ((u32)param_2 != 0xffffffffu) {
        a.r[0] = (u32)param_1;
        r3 = tc_call(0x80218684u, &a);
        a.r[0] = r3;
        a.r[1] = rd32((u32)param_1 + 0x68u);
        a.r[2] = (u32)param_2;
        r3 = tc_call(0x802156d0u, &a);
        if (r3 != 0u) {
            r5 = (u32)param_1 + (((u32)param_3 << 2u) & 0xfffffffcu);
            wr32(r5 + 0x58u, r3);
            wr32(r5 + 8u, (u32)param_2);
            wr8((u32)param_1 + (u32)param_3 + 2u, 0u);
            if ((s32)rd32(r3) > 0) {
                a.r[0] = (u32)param_1;
                a.r[1] = (u32)param_3;
                a.r[2] = param_4;
                (void)tc_call(0x8021ab48u, &a);
                wr8((u32)param_1 + 1u, 0u);
                r28 = 1u;
                wr32((u32)param_1 + 0x6cu, 0u);
            } else {
                a.r[0] = (u32)param_1;
                a.r[1] = (u32)param_3;
                a.r[2] = 0xffffffffu;
                (void)tc_call(0x8021ab48u, &a);
                r28 = 1u;
            }
        }
    }
    if (r28 == 0u) {
        r5 = (u32)param_1 + (((u32)param_3 << 2u) & 0xfffffffcu);
        wr32(r5 + 8u, 0xffffffffu);
        r6 = 0u;
        wr32(r5 + 0x58u, 0u);
        wr8((u32)param_1 + (u32)param_3 + 2u, 1u);
        if ((u32)rd8((u32)param_1 + 2u) == 1u) {
            r6 = 1u;
        }
        if ((u32)rd8((u32)param_1 + 3u) == 1u) {
            r6 = r6 + 1u;
        }
        if ((u32)rd8((u32)param_1 + 4u) == 1u) {
            r6 = r6 + 1u;
        }
        if (r6 == 3u) {
            wr8((u32)param_1 + 1u, 1u);
            wr32((u32)param_1 + 0x6cu, 4u);
        } else {
            wr8((u32)param_1 + 1u, 0u);
            wr32((u32)param_1 + 0x6cu, 0u);
        }
        if ((u32)param_3 == 0u) {
            wr32((u32)param_1 + 0x34u, 0xffffffffu);
        }
        r28 = 1u;
    }
    return (s32)r28;
}

#include "tc_rt.h"

u32 fn_802591b4(u32 param_1, u32 param_2, u32 param_3)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0;
    TcArgs a = {0};
    r6 = param_1 ^ param_2;
    r0 = ppc_cntlzw(r6);
    r0 = ((r0 & 0x20u) != 0u) ? 0u : (param_1 << (r0 & 0x1fu));
    r7 = (r0 >> 0x1fu) & 1u;
    if (param_3 < 0x20u) {
        if (r7 != 0u) {
            r4 = param_2 + param_3;
            r3 = param_1 + param_3;
            r5 = param_3 + 1u;
            for (;;) {
                r5 = r5 - 1u;
                if (r5 == 0u) break;
                r4 = r4 - 1u;
                wr8(r3 - 1u, rd8(r4));
                r3 = r3 - 1u;
            }
        } else {
            r4 = param_2 - 1u;
            r3 = param_1 - 1u;
            r5 = param_3 + 1u;
            for (;;) {
                r5 = r5 - 1u;
                if (r5 == 0u) break;
                r4 = r4 + 1u;
                wr8(r3 + 1u, rd8(r4));
                r3 = r3 + 1u;
            }
        }
    } else if ((r6 & 3u) == 0u) {
        if (r7 != 0u) {
            a.r[0] = param_1;
            a.r[1] = param_2;
            a.r[2] = param_3;
            (void)tc_call(0x802593e0u, &a);
        } else {
            a.r[0] = param_1;
            a.r[1] = param_2;
            a.r[2] = param_3;
            (void)tc_call(0x80259324u, &a);
        }
    } else if (r7 != 0u) {
        a.r[0] = param_1;
        a.r[1] = param_2;
        a.r[2] = param_3;
        (void)tc_call(0x80259548u, &a);
    } else {
        a.r[0] = param_1;
        a.r[1] = param_2;
        a.r[2] = param_3;
        (void)tc_call(0x80259488u, &a);
    }
    return param_1;
}

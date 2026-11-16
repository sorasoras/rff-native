#include "tc_rt.h"

void fn_801949fc(u32 param_1, u32 param_2)
{
    u32 r3 = 0, r6 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0;
    TcArgs a = {0};
    r27 = param_2;
    r30 = 0u;
    r3 = param_2;
    while (r3 != 0u) {
        r3 = ppc_mulhwu(0xcccccccdu, r3);
        r30 = r30 + 1u;
        r3 = (r3 >> 3u) & 0x1fffffffu;
    }
    if (r30 == 0u) {
        r30 = 1u;
    }
    (void)tc_call(0x80194710u, &a);
    r29 = 0u;
    while (r29 < r30) {
        r6 = (ppc_mulhwu(0xcccccccdu, r27) >> 3u) & 0x1fffffffu;
        r28 = r27 - (r6 * 0xau);
        r27 = r6;
        a.r[0] = 0x98u;
        a.r[1] = 0u;
        a.r[2] = 4u;
        (void)tc_call(0x80250b74u, &a);
        a.r[0] = param_1;
        a.r[1] = r29;
        a.r[3] = r28;
        (void)tc_call(0x80194ab8u, &a);
        r29 = r29 + 1u;
    }
    return;
}

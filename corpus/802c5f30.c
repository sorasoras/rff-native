#include "tc_rt.h"

void fn_802c5f30(u32 param_r3)
{
    u32 r3 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    a.r[0] = param_r3;
    r3 = tc_call(0x80226ea0u, &a);
    r29 = (r3 >> 0x10u) & 0xffffu;
    r30 = rd32(0x80547490u);
    r28 = r3 & 0xffffu;
    a.r[0] = r29;
    r3 = tc_call(0x8027b068u, &a);
    if (r3 != 0u) {
        r31 = r30 + ((r29 << 2u) & 0xfffffffcu);
        a.r[0] = rd32(r31 + 0x2acu);
        r3 = tc_call(0x802c0f84u, &a);
        if (r3 != 0u) {
            a.r[0] = rd32(r31 + 0x2acu);
            a.r[1] = r28;
            (void)tc_call(0x802c0c40u, &a);
            return;
        }
    }
    r30 = r30 + (r29 * 0x30u) + 0x528u;
    a.r[0] = r30;
    a.r[1] = ((r29 << 0x10u) & 0xffff0000u) | (r29 + 2u);
    (void)tc_call(0x80226e98u, &a);
    a.r[0] = r30;
    (void)tc_call(0x80226a70u, &a);
    a.r[0] = r30;
    a.r[1] = 0x10624dd3u;
    a.r[2] = 0u;
    a.r[3] = ((ppc_mulhwu(0x10624dd3u, (rd32(0x800000f8u) >> 2u) & 0x3fffffffu) >> 6u) & 0x3ffffffu) * 0x32u;
    a.r[4] = 0x802c5f30u;
    (void)tc_call(0x8022697cu, &a);
    return;
}

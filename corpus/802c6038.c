#include "tc_rt.h"

void fn_802c6038(u32 param_r3)
{
    u32 r3 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = rd32(0x80547490u);
    a.r[0] = param_r3;
    r3 = tc_call(0x80226ea0u, &a);
    r30 = r3;
    r29 = 0u;
    if (r3 != 0u) {
        r3 = tc_call(0x80278eacu, &a);
        if (r3 != 0u) {
            r29 = 1u;
        }
    } else {
        r3 = tc_call(0x80278ea8u, &a);
        if (r3 != 0u) {
            r29 = 1u;
            wr8(r31 + 0x91u, 1u);
        }
    }
    if (r29 == 0u) {
        a.r[0] = r31 + 0x5e8u;
        (void)tc_call(0x80226a70u, &a);
        a.r[0] = r31 + 0x5e8u;
        a.r[1] = r30;
        (void)tc_call(0x80226e98u, &a);
        a.r[0] = r31 + 0x5e8u;
        a.r[1] = 0x10624dd3u;
        a.r[2] = 0u;
        a.r[3] = ((ppc_mulhwu(0x10624dd3u, (rd32(0x800000f8u) >> 2u) & 0x3fffffffu) >> 6u) & 0x3ffffffu) * 0x64u;
        a.r[4] = 0x802c6038u;
        (void)tc_call(0x8022697cu, &a);
    }
    return;
}

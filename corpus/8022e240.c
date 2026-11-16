#include "tc_rt.h"

void fn_8022e240(void)
{
    u32 r0 = 0, r3 = 0, r5 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    r31 = rd32(0x804e0240u);
    r29 = 0x40u - r31;
    r30 = r31 - 0x7fb1fe00u;
    a.r[0] = 0u;
    a.r[1] = 1u;
    a.r[2] = 0x8022e240u;
    r3 = tc_call(0x802641b0u, &a);
    if (r3 == 0u) {
        r0 = 0u;
    } else {
        a.r[0] = 0u;
        a.r[1] = 1u;
        a.r[2] = 3u;
        r3 = tc_call(0x80263a1cu, &a);
        if (r3 == 0u) {
            a.r[0] = 0u;
            (void)tc_call(0x802642acu, &a);
            r0 = 0u;
        } else {
            wr32(0x817fdfe8u, (((r31 << 6u) & 0xffffffc0u) + 0x100u) | 0xa0000000u);
            a.r[0] = 0u;
            a.r[1] = 0x817fdfe8u;
            a.r[2] = 4u;
            a.r[3] = 1u;
            a.r[4] = 0u;
            r3 = tc_call(0x80262fb4u, &a);
            r31 = (ppc_cntlzw(r3) >> 5u) & 0x7ffffffu;
            a.r[0] = 0u;
            r3 = tc_call(0x802633ccu, &a);
            r5 = r29;
            r29 = r31 | ((ppc_cntlzw(r3) >> 5u) & 0x7ffffffu);
            a.r[0] = 0u;
            a.r[1] = r30;
            a.r[2] = r5;
            a.r[3] = 1u;
            r3 = tc_call(0x80263230u, &a);
            r29 = r29 | ((ppc_cntlzw(r3) >> 5u) & 0x7ffffffu);
            a.r[0] = 0u;
            r3 = tc_call(0x80263b4cu, &a);
            r29 = r29 | ((ppc_cntlzw(r3) >> 5u) & 0x7ffffffu);
            a.r[0] = 0u;
            (void)tc_call(0x802642acu, &a);
            r0 = (ppc_cntlzw(r29) >> 5u) & 0x7ffffffu;
        }
    }
    wr32(0x804e024cu, r0);
    if (r0 != 0u) {
        wr32(0x804e0240u, 0x40u);
    }
    return;
}

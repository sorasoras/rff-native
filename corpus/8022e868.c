#include "tc_rt.h"

u32 fn_8022e868(u32 param_1, u32 param_2, s32 param_3)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    a.r[0] = param_1;
    a.r[1] = param_2;
    (void)tc_call(0x8022770cu, &a);
    a.r[0] = 0u;
    a.r[1] = 1u;
    a.r[2] = 0u;
    r3 = tc_call(0x802641b0u, &a);
    if (r3 == 0u) {
        r3 = 0u;
    } else {
        a.r[0] = 0u;
        a.r[1] = 1u;
        a.r[2] = 3u;
        r3 = tc_call(0x80263a1cu, &a);
        if (r3 == 0u) {
            a.r[0] = 0u;
            (void)tc_call(0x802642acu, &a);
            r3 = 0u;
        } else {
            wr32(0x817fdfe8u, ((u32)param_3 << 6u) & 0xffffffc0u);
            a.r[0] = 0u;
            a.r[1] = 0x817fdfe8u;
            a.r[2] = 4u;
            a.r[3] = 1u;
            a.r[4] = 0u;
            r3 = tc_call(0x80262fb4u, &a);
            r31 = (ppc_cntlzw(r3) >> 5u) & 0x7ffffffu;
            a.r[0] = 0u;
            r3 = tc_call(0x802633ccu, &a);
            r31 = r31 | ((ppc_cntlzw(r3) >> 5u) & 0x7ffffffu);
            a.r[0] = 0u;
            a.r[1] = param_1;
            a.r[2] = param_2;
            a.r[3] = 0u;
            a.r[4] = 0u;
            r3 = tc_call(0x802632d4u, &a);
            r31 = r31 | ((ppc_cntlzw(r3) >> 5u) & 0x7ffffffu);
            a.r[0] = 0u;
            r3 = tc_call(0x802633ccu, &a);
            r31 = r31 | ((ppc_cntlzw(r3) >> 5u) & 0x7ffffffu);
            a.r[0] = 0u;
            r3 = tc_call(0x80263b4cu, &a);
            r31 = r31 | ((ppc_cntlzw(r3) >> 5u) & 0x7ffffffu);
            a.r[0] = 0u;
            (void)tc_call(0x802642acu, &a);
            r3 = (ppc_cntlzw(r31) >> 5u) & 0x7ffffffu;
        }
    }
    return r3;
}

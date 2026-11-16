#include "tc_rt.h"

u32 fn_80264a8c(u32 param_1, u32 param_2, u32 param_3, u32 param_4, s32 param_5)
{
    u32 c0lt = 0, r3 = 0, r4 = 0, r30 = 0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    c0lt = param_5 < 2;
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdfe8u, param_3);
    if ((u32)param_5 == 2u) {
        r3 = (u32)rd16(param_4);
        wr32(0x817fdfecu, ((r3 << 8u) & 0xff0000u) | ((r3 << 0x18u) & 0xff000000u));
    } else if (!c0lt) {
        r4 = rd32(param_4);
        wr32(0x817fdfecu, ((r4 << 8u) & 0xff0000u) | ((r4 << 0x18u) & 0xff000000u) | (((r4 >> 8u) & 0xff00u) | ((r4 >> 0x18u) & 0xffu)));
    } else if (param_5 >= 1) {
        wr32(0x817fdfecu, ((u32)rd8(param_4) << 0x18u) & 0xff000000u);
    } else {
        r4 = rd32(param_4);
        wr32(0x817fdfecu, ((r4 << 8u) & 0xff0000u) | ((r4 << 0x18u) & 0xff000000u) | (((r4 >> 8u) & 0xff00u) | ((r4 >> 0x18u) & 0xffu)));
    }
    a.r[0] = param_1;
    a.r[1] = param_2;
    a.r[2] = 0u;
    r3 = tc_call(0x802641b0u, &a);
    r30 = (ppc_cntlzw(r3) >> 5u) & 0x7ffffffu;
    if (r30 == 0u) {
        a.r[0] = param_1;
        a.r[1] = param_2;
        a.r[2] = 4u;
        r3 = tc_call(0x80263a1cu, &a);
        r30 = r30 | ((ppc_cntlzw(r3) >> 5u) & 0x7ffffffu);
        if (r30 == 0u) {
            a.r[0] = param_1;
            a.r[1] = 0x817fdfe8u;
            a.r[2] = 4u;
            a.r[3] = 1u;
            a.r[4] = 0u;
            r3 = tc_call(0x80262fb4u, &a);
            r30 = r30 | ((ppc_cntlzw(r3) >> 5u) & 0x7ffffffu);
            a.r[0] = param_1;
            r3 = tc_call(0x802633ccu, &a);
            r30 = r30 | ((ppc_cntlzw(r3) >> 5u) & 0x7ffffffu);
            a.r[0] = param_1;
            a.r[1] = 0x817fdfecu;
            a.r[2] = 4u;
            a.r[3] = 1u;
            a.r[4] = 0u;
            r3 = tc_call(0x80262fb4u, &a);
            r30 = r30 | ((ppc_cntlzw(r3) >> 5u) & 0x7ffffffu);
            a.r[0] = param_1;
            r3 = tc_call(0x802633ccu, &a);
            r30 = r30 | ((ppc_cntlzw(r3) >> 5u) & 0x7ffffffu);
            a.r[0] = param_1;
            r3 = tc_call(0x80263b4cu, &a);
            r30 = r30 | ((ppc_cntlzw(r3) >> 5u) & 0x7ffffffu);
            a.r[0] = param_1;
            r3 = tc_call(0x802642acu, &a);
            r30 = r30 | ((ppc_cntlzw(r3) >> 5u) & 0x7ffffffu);
            r3 = (ppc_cntlzw(r30) >> 5u) & 0x7ffffffu;
        } else {
            a.r[0] = param_1;
            (void)tc_call(0x802642acu, &a);
            r3 = 0u;
        }
    } else {
        r3 = 0u;
    }
    return r3;
}

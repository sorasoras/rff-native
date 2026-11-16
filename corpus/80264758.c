#include "tc_rt.h"

u32 fn_80264758(s32 param_1, s32 param_2, u32 param_3)
{
    u32 r3 = 0, r4 = 0, r28 = 0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff0u, 0u);
    if ((u32)param_1 != 2u && (u32)param_2 == 0u) {
        a.r[0] = (u32)param_1;
        a.r[1] = 0u;
        r3 = tc_call(0x8026384cu, &a);
        if (r3 == 0u) {
            r3 = 0u;
            return r3;
        }
    }
    a.r[0] = (u32)param_1;
    a.r[1] = (u32)param_2;
    a.r[2] = 0u;
    r3 = tc_call(0x802641b0u, &a);
    r28 = (ppc_cntlzw(r3) >> 5u) & 0x7ffffffu;
    if (r28 == 0u) {
        a.r[0] = (u32)param_1;
        a.r[1] = (u32)param_2;
        a.r[2] = 0u;
        r3 = tc_call(0x80263a1cu, &a);
        r28 = (ppc_cntlzw(r3) >> 5u) & 0x7ffffffu;
        if (r28 == 0u) {
            wr32(0x817fdfe8u, 0x20011300u);
            a.r[0] = (u32)param_1;
            a.r[1] = 0x817fdfe8u;
            a.r[2] = 4u;
            a.r[3] = 1u;
            a.r[4] = 0u;
            r3 = tc_call(0x80262fb4u, &a);
            r28 = (ppc_cntlzw(r3) >> 5u) & 0x7ffffffu;
            a.r[0] = (u32)param_1;
            r3 = tc_call(0x802633ccu, &a);
            r28 = r28 | ((ppc_cntlzw(r3) >> 5u) & 0x7ffffffu);
            a.r[0] = (u32)param_1;
            a.r[1] = param_3;
            a.r[2] = 4u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            r3 = tc_call(0x80262fb4u, &a);
            r28 = r28 | ((ppc_cntlzw(r3) >> 5u) & 0x7ffffffu);
            a.r[0] = (u32)param_1;
            r3 = tc_call(0x802633ccu, &a);
            r28 = r28 | ((ppc_cntlzw(r3) >> 5u) & 0x7ffffffu);
            a.r[0] = (u32)param_1;
            r3 = tc_call(0x80263b4cu, &a);
            r28 = r28 | ((ppc_cntlzw(r3) >> 5u) & 0x7ffffffu);
        }
        a.r[0] = (u32)param_1;
        (void)tc_call(0x802642acu, &a);
    }
    if ((u32)param_1 != 2u && (u32)param_2 == 0u) {
        a.r[0] = (u32)param_1;
        (void)tc_call(0x80263964u, &a);
    }
    if (r28 != 0u) {
        r3 = 0u;
    } else {
        r4 = rd32(param_3);
        r3 = (((0xffffffffu - r4) | (r4 + 1u)) >> 0x1fu) & 1u;
    }
    return r3;
}

#include "tc_rt.h"

u32 fn_80139614(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    if (rd32(rd32((u32)param_1 + 0x1cu) + 0x7a0u) == 4u) {
        a.r[0] = 0u;
        a.r[1] = 0u;
        a.r[2] = 0u;
        a.r[3] = 0xffu;
        a.r[4] = 0xffffffu;
        (void)tc_call(0x80044e78u, &a);
    } else {
        a.r[0] = 0xffu;
        a.r[1] = 0xffu;
        a.r[2] = 0xffu;
        a.r[3] = 0xffu;
        a.r[4] = 0xffffffu;
        (void)tc_call(0x80044e78u, &a);
    }
    a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x44cu;
    a.r[1] = 1u;
    r3 = tc_call(0x80139a8cu, &a);
    if (r3 != 0u) {
        a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x44cu;
        a.r[1] = 1u;
        a.r[2] = 0u;
        (void)tc_call(0x80139a50u, &a);
        r3 = 0u;
        wr32(0x805711a4u, rd32(rd32((u32)param_1 + 0x1cu) + 0x430u));
    } else {
        r3 = 1u;
    }
    return r3;
}

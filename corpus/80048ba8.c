#include "tc_rt.h"

u32 fn_80048ba8(u32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = 0x803c2830u;
    a.r[1] = 0x80048ca0u;
    a.r[2] = 0u;
    a.r[3] = 0x803c3b48u;
    a.r[4] = 0x1000u;
    a.r[5] = param_1;
    a.r[6] = 1u;
    r3 = tc_call(0x8022f550u, &a);
    if (r3 == 0u) {
        r3 = 0u;
    } else {
        a.r[0] = 0x803c2758u;
        a.r[1] = 0x803c27b8u;
        a.r[2] = 0xau;
        (void)tc_call(0x8022ca4cu, &a);
        a.r[0] = 0x803c2778u;
        a.r[1] = 0x803c27e0u;
        a.r[2] = 0xau;
        (void)tc_call(0x8022ca4cu, &a);
        a.r[0] = 0x803c2798u;
        a.r[1] = 0x803c2808u;
        a.r[2] = 0xau;
        (void)tc_call(0x8022ca4cu, &a);
        r3 = 1u;
        wr32(0x80571064u, 1u);
    }
    return r3;
}

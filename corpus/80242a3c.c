#include "tc_rt.h"

s32 fn_80242a3c(s32 param_1)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    if (rd32(0x80571774u) != 0u) {
        wr32(0x80571774u, 0u);
        a.r[0] = 0x80242b04u;
        (void)tc_call(0x8026538cu, &a);
    }
    if ((u32)param_1 == 0u) {
        r31 = 0u;
        r3 = 0u;
        if (rd32(0x80571790u) == 0u && rd32(0x80570b44u) == 0x20u) {
            r3 = 1u;
        }
        if (r3 != 0u) {
            r3 = tc_call(0x80264c18u, &a);
            if (r3 == 0u) {
                r31 = 1u;
            }
        }
        if (rd32(0x80571770u) == 0u && r31 != 0u) {
            a.r[0] = 0xf0000000u;
            r3 = tc_call(0x80242198u, &a);
            wr32(0x80571770u, r3);
            r3 = 0u;
            return (s32)r3;
        }
        r3 = r31;
    } else {
        r3 = 1u;
        wr32(0x80571770u, 0u);
    }
    return (s32)r3;
}

#include "tc_rt.h"

u32 fn_80231e2c(void)
{
    u32 r3 = 0;
    TcArgs a = {0};
    wr32(0x817fdff0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    a.r[0] = 0x80386c20u;
    a.r[1] = 0x817fdff8u;
    r3 = tc_call(0x80271868u, &a);
    if (r3 != 0u || (u32)rd8(0x817fdfffu) != 0x3fu) {
        if (r3 != 0u || (u32)rd8(0x817fdfffu) == 0x3fu) {
            if (r3 != 0xfffffff4u) {
                r3 = 0u;
                return r3;
            }
        } else {
            a.r[0] = 0x80386c20u;
            r3 = tc_call(0x80270ff0u, &a);
            if (r3 != 0u) {
                r3 = 0u;
                return r3;
            }
        }
        a.r[0] = 0x80386c20u;
        a.r[1] = 0x3fu;
        a.r[2] = 0u;
        r3 = tc_call(0x80270e54u, &a);
        if (r3 == 0u) {
            r3 = 1u;
        } else {
            r3 = 0u;
        }
    } else {
        r3 = 1u;
    }
    return r3;
}

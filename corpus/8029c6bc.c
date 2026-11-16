#include "tc_rt.h"

u32 fn_8029c6bc(u32 param_1, u32 param_2)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    a.r[0] = param_1;
    r3 = tc_call(0x802952a8u, &a);
    r31 = r3;
    if (r3 == 0u) {
        r3 = 5u;
    } else {
        if (((u32)rd8(r3 + 0x81u) & 0x40u) != 0u) {
            r3 = 0u;
            wr8(0x8053f2d6u, (u8)param_2);
        } else {
            r30 = (u32)rd8(r3 + 0x7fu);
            if (r30 == 5u) {
                r3 = 1u;
            } else {
                wr8(r3 + 0x7fu, 5u);
                a.r[0] = param_1;
                a.r[1] = param_2;
                r3 = tc_call(0x8029fdd4u, &a);
                if ((r3 & 0xffu) != 0u) {
                    r3 = 1u;
                } else {
                    wr8(r31 + 0x7fu, (u8)r30);
                    r3 = 3u;
                }
            }
        }
    }
    return r3;
}

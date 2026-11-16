#include "tc_rt.h"

void fn_8015d5d0(u32 param_1, u32 param_2)
{
    u32 r3 = 0, r30 = 0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    a.r[0] = param_2;
    a.r[1] = 0x80570858u;
    a.r[2] = 0x817fdfe8u;
    r3 = tc_call(0x8025e9a4u, &a);
    a.r[0] = param_1;
    a.r[1] = r3;
    (void)tc_call(0x8025e7c0u, &a);
    a.r[0] = 0u;
    a.r[1] = 0x80570858u;
    a.r[2] = 0x817fdfe8u;
    r3 = tc_call(0x8025e9a4u, &a);
    r30 = r3;
    if (r3 != 0u) {
        a.r[0] = param_1;
        a.r[1] = 0x8057085cu;
        (void)tc_call(0x8025e820u, &a);
        a.r[0] = param_1;
        a.r[1] = r30;
        (void)tc_call(0x8025e820u, &a);
        a.r[0] = 0u;
        a.r[1] = 0x80570858u;
        a.r[2] = 0x817fdfe8u;
        r3 = tc_call(0x8025e9a4u, &a);
        r30 = r3;
        if (r3 != 0u) {
            a.r[0] = param_1;
            a.r[1] = 0x8057085cu;
            (void)tc_call(0x8025e820u, &a);
            a.r[0] = param_1;
            a.r[1] = r30;
            (void)tc_call(0x8025e820u, &a);
        }
    }
    return;
}

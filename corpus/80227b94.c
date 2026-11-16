#include "tc_rt.h"

void fn_80227b94(void)
{
    u32 r3 = 0, r30 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x80225078u, &a);
    if ((r3 & 0x8000u) == 0u) {
        (void)tc_call(0x80227834u, &a);
        (void)tc_call(0x80225264u, &a);
    }
    r3 = tc_call(0x80225078u, &a);
    if ((r3 & 0x4000u) == 0u) {
        (void)tc_call(0x802276f8u, &a);
        (void)tc_call(0x80225264u, &a);
    }
    r3 = tc_call(0x80225088u, &a);
    if ((r3 & 0x80000000u) == 0u) {
        r3 = tc_call(0x80225068u, &a);
        r30 = r3;
        a.r[0] = 0x30u;
        (void)tc_call(0x80225070u, &a);
        r3 = tc_call(0x80225088u, &a);
        r3 = r3 & 0x7fffffffu;
        a.r[0] = r3;
        (void)tc_call(0x80225090u, &a);
        r3 = tc_call(0x80225088u, &a);
        r3 = r3 & 0x7fffffffu;
        a.r[0] = r3;
        (void)tc_call(0x80225090u, &a);
        r3 = tc_call(0x80225088u, &a);
        r3 = r3 | 0x200000u;
        a.r[0] = r3;
        (void)tc_call(0x80225090u, &a);
        do {
            r3 = tc_call(0x80225088u, &a);
        } while ((r3 & 1u) != 0u);
        r3 = tc_call(0x80225088u, &a);
        r3 = r3 & 0xffdfffffu;
        a.r[0] = r3;
        (void)tc_call(0x80225090u, &a);
        for (;;) {
            r3 = tc_call(0x80225088u, &a);
            if ((r3 & 1u) == 0u) break;
            (void)tc_call(0x80225264u, &a);
        }
        a.r[0] = r30;
        (void)tc_call(0x80225070u, &a);
        r3 = tc_call(0x80225088u, &a);
        r3 = (r3 | 0x80000000u) & 0xffdfffffu;
        a.r[0] = r3;
        (void)tc_call(0x80225090u, &a);
        (void)tc_call(0x80225264u, &a);
    }
    a.r[0] = 1u;
    a.r[1] = 0x80227a4cu;
    (void)tc_call(0x80228710u, &a);
    (void)tc_call(0x80225264u, &a);
    return;
}

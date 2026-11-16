#include "tc_rt.h"

void fn_802924a0(u32 param_1, u32 param_2)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    (void)tc_call(0x8028b6ccu, &a);
    a.r[0] = 0x17u;
    a.r[1] = 0x80577368u;
    (void)tc_call(0x8028d73cu, &a);
    (void)tc_call(0x8028b6d0u, &a);
    a.r[0] = 0x34u;
    r3 = tc_call(0x8028a0d4u, &a);
    r31 = r3;
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = 0u;
        a.r[2] = 0x34u;
        (void)tc_call(0x8000443cu, &a);
        wr16(r31, 0x170cu);
        wr32(r31 + 0x30u, param_2);
        wr8(r31 + 8u, (u8)param_1);
        a.r[0] = r31;
        (void)tc_call(0x8028d750u, &a);
    }
    return;
}

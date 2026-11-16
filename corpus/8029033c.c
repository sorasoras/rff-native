#include "tc_rt.h"

void fn_8029033c(void)
{
    TcArgs a = {0};
    a.r[0] = 0x8053d6f8u;
    a.r[1] = 0u;
    a.r[2] = 0x2eu;
    (void)tc_call(0x8000443cu, &a);
    if ((u32)rd8(rd32(0x80570de8u) + 1u) != 0u) {
        a.r[0] = 0x802903bcu;
        (void)tc_call(0x8028d398u, &a);
        a.r[0] = 3u;
        a.r[1] = 0x8053d689u;
        a.r[2] = 0x80290abcu;
        (void)tc_call(0x80298b30u, &a);
    }
    return;
}

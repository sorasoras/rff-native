#include "tc_rt.h"

u32 fn_801d3318(u32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    if ((param_1 & 1u) != 0u) {
        a.r[0] = 0x80469958u;
        a.r[1] = 0x98u;
        a.r[2] = 1u;
        (void)tc_call(0x800586f8u, &a);
        a.r[0] = 0x80469958u;
        a.r[1] = 0xa7u;
        a.r[2] = 1u;
        (void)tc_call(0x800586f8u, &a);
        a.r[0] = 0x80469958u;
        a.r[1] = 0xa8u;
        a.r[2] = 1u;
        (void)tc_call(0x800586f8u, &a);
        a.r[0] = 0x80469958u;
        a.r[1] = 0xa9u;
        a.r[2] = 1u;
        (void)tc_call(0x800586f8u, &a);
    }
    if ((param_1 & 2u) != 0u) {
        a.r[0] = 0x8046a200u;
        a.r[1] = 0x98u;
        a.r[2] = 1u;
        (void)tc_call(0x80058cd4u, &a);
        a.r[0] = 0x8046a200u;
        a.r[1] = 0xa7u;
        a.r[2] = 1u;
        (void)tc_call(0x80058cd4u, &a);
        a.r[0] = 0x8046a200u;
        a.r[1] = 0xa8u;
        a.r[2] = 1u;
        (void)tc_call(0x80058cd4u, &a);
        a.r[0] = 0x8046a200u;
        a.r[1] = 0xa9u;
        a.r[2] = 1u;
        (void)tc_call(0x80058cd4u, &a);
    }
    if ((param_1 & 4u) != 0u) {
        wr32(0x817fdfe8u, 0x43u);
        a.r[0] = 0x817fdfe8u;
        r3 = tc_call(0x801496f0u, &a);
        a.r[0] = 0x804b9da0u;
        a.r[1] = r3;
        (void)tc_call(0x8010a5c0u, &a);
    }
    return 1u;
}

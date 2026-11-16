#include "tc_rt.h"

u32 fn_800496a0(void)
{
    TcArgs a = {0};
    wr32(0x817fdff0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    a.r[0] = 0x803c61d0u;
    a.r[1] = 0x817fdff8u;
    a.r[2] = 1u;
    (void)tc_call(0x8022cb74u, &a);
    return rd32(0x817fdff8u);
}

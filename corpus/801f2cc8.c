#include "tc_rt.h"

u32 fn_801f2cc8(u32 param_1)
{
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    a.r[0] = (u32)rd16(0x80492836u);
    a.r[1] = 0x817fdfe8u;
    a.r[2] = 4u;
    (void)tc_call(0x800f8a84u, &a);
    wr16(0x817fdff0u, 0u);
    a.r[0] = param_1;
    a.r[1] = 0x817fdfe8u;
    a.r[2] = 0u;
    (void)tc_call(0x80100670u, &a);
    return 1u;
}

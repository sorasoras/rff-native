#include "tc_rt.h"

u32 fn_801f8424(void)
{
    u32 r3 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x80052c3cu, &a);
    return r3;
}

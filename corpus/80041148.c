#include "tc_rt.h"

u32 fn_80041148(void)
{
    u32 r3 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x80047138u, &a);
    return r3;
}

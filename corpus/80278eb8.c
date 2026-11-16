#include "tc_rt.h"

s32 fn_80278eb8(void)
{
    u32 r3 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x80286d1cu, &a);
    return (s32)r3;
}

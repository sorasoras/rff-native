#include "tc_rt.h"

u64 fn_80045d80(void)
{
    u32 r3 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x8022794cu, &a);
    return ((u64)r3 << 0x20ull) | (u64)tc_lastr4();
}

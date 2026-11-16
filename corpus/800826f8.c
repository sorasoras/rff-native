#include "tc_rt.h"

s32 fn_800826f8(void)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x80082678u, &a);
    r31 = ((r3 << 2u) & 0xfffffffcu) - r3;
    r3 = tc_call(0x800826ecu, &a);
    r3 = r31 + r3;
    return (s32)r3;
}

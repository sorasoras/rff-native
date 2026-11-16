#include "tc_rt.h"

s32 fn_80082678(void)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x801eba44u, &a);
    r31 = r3;
    r3 = tc_call(0x800833c0u, &a);
    r31 = r31 + r3;
    r3 = tc_call(0x800ab458u, &a);
    r31 = r31 + r3;
    r3 = tc_call(0x800c9150u, &a);
    r31 = r31 + r3;
    r3 = tc_call(0x800c8454u, &a);
    r3 = r31 + r3;
    return (s32)r3;
}

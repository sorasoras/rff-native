#include "tc_rt.h"

u32 fn_802f9d48(u32 param_1)
{
    u32 ca = 0, r0 = 0, r3 = 0;
    TcArgs a = {0};
    a.r[0] = rd32(param_1);
    a.r[1] = 0x20u;
    r3 = tc_call(0x8026d278u, &a);
    r0 = r3 - 0x18u;
    ca = r3 >= 0x18u;
    r3 = r3 - 0x18u;
    r0 = r0 & 0xffffffe0u;
    r3 = r0 & ~(u32)((u64)~r3 + (u64)r3 + (u64)ca);
    return r3;
}

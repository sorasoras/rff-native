#include "tc_rt.h"

u32 fn_80266480(void)
{
    TcArgs a = {0};
    (void)tc_call(0x802689e4u, &a);
    (void)tc_call(0x802689dcu, &a);
    wr32(0x80500d14u, 0u);
    wr32(0x80500d18u, 0u);
    wr32(0x80500d34u, 0x100u);
    (void)tc_call(0x802689d4u, &a);
    return 0u;
}

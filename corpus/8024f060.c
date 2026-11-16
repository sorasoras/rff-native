#include "tc_rt.h"

void fn_8024f060(void)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = 0x11u;
    a.r[1] = 0x8024e8c0u;
    (void)tc_call(0x8022c2fcu, &a);
    a.r[0] = 0x4000u;
    (void)tc_call(0x8022c6c0u, &a);
    r3 = tc_call(0x8022efe4u, &a);
    wr32(0x8057198cu, r3);
    wr32(0x80571988u, 0u);
    a.r[0] = 0x805006a4u;
    a.r[1] = 0u;
    a.r[2] = 0x24u;
    (void)tc_call(0x8000443cu, &a);
    a.r[0] = 0x80500680u;
    a.r[1] = 0u;
    a.r[2] = 0x24u;
    (void)tc_call(0x8000443cu, &a);
    wr8(0x80571978u, 0u);
    wr8(0x80571979u, 0u);
    return;
}

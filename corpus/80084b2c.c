#include "tc_rt.h"

s32 fn_80084b2c(s32 param_1)
{
    u32 r0 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 0xcu;
    a.r[1] = 0x80084bc4u;
    a.r[2] = 0x80084c14u;
    a.r[3] = 0x24u;
    a.r[4] = 3u;
    (void)tc_call(0x80255624u, &a);
    r0 = rd32(0x804890ccu);
    wr32((u32)param_1 + 0x78u, rd32(0x804890c8u));
    wr32((u32)param_1 + 0x7cu, r0);
    wr32((u32)param_1 + 0x80u, rd32(0x804890d0u));
    r0 = rd32(0x804890ccu);
    wr32((u32)param_1 + 0x84u, rd32(0x804890c8u));
    wr32((u32)param_1 + 0x88u, r0);
    wr32((u32)param_1 + 0x8cu, rd32(0x804890d0u));
    r0 = rd32(0x804890ccu);
    wr32((u32)param_1 + 0x90u, rd32(0x804890c8u));
    wr32((u32)param_1 + 0x94u, r0);
    wr32((u32)param_1 + 0x98u, rd32(0x804890d0u));
    return param_1;
}

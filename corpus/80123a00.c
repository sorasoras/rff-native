#include "tc_rt.h"

s32 fn_80123a00(s32 param_1)
{
    TcArgs a = {0};
    wr32((u32)param_1 + 0x3e8u, 0x803631c0u);
    a.r[0] = (u32)param_1 + 0x1cu;
    (void)tc_call(0x800f82d0u, &a);
    a.r[0] = (u32)param_1 + 0x58u;
    (void)tc_call(0x80163efcu, &a);
    a.r[0] = (u32)param_1 + 0x78u;
    a.r[1] = 0x80123a78u;
    a.r[2] = 0x80123aacu;
    a.r[3] = 0x58u;
    a.r[4] = 0xau;
    (void)tc_call(0x80255624u, &a);
    wr32((u32)param_1 + 0x14u, 0u);
    wr32((u32)param_1 + 4u, 0u);
    wr32((u32)param_1 + 0x64u, 0u);
    return param_1;
}

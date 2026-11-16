#include "tc_rt.h"

void fn_8012289c(s32 param_1)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = rd32(rd32((u32)param_1 + 0x20u) + 0x5cu);
    a.r[0] = (u32)rd16(r31 + 0xbcu);
    a.r[1] = (u32)rd8(r31 + 0xbfu);
    r3 = tc_call(0x800cd6b4u, &a);
    a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x450u;
    a.r[1] = r3 & 0xffffu;
    a.r[2] = r31 + 0xbcu;
    (void)tc_call(0x80193aecu, &a);
    a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x480u;
    a.r[1] = 0u;
    (void)tc_call(0x800f8544u, &a);
    return;
}

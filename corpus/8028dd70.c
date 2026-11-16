#include "tc_rt.h"

void fn_8028dd70(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    a.r[0] = (u32)param_1 + 8u;
    r3 = tc_call(0x8029d58cu, &a);
    if (r3 != 0u) {
        a.r[0] = 0x817fdfe8u;
        a.r[1] = r3;
        a.r[2] = 8u;
        (void)tc_call(0x80004338u, &a);
    } else {
        a.r[0] = 0x817fdfe8u;
        a.r[1] = 0u;
        a.r[2] = 8u;
        (void)tc_call(0x8000443cu, &a);
    }
    if ((u32)rd8((u32)param_1 + 0xeu) != 0u) {
        a.r[0] = (u32)param_1 + 8u;
        a.r[1] = 0u;
        a.r[2] = (u32)rd8((u32)param_1 + 0xfu);
        a.r[3] = (u32)param_1 + 0x10u;
        a.r[4] = 0x817fdfe8u;
        (void)tc_call(0x8029a9f0u, &a);
    } else {
        a.r[0] = (u32)param_1 + 8u;
        a.r[1] = 0xbu;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0x817fdfe8u;
        (void)tc_call(0x8029a9f0u, &a);
    }
    return;
}

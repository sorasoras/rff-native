#include "tc_rt.h"

u32 fn_802265ac(void)
{
    u32 r3 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x80225134u, &a);
    r3 = r3 | 0xa0000000u;
    a.r[0] = r3;
    (void)tc_call(0x8022513cu, &a);
    (void)tc_call(0x80227824u, &a);
    return 0u;
}

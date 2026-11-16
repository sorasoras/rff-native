#include "tc_rt.h"

u32 fn_8028fe30(void)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    (void)tc_call(0x8028b6ccu, &a);
    r3 = tc_call(0x80295814u, &a);
    r31 = r3;
    (void)tc_call(0x8028b6d0u, &a);
    return r31;
}

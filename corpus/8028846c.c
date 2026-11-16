#include "tc_rt.h"

u32 fn_8028846c(void)
{
    u32 r3 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x8022c2b0u, &a);
    if (((u32)rd8(0x8050f10cu) == 0u && (u32)rd8(0x8050f10du) == 0u) && ((u32)rd8(0x8050f10fu) == 4u && (u32)rd8(0x8050f110u) == 5u)) {
        a.r[0] = r3;
        (void)tc_call(0x8022c2d8u, &a);
        r3 = 0u;
    } else {
        a.r[0] = r3;
        (void)tc_call(0x8022c2d8u, &a);
        r3 = 1u;
    }
    return r3;
}

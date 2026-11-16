#include "tc_rt.h"

u32 fn_80289510(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r31 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x8022c2b0u, &a);
    r0 = (u32)(s8)param_1;
    if ((s32)r0 >= 0 && (s32)r0 < 16) {
        r0 = (r0 << 1u) & 0xfffffffeu;
        r31 = (u32)rd16(r0 - 0x7faeef78u);
    } else {
        r31 = 0u;
    }
    a.r[0] = r3;
    (void)tc_call(0x8022c2d8u, &a);
    return r31;
}

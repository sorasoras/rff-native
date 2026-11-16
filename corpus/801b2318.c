#include "tc_rt.h"

u32 fn_801b2318(s32 param_1)
{
    u32 r4 = 0, r31 = 0;
    TcArgs a = {0};
    a.r[0] = 0x80486da8u;
    (void)tc_call(0x800b872cu, &a);
    r4 = rd32((u32)param_1 + 0x7cu);
    if ((s32)r4 > 200) {
        r31 = 0u;
    } else {
        r31 = (u32)((u64)((r4 >> 0x1fu) & 1u) + 0xffffffffull + (u64)(r4 <= 0x64u)) + 2u;
    }
    (void)tc_call(0x800a7ae0u, &a);
    a.r[0] = 0u;
    a.r[1] = 5u;
    (void)tc_call(0x800a796cu, &a);
    a.r[0] = r31;
    a.r[1] = 6u;
    (void)tc_call(0x800a796cu, &a);
    a.r[0] = rd32((u32)param_1 + 0x7cu);
    a.r[1] = 7u;
    (void)tc_call(0x800a796cu, &a);
    a.r[0] = 2u;
    a.r[1] = 0x3au;
    (void)tc_call(0x800a6d5cu, &a);
    return 0u;
}

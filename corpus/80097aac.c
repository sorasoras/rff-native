#include "tc_rt.h"

void fn_80097aac(s32 param_1)
{
    u32 r31 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    a.r[1] = 1u;
    (void)tc_call(0x8009a64cu, &a);
    r31 = 0u;
    do {
        a.r[0] = r31;
        a.r[1] = 1u;
        a.r[2] = 0x21u;
        (void)tc_call(0x8014db70u, &a);
        a.r[0] = r31;
        a.r[1] = 2u;
        a.r[2] = 0x21u;
        (void)tc_call(0x8014db70u, &a);
        a.r[0] = r31;
        a.r[1] = 3u;
        a.r[2] = 0x21u;
        (void)tc_call(0x8014db70u, &a);
        a.r[0] = r31;
        a.r[1] = 4u;
        a.r[2] = 1u;
        (void)tc_call(0x8014db70u, &a);
        r31 = r31 + 1u;
    } while ((s32)r31 < 16);
    a.r[0] = 0u;
    a.r[1] = 0x22u;
    (void)tc_call(0x800a730cu, &a);
    wr32(rd32((u32)param_1 + 0x4cu) + 0x10u, 0u);
    wr32(rd32((u32)param_1 + 0x4cu) + 0x48u, 1u);
    a.r[0] = (u32)param_1;
    a.r[1] = 0u;
    (void)tc_call(0x8009a64cu, &a);
    return;
}

#include "tc_rt.h"

void fn_802f09a8(s32 param_1)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    if ((u32)rd8((u32)param_1 + 0x18u) == 0u) {
        a.r[0] = 0x80548160u;
        a.r[1] = 0u;
        a.r[2] = 0x100u;
        (void)tc_call(0x8000443cu, &a);
        a.r[0] = 0x80548160u;
        a.r[1] = 0x100u;
        (void)tc_call(0x80227738u, &a);
        wr32((u32)param_1 + 4u, 0x80548160u);
        r3 = tc_call(0x8022c2b0u, &a);
        r31 = r3;
        a.r[0] = (u32)param_1 + 0xd8u;
        a.r[1] = (u32)param_1 + 0xe4u;
        (void)tc_call(0x80243f40u, &a);
        a.r[0] = (u32)param_1 + 0xdcu;
        a.r[1] = (u32)param_1 + 0xe8u;
        (void)tc_call(0x80243f54u, &a);
        a.r[0] = (u32)param_1 + 0xe0u;
        a.r[1] = (u32)param_1 + 0xecu;
        (void)tc_call(0x80243f68u, &a);
        a.r[0] = 0u;
        a.r[1] = 0u;
        (void)tc_call(0x80243e14u, &a);
        a.r[0] = 0u;
        a.r[1] = 0u;
        (void)tc_call(0x80243e78u, &a);
        a.r[0] = 0u;
        a.r[1] = 0u;
        (void)tc_call(0x80243edcu, &a);
        a.r[0] = 0x802f1098u;
        r3 = tc_call(0x802450d8u, &a);
        wr32((u32)param_1 + 0x14u, r3);
        wr8((u32)param_1 + 0x18u, 1u);
        a.r[0] = r31;
        (void)tc_call(0x8022c2d8u, &a);
    }
    return;
}

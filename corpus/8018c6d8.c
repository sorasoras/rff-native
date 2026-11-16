#include "tc_rt.h"

u32 fn_8018c6d8(s32 param_1)
{
    u32 r0 = 0, r4 = 0, r6 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    a.r[0] = rd32(0x804863d8u);
    (void)tc_call(0x800c4b50u, &a);
    r31 = rd32(0x804863d8u);
    a.r[0] = r31;
    a.r[1] = 0u;
    a.r[2] = 0u;
    (void)tc_call(0x800693a8u, &a);
    r4 = rd32((u32)param_1 + 0x64u);
    if (r4 != 0x2e8u) {
        a.r[0] = r31;
        a.r[1] = r4;
        a.r[2] = (u32)rd8((u32)param_1 + 0x68u);
        a.r[3] = 1u;
        a.r[4] = 1u;
        (void)tc_call(0x8006c6c0u, &a);
        wr32((u32)param_1 + 0x64u, 0x2e8u);
        wr8((u32)param_1 + 0x68u, 1u);
    }
    a.r[0] = (u32)param_1;
    a.r[1] = 0u;
    (void)tc_call(0x8018d5ecu, &a);
    r6 = rd32(0x8036fe7cu);
    r0 = rd32(0x8036fe80u);
    wr32(0x817fdfe8u, rd32(0x8036fe78u));
    wr32(0x817fdfecu, r6);
    wr32(0x817fdff0u, r0);
    a.r[0] = (u32)param_1;
    a.r[1] = 0u;
    a.r[2] = 0x817fdfe8u;
    (void)tc_call(0x8018ca94u, &a);
    return 1u;
}

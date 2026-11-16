#include "tc_rt.h"

void fn_801b00e8(u32 param_1, s32 param_2)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    (void)param_1;
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    a.r[0] = 1u;
    r3 = tc_call(0x80074e90u, &a);
    f1 = tc_lastf();
    r4 = tc_lastr4();
    if (r3 != 0u) {
        r3 = rd32(0x804863dcu);
        a.r[0] = r3;
        a.r[1] = r4;
        a.r[2] = 0u;
        a.f[0] = f1;
        r3 = tc_call(rd32(rd32(r3) + 0x28u), &a);
        r0 = rd32(r3 + 4u);
        wr32(0x817fdfe8u, rd32(r3));
        wr32(0x817fdfecu, r0);
        wr32(0x817fdff0u, rd32(r3 + 8u));
        a.r[0] = (u32)param_2 + 0xf20u;
        a.r[1] = 0x817fdfe8u;
        (void)tc_call(0x801c1fe8u, &a);
    }
    r31 = (u32)param_2 + 0xf20u;
    a.r[0] = r31;
    a.r[1] = 1u;
    a.r[2] = rd32(0x804863d8u);
    (void)tc_call(0x801c1fdcu, &a);
    a.r[0] = r31;
    (void)tc_call(0x801c2048u, &a);
    wr32((u32)param_2 + 0xd30u, 0u);
    return;
}

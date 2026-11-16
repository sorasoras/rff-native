#include "tc_rt.h"

u32 fn_8018e988(s32 param_1)
{
    u32 r0 = 0, r4 = 0;
    TcArgs a = {0};
    r4 = rd32(0x804863d8u);
    wr32(r4 + 0x9cu, rd32(r4 + 0x9cu) | 0x40000000u);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x801a0d9cu, &a);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x801902e8u, &a);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x8018fd04u, &a);
    r0 = rd32((u32)param_1 + 0x90u) + 1u;
    wr32((u32)param_1 + 0x90u, r0);
    if ((s32)r0 >= 0) {
        r0 = rd32(0x8036ff9cu);
        wr32((u32)param_1 + 0x38u, rd32(0x8036ff98u));
        wr32((u32)param_1 + 0x3cu, r0);
        wr32((u32)param_1 + 0x40u, rd32(0x8036ffa0u));
        a.r[0] = (u32)param_1;
        (void)tc_call(0x8018fe40u, &a);
        a.r[0] = (u32)param_1;
        (void)tc_call(0x8018f404u, &a);
    }
    return 1u;
}

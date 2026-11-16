#include "tc_rt.h"

u32 fn_801b20fc(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0;
    TcArgs a = {0};
    r4 = rd32(0x804863d8u);
    wr32(r4 + 0x9cu, rd32(r4 + 0x9cu) | 0x40000000u);
    if (rd32(0x805706d0u) == 7u) {
        a.r[0] = (u32)param_1 + 0x44u;
        r3 = tc_call(0x80255850u, &a);
        if (r3 == 0u) {
            r0 = rd32(0x803724a0u);
            wr32((u32)param_1 + 0x38u, rd32(0x8037249cu));
            wr32((u32)param_1 + 0x3cu, r0);
            wr32((u32)param_1 + 0x40u, rd32(0x803724a4u));
        } else {
            r4 = rd32((u32)param_1 + 0x48u);
            r0 = rd32((u32)param_1 + 0x4cu);
            wr32((u32)param_1 + 0x38u, rd32((u32)param_1 + 0x44u));
            wr32((u32)param_1 + 0x3cu, r4);
            wr32((u32)param_1 + 0x40u, r0);
            r0 = rd32(0x8033caa4u);
            wr32((u32)param_1 + 0x44u, rd32(0x8033caa0u));
            wr32((u32)param_1 + 0x48u, r0);
            wr32((u32)param_1 + 0x4cu, rd32(0x8033caa8u));
            a.r[0] = (u32)param_1;
            (void)tc_call(0x802558bcu, &a);
        }
    }
    return 1u;
}

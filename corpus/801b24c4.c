#include "tc_rt.h"

u32 fn_801b24c4(s32 param_1)
{
    u32 r0 = 0, r3 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x80097da4u, &a);
    r3 = rd32(r3);
    a.r[0] = r3;
    a.r[1] = 0x9fu;
    r3 = tc_call(0x800a3168u, &a);
    if (r3 != 0u) {
        r3 = tc_call(0x80097da4u, &a);
        r3 = rd32(r3);
        a.r[0] = r3;
        a.r[1] = 0x9fu;
        a.r[2] = 0u;
        (void)tc_call(0x800a31c0u, &a);
        a.r[0] = (u32)param_1 + 0x44u;
        r3 = tc_call(0x80255850u, &a);
        if (r3 == 0u) {
            r0 = rd32(0x803724d0u);
            wr32((u32)param_1 + 0x38u, rd32(0x803724ccu));
            wr32((u32)param_1 + 0x3cu, r0);
            wr32((u32)param_1 + 0x40u, rd32(0x803724d4u));
        } else {
            r3 = rd32((u32)param_1 + 0x48u);
            r0 = rd32((u32)param_1 + 0x4cu);
            wr32((u32)param_1 + 0x38u, rd32((u32)param_1 + 0x44u));
            wr32((u32)param_1 + 0x3cu, r3);
            wr32((u32)param_1 + 0x40u, r0);
            r0 = rd32(0x8033caa4u);
            wr32((u32)param_1 + 0x44u, rd32(0x8033caa0u));
            wr32((u32)param_1 + 0x48u, r0);
            wr32((u32)param_1 + 0x4cu, rd32(0x8033caa8u));
        }
        r3 = rd32(0x804863d8u);
        wr32(r3 + 0x9cu, rd32(r3 + 0x9cu) | 0x40000000u);
    }
    return 1u;
}

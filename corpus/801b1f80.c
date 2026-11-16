#include "tc_rt.h"

u32 fn_801b1f80(s32 param_1)
{
    u32 r0 = 0, r3 = 0;
    TcArgs a = {0};
    r0 = rd32(0x8037247cu);
    wr32((u32)param_1 + 0x38u, rd32(0x80372478u));
    wr32((u32)param_1 + 0x3cu, r0);
    wr32((u32)param_1 + 0x40u, rd32(0x80372480u));
    a.r[0] = 0x804b9da0u;
    a.r[1] = 0x1115u;
    (void)tc_call(0x8010a74cu, &a);
    a.r[0] = rd32(0x804863d8u);
    (void)tc_call(0x800c42fcu, &a);
    r3 = tc_call(0x801b0c80u, &a);
    if (r3 != 0u) {
        wr32(r3 + 0x16cu, 1u);
    }
    return 1u;
}

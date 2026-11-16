#include "tc_rt.h"

u32 fn_802a7cfc(s32 param_1, s32 param_2)
{
    u32 r5 = 0, r6 = 0, r7 = 0, r8 = 0;
    TcArgs a = {0};
    r7 = (u32)rd16((u32)param_2 + 2u);
    if (r7 <= (u32)rd16(0x8053d4aeu)) {
        r5 = (u32)rd16((u32)param_1 + 0x38u) + 1u;
        wr16((u32)param_1 + 0x36u, (u16)((u32)rd16((u32)param_1 + 0x36u) - 1u));
        wr16((u32)param_1 + 0x38u, (u16)r5);
        wr16(0x80540a24u, (u16)((u32)rd16(0x80540a24u) - 1u));
        a.r[0] = (u32)param_2;
        a.r[1] = 0x2100u;
        (void)tc_call(0x8028cab4u, &a);
    } else {
        r8 = (u32)rd16(0x8053d4acu);
        r6 = r7 + r8;
        r7 = (u32)rd16(0x80540a24u);
        r8 = (u32)ppc_divw((s32)(r6 - 5u), (s32)r8) & 0xffffu;
        if (r8 > r7) {
            wr16((u32)param_2 + 6u, (u16)r7);
            r8 = r7;
            wr8((u32)param_1 + 0x40u, 1u);
        }
        r6 = (u32)rd16((u32)param_1 + 0x36u);
        if ((r8 & 0xffffu) > r6) {
            wr16((u32)param_2 + 6u, (u16)r6);
            r8 = r6;
            wr8((u32)param_1 + 0x40u, 1u);
        }
        wr16(0x80540a24u, (u16)((u32)rd16(0x80540a24u) - r8));
        r5 = (u32)rd16((u32)param_1 + 0x38u) + r8;
        wr16((u32)param_1 + 0x36u, (u16)((u32)rd16((u32)param_1 + 0x36u) - r8));
        wr16((u32)param_1 + 0x38u, (u16)r5);
        a.r[0] = (u32)param_2;
        a.r[1] = 0x2100u;
        (void)tc_call(0x8028cab4u, &a);
    }
    return 1u;
}

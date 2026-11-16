#include "tc_rt.h"

void fn_802b064c(u32 param_1, s32 param_2, s32 param_3)
{
    u32 r0 = 0, r4 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0;
    TcArgs a = {0};
    r0 = (u32)rd16((u32)param_3 + 4u);
    if (r0 < 0x10u) {
        r6 = (u32)rd16((u32)param_3 + 2u);
        r0 = (u32)param_3 + r0;
        r8 = 0u;
        r7 = r0 + r6;
        r6 = (u32)param_3 + r6;
        r7 = r7 + 7u;
        r9 = r6 + 0x17u;
        while ((r8 & 0xffffu) < (u32)rd16((u32)param_3 + 2u)) {
            r0 = (u32)rd8(r7);
            r8 = r8 + 1u;
            r7 = r7 - 1u;
            wr8(r9, (u8)r0);
            r9 = r9 - 1u;
        }
        wr16((u32)param_3 + 4u, 0x10u);
    }
    r4 = (u32)rd16((u32)param_3 + 4u) - 2u;
    wr16((u32)param_3 + 4u, (u16)r4);
    r6 = (u32)param_3 + (r4 & 0xffffu);
    wr8(r6 + 8u, (u8)(((u32)((s32)((0u - (u32)param_2) | (u32)param_2) >> 31) & 2u) | 0x21u));
    wr8(r6 + 9u, (u8)((((u32)rd16((u32)param_3 + 2u) << 1u) & 0xfffffffeu) | 1u));
    wr16((u32)param_3 + 2u, (u16)((u32)rd16((u32)param_3 + 2u) + 2u));
    a.r[0] = param_1;
    a.r[1] = 0u;
    a.r[2] = (u32)param_3;
    (void)tc_call(0x802affd8u, &a);
    return;
}

#include "tc_rt.h"

void fn_802a19fc(s32 param_1, u32 param_2, u32 param_3)
{
    u32 ctr = 0, r0 = 0, r5 = 0, r6 = 0, r10 = 0;
    TcArgs a = {0};
    r5 = param_3;
    r10 = ((param_2 << 2u) & 0x3fcu) - param_2 + 4u;
    wr16((u32)param_1 + 2u, (u16)r10);
    r6 = (u32)param_1 + 0xcu;
    wr16((u32)param_1 + 4u, 0u);
    wr8((u32)param_1 + 8u, 0x3au);
    wr8((u32)param_1 + 9u, 0xcu);
    wr8((u32)param_1 + 0xau, (u8)((r10 & 0xffffu) - 3u));
    wr8((u32)param_1 + 0xbu, (u8)param_2);
    ctr = param_2;
    if ((s32)param_2 > 0) {
        do {
            wr8(r6, rd8(r5 + 2u));
            wr8(r6 + 1u, rd8(r5 + 1u));
            r0 = (u32)rd8(r5);
            r5 = r5 + 3u;
            wr8(r6 + 2u, (u8)r0);
            r6 = r6 + 3u;
            ctr = ctr - 1u;
        } while (ctr != 0u);
    }
    a.r[0] = (u32)param_1;
    (void)tc_call(0x8029db78u, &a);
    return;
}

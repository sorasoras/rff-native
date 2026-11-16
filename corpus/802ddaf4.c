#include "tc_rt.h"

void fn_802ddaf4(s32 param_1, s32 param_2)
{
    u32 c0lt = 0, r5 = 0, r6 = 0, r7 = 0;
    TcArgs a = {0};
    r7 = (u32)rd16((u32)param_2 + 8u);
    r5 = (u32)rd16((u32)param_2 + 0xau);
    c0lt = (s32)r7 < 1;
    r6 = rd32((u32)param_2 + 4u) + ((u32)param_2 + 0xeu);
    wr16((u32)param_1 + 8u, (u16)r5);
    r6 = r6 - 6u;
    wr16((u32)param_1 + 0xau, rd16((u32)param_2 + 0xcu));
    if (r7 != 1u) {
        if (!c0lt) {
            wr32((u32)param_1 + 0xcu, (u32)rd16((u32)param_1 + 8u));
            return;
        }
        if ((s32)r7 < 0) {
            wr32((u32)param_1 + 0xcu, (u32)rd16((u32)param_1 + 8u));
            return;
        }
        wr16((u32)param_1 + 8u, 1u);
        a.r[0] = (u32)param_1;
        a.r[1] = r6;
        a.r[2] = 1u;
        (void)tc_call(0x802dd9d8u, &a);
    } else {
        a.r[0] = (u32)param_1;
        a.r[1] = r6;
        a.r[2] = r5;
        (void)tc_call(0x802dd9d8u, &a);
    }
    wr32((u32)param_1 + 0xcu, (u32)rd16((u32)param_1 + 8u));
    return;
}

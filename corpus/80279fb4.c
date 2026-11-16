#include "tc_rt.h"

void fn_80279fb4(s32 param_1, s32 param_2, u32 param_3)
{
    u32 c0lt = 0, r3 = 0, r30 = 0;
    TcArgs a = {0};
    r30 = rd32((((u32)param_1 << 2u) & 0xfffffffcu) - 0x7faf46b0u);
    r3 = tc_call(0x8022c2b0u, &a);
    if (param_3 != 0u) {
        c0lt = param_2 < 1;
        if ((u32)param_2 != 1u) {
            if (!c0lt) {
                a.r[0] = r3;
                (void)tc_call(0x8022c2d8u, &a);
                return;
            }
            if (param_2 < 0) {
                a.r[0] = r3;
                (void)tc_call(0x8022c2d8u, &a);
                return;
            }
            wr16(param_3, (u16)((u32)(s16)rd16(r30 + 0x87au) - (u32)(s16)rd16(r30 + 0x874u)));
            wr16(param_3 + 2u, (u16)((u32)(s16)rd16(r30 + 0x87cu) - (u32)(s16)rd16(r30 + 0x876u)));
            wr16(param_3 + 4u, (u16)((u32)(s16)rd16(r30 + 0x87eu) - (u32)(s16)rd16(r30 + 0x878u)));
        } else {
            wr16(param_3, (u16)((u32)(s16)rd16(r30 + 0x894u) - (u32)(s16)rd16(r30 + 0x88eu)));
            wr16(param_3 + 2u, (u16)((u32)(s16)rd16(r30 + 0x896u) - (u32)(s16)rd16(r30 + 0x890u)));
            wr16(param_3 + 4u, (u16)((u32)(s16)rd16(r30 + 0x898u) - (u32)(s16)rd16(r30 + 0x892u)));
        }
    }
    a.r[0] = r3;
    (void)tc_call(0x8022c2d8u, &a);
    return;
}

#include "tc_rt.h"

u32 fn_802a0de8(s32 param_1, u32 param_2)
{
    u32 r3 = 0;
    TcArgs a = {0};
    r3 = (u32)param_1;
    if ((u32)param_1 == 0u) {
        a.r[0] = 2u;
        r3 = tc_call(0x8028a274u, &a);
        if (r3 == 0u) {
            r3 = 0u;
            return r3;
        }
    }
    wr16(r3 + 2u, 5u);
    wr16(r3 + 4u, 0u);
    wr8(r3 + 8u, 6u);
    wr8(r3 + 9u, 8u);
    wr8(r3 + 0xau, 2u);
    wr8(r3 + 0xbu, (u8)param_2);
    wr8(r3 + 0xcu, (u8)((param_2 >> 8u) & 0xffu));
    a.r[0] = r3;
    (void)tc_call(0x8029db78u, &a);
    r3 = 1u;
    return r3;
}

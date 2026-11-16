#include "tc_rt.h"

u32 fn_8029fb2c(u32 param_1, u32 param_2, u32 param_3)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0;
    TcArgs a = {0};
    a.r[0] = 2u;
    r3 = tc_call(0x8028a274u, &a);
    if (r3 == 0u) {
        r3 = 0u;
    } else {
        wr16(r3 + 2u, 8u);
        wr16(r3 + 4u, 0u);
        r5 = (u32)rd8(param_1 + 2u);
        wr8(r3 + 8u, 1u);
        r4 = (u32)rd8(param_1 + 1u);
        wr8(r3 + 9u, 4u);
        r0 = (u32)rd8(param_1);
        wr8(r3 + 0xau, 5u);
        wr8(r3 + 0xbu, (u8)r5);
        wr8(r3 + 0xcu, (u8)r4);
        wr8(r3 + 0xdu, (u8)r0);
        wr8(r3 + 0xeu, (u8)param_2);
        wr8(r3 + 0xfu, (u8)param_3);
        a.r[0] = r3;
        (void)tc_call(0x8029db78u, &a);
        r3 = 1u;
    }
    return r3;
}

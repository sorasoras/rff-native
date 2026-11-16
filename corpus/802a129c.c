#include "tc_rt.h"

void fn_802a129c(u32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    u32 ctr = 0, r0 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r10 = 0;
    TcArgs a = {0};
    r4 = param_2;
    r5 = param_3;
    r6 = param_4;
    wr16(param_1 + 4u, 0u);
    r10 = (param_2 * 0x16u) + 4u;
    wr16(param_1 + 2u, (u16)r10);
    wr8(param_1 + 8u, 0x11u);
    wr8(param_1 + 9u, 0xcu);
    wr8(param_1 + 0xau, (u8)((r10 & 0xffffu) - 3u));
    if (param_2 > 0xbu) {
        r4 = 0xbu;
    }
    wr8(param_1 + 0xbu, (u8)r4);
    r7 = param_1 + 0xcu;
    ctr = r4;
    if ((s32)r4 > 0) {
        do {
            wr8(r7, rd8(r5 + 5u));
            wr8(r7 + 1u, rd8(r5 + 4u));
            wr8(r7 + 2u, rd8(r5 + 3u));
            wr8(r7 + 3u, rd8(r5 + 2u));
            wr8(r7 + 4u, rd8(r5 + 1u));
            r0 = (u32)rd8(r5);
            r5 = r5 + 6u;
            wr8(r7 + 5u, (u8)r0);
            wr8(r7 + 6u, rd8(r6 + 0xfu));
            wr8(r7 + 7u, rd8(r6 + 0xeu));
            wr8(r7 + 8u, rd8(r6 + 0xdu));
            wr8(r7 + 9u, rd8(r6 + 0xcu));
            wr8(r7 + 0xau, rd8(r6 + 0xbu));
            wr8(r7 + 0xbu, rd8(r6 + 0xau));
            wr8(r7 + 0xcu, rd8(r6 + 9u));
            wr8(r7 + 0xdu, rd8(r6 + 8u));
            wr8(r7 + 0xeu, rd8(r6 + 7u));
            wr8(r7 + 0xfu, rd8(r6 + 6u));
            wr8(r7 + 0x10u, rd8(r6 + 5u));
            wr8(r7 + 0x11u, rd8(r6 + 4u));
            wr8(r7 + 0x12u, rd8(r6 + 3u));
            wr8(r7 + 0x13u, rd8(r6 + 2u));
            wr8(r7 + 0x14u, rd8(r6 + 1u));
            r0 = (u32)rd8(r6);
            r6 = r6 + 0x10u;
            wr8(r7 + 0x15u, (u8)r0);
            r7 = r7 + 0x16u;
            ctr = ctr - 1u;
        } while (ctr != 0u);
    }
    a.r[0] = param_1;
    (void)tc_call(0x8029db78u, &a);
    return;
}

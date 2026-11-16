#include "tc_rt.h"

void fn_802eb580(u32 param_r3, u32 param_r4)
{
    u32 r0 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r12 = 0, r25 = 0, r26 = 0, r27 = 0, r28 = 0;
    u32 r29 = 0, r30 = 0, r31 = 0;
    r25 = (u32)rd8(param_r4);
    r26 = (u32)rd8(param_r4 + 1u);
    r27 = (u32)rd8(param_r4 + 2u);
    r28 = (u32)rd8(param_r4 + 3u);
    r29 = (u32)rd8(param_r4 + 4u);
    r30 = (u32)rd8(param_r4 + 5u);
    r31 = (u32)rd8(param_r4 + 6u);
    r12 = (u32)rd8(param_r4 + 7u);
    r10 = (u32)rd8(param_r4 + 9u);
    r9 = (u32)rd8(param_r4 + 0xau);
    r8 = (u32)rd8(param_r4 + 0xbu);
    r7 = (u32)rd8(param_r4 + 0xcu);
    r6 = (u32)rd8(param_r4 + 0xdu);
    r5 = (u32)rd8(param_r4 + 0xeu);
    r0 = (u32)rd8(param_r4 + 0xfu);
    wr8(param_r3 + 8u, rd8(param_r4 + 8u));
    wr8(param_r3, (u8)r25);
    wr8(param_r3 + 1u, (u8)r26);
    wr8(param_r3 + 2u, (u8)r27);
    wr8(param_r3 + 3u, (u8)r28);
    wr8(param_r3 + 4u, (u8)r29);
    wr8(param_r3 + 5u, (u8)r30);
    wr8(param_r3 + 6u, (u8)r31);
    wr8(param_r3 + 7u, (u8)r12);
    wr8(param_r3 + 9u, (u8)r10);
    wr8(param_r3 + 0xau, (u8)r9);
    wr8(param_r3 + 0xbu, (u8)r8);
    wr8(param_r3 + 0xcu, (u8)r7);
    wr8(param_r3 + 0xdu, (u8)r6);
    wr8(param_r3 + 0xeu, (u8)r5);
    wr8(param_r3 + 0xfu, (u8)r0);
    return;
}

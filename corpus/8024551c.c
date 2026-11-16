#include "tc_rt.h"

void fn_8024551c(u32 param_r3)
{
    u32 r0 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, r27 = 0, r28 = 0;
    u32 r29 = 0, r30 = 0, r31 = 0;
    r4 = rd32(0x805718d8u);
    r7 = rd32(0x805718ccu);
    wr32(0x805718e4u, rd32(0x805718e4u) + (u32)(s16)rd16(param_r3 + 0x52u));
    r6 = rd32(0x805718c0u);
    r5 = rd32(0x805718e0u);
    r0 = r4 + (u32)(s16)rd16(param_r3 + 0x54u);
    r4 = rd32(0x805718d4u);
    wr32(0x805718d8u, r0);
    r27 = rd32(0x805718c8u);
    r28 = rd32(0x805718bcu);
    r29 = rd32(0x805718dcu);
    wr32(0x805718ccu, r7 + (u32)(s16)rd16(param_r3 + 0x56u));
    r30 = rd32(0x805718d0u);
    r31 = rd32(0x805718c4u);
    r12 = rd32(0x805718b8u);
    wr32(0x805718c0u, r6 + (u32)(s16)rd16(param_r3 + 0x58u));
    r11 = rd32(0x805718b4u);
    r10 = rd32(0x805718b0u);
    r9 = rd32(0x805718acu);
    wr32(0x805718e0u, r5 + (u32)(s16)rd16(param_r3 + 0x5au));
    r8 = rd32(0x805718a8u);
    r7 = rd32(0x805718a4u);
    r6 = rd32(0x805718a0u);
    wr32(0x805718d4u, r4 + (u32)(s16)rd16(param_r3 + 0x5cu));
    r5 = rd32(0x8057189cu);
    r4 = rd32(0x80571898u);
    wr32(0x805718c8u, r27 + (u32)(s16)rd16(param_r3 + 0x5eu));
    wr32(0x805718bcu, r28 + (u32)(s16)rd16(param_r3 + 0x60u));
    wr32(0x805718dcu, r29 + (u32)(s16)rd16(param_r3 + 0x62u));
    wr32(0x805718d0u, r30 + (u32)(s16)rd16(param_r3 + 0x64u));
    wr32(0x805718c4u, r31 + (u32)(s16)rd16(param_r3 + 0x66u));
    wr32(0x805718b8u, r12 + (u32)(s16)rd16(param_r3 + 0x68u));
    wr32(0x805718b4u, r11 + (u32)(s16)rd16(param_r3 + 0xfau));
    wr32(0x805718b0u, r10 + (u32)(s16)rd16(param_r3 + 0xfcu));
    wr32(0x805718acu, r9 + (u32)(s16)rd16(param_r3 + 0xfeu));
    wr32(0x805718a8u, r8 + (u32)(s16)rd16(param_r3 + 0x100u));
    wr32(0x805718a4u, r7 + (u32)(s16)rd16(param_r3 + 0x102u));
    wr32(0x805718a0u, r6 + (u32)(s16)rd16(param_r3 + 0x104u));
    wr32(0x8057189cu, r5 + (u32)(s16)rd16(param_r3 + 0x106u));
    wr32(0x80571898u, r4 + (u32)(s16)rd16(param_r3 + 0x108u));
    return;
}

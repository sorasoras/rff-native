#include "tc_rt.h"

void fn_80194634(s32 param_1, s32 param_2)
{
    u32 r0 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0;
    f64 f0 = 0.0, f2 = 0.0;
    r4 = (u32)param_2;
    wr32(0x817fdfe0u, 0x817fe000u);
    r8 = (u32)rd8(0x805753f1u);
    r7 = (u32)rd8(0x805753f2u);
    r6 = (u32)rd8(0x805753f3u);
    r5 = (u32)rd8(0x805753f4u);
    r0 = (u32)rd8(0x805753f5u);
    wr8(0x817fdfe8u, rd8(0x805753f0u));
    wr8(0x817fdfe9u, (u8)r8);
    wr8(0x817fdfeau, (u8)r7);
    wr8(0x817fdfebu, (u8)r6);
    wr8(0x817fdfecu, (u8)r5);
    wr8(0x817fdfedu, (u8)r0);
    if ((u32)param_2 == 3u) {
        r4 = rd32((u32)param_1 + 0xacu);
    }
    r0 = (r4 << 1u) & 0xfffffffeu;
    r5 = (u32)rd8(r0 - 0x7e802018u);
    r0 = (u32)rd8(r0 - 0x7e802017u);
    r5 = (u32)(s8)r5;
    wr32(0x817fdff0u, 0x43300000u);
    r0 = (u32)(s8)r0;
    f2 = rdf64(0x805753f8u);
    r5 = r5 ^ 0x80000000u;
    wr32(0x817fdff8u, 0x43300000u);
    r0 = r0 ^ 0x80000000u;
    wr32(0x817fdff4u, r5);
    wr32(0x817fdffcu, r0);
    f0 = (f64)(f32)(rdf64(0x817fdff8u) - f2);
    wrf32d((u32)param_1 + 0x98u, (f64)(f32)(rdf64(0x817fdff0u) - f2));
    wrf32d((u32)param_1 + 0x9cu, f0);
    return;
}

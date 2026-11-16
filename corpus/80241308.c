#include "tc_rt.h"

void fn_80241308(u32 param_1)
{
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr8(0x817fdfd8u, 0x10u);
    wr8(0x817fdfd9u, (u8)(((u32)rd16(param_1) >> 8u) & 0xffu));
    wr8(0x817fdfdau, (u8)rd16(param_1));
    wr8(0x817fdfdbu, (u8)(((u32)rd16(param_1 + 2u) >> 8u) & 0xffu));
    wr8(0x817fdfdcu, (u8)rd16(param_1 + 2u));
    wr8(0x817fdfddu, (u8)(((u32)rd16(param_1 + 4u) >> 8u) & 0xffu));
    wr8(0x817fdfdeu, (u8)rd16(param_1 + 4u));
    wr8(0x817fdfdfu, (u8)(((u32)rd16(param_1 + 6u) >> 8u) & 0xffu));
    wr8(0x817fdfe0u, (u8)rd16(param_1 + 6u));
    wr8(0x817fdfe1u, (u8)(((u32)rd16(param_1 + 8u) >> 8u) & 0xffu));
    wr8(0x817fdfe2u, (u8)rd16(param_1 + 8u));
    wr8(0x817fdfe3u, (u8)(((u32)rd16(param_1 + 0xau) >> 8u) & 0xffu));
    wr8(0x817fdfe4u, (u8)rd16(param_1 + 0xau));
    wr8(0x817fdfe5u, rd8(param_1 + 0xcu));
    wr8(0x817fdfe6u, rd8(param_1 + 0xdu));
    wr8(0x817fdfe7u, rd8(param_1 + 0xeu));
    wr8(0x817fdfe8u, rd8(param_1 + 0xfu));
    wr8(0x817fdfe9u, rd8(param_1 + 0x10u));
    wr8(0x817fdfeau, rd8(param_1 + 0x11u));
    wr8(0x817fdfebu, rd8(param_1 + 0x12u));
    wr8(0x817fdfecu, (u8)(((u32)rd16(param_1 + 0x14u) >> 8u) & 0xffu));
    wr8(0x817fdfedu, (u8)((u32)rd16(param_1 + 0x14u) & 0xc0u));
    wr8(0x817fdfeeu, (u8)(((u32)rd16(param_1 + 0x16u) >> 8u) & 0xffu));
    wr8(0x817fdfefu, (u8)((u32)rd16(param_1 + 0x16u) & 0xc0u));
    wr8(0x817fdff0u, (u8)(((u32)rd16(param_1 + 0x18u) >> 8u) & 0xffu));
    wr8(0x817fdff1u, (u8)((u32)rd16(param_1 + 0x18u) & 0xc0u));
    wr8(0x817fdff2u, (u8)(((u32)rd16(param_1 + 0x1au) >> 8u) & 0xffu));
    wr8(0x817fdff3u, (u8)((u32)rd16(param_1 + 0x1au) & 0xc0u));
    wr8(0x817fdff4u, (u8)(((u32)rd16(param_1 + 0x1cu) >> 8u) & 0xffu));
    wr8(0x817fdff5u, (u8)((u32)rd16(param_1 + 0x1cu) & 0xc0u));
    wr8(0x817fdff6u, (u8)(((u32)rd16(param_1 + 0x1eu) >> 8u) & 0xffu));
    wr8(0x817fdff7u, (u8)((u32)rd16(param_1 + 0x1eu) & 0xc0u));
    wr8(0x817fdff8u, (u8)(((u32)rd16(param_1 + 0x20u) >> 8u) & 0xffu));
    wr8(0x817fdff9u, (u8)((u32)rd16(param_1 + 0x20u) & 0xc0u));
    a.r[0] = 0xe0u;
    a.r[1] = 0x817fdfd8u;
    a.r[2] = 0x22u;
    (void)tc_call(0x8023fda4u, &a);
    a.r[0] = 2u;
    (void)tc_call(0x8023f958u, &a);
    return;
}

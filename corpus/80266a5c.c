#include "tc_rt.h"

u32 fn_80266a5c(s32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r29 = 0, r30 = 0;
    TcArgs a = {0};
    (void)param_2;
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    r0 = rd32(0x80500d38u);
    wr32(0x817fdfd8u, param_3);
    wr32(0x817fdfdcu, param_4);
    if (r0 != 0u) {
        r4 = 0x817fdfd8u;
    } else {
        r4 = 0x817fdfe0u;
        r9 = (u32)rd8(0x817fdfdeu);
        r8 = (u32)rd8(0x817fdfddu);
        r7 = (u32)rd8(0x817fdfdcu);
        r6 = (u32)rd8(0x817fdfdbu);
        r5 = (u32)rd8(0x817fdfdau);
        r3 = (u32)rd8(0x817fdfd9u);
        r0 = (u32)rd8(0x817fdfd8u);
        wr8(0x817fdfe0u, rd8(0x817fdfdfu));
        wr8(0x817fdfe1u, (u8)r9);
        wr8(0x817fdfe2u, (u8)r8);
        wr8(0x817fdfe3u, (u8)r7);
        wr8(0x817fdfe4u, (u8)r6);
        wr8(0x817fdfe5u, (u8)r5);
        wr8(0x817fdfe6u, (u8)r3);
        wr8(0x817fdfe7u, (u8)r0);
    }
    r3 = rd32((u32)param_1 + 0xcu);
    r29 = 8u;
    r30 = 0u;
    r0 = 0x880u - r3;
    if (r0 < 8u) {
        r30 = 0x301u;
        r29 = r0;
    }
    if (r29 == 1u) {
        r3 = (u32)param_1 + r3;
        wr8(r3 + 0x10u, rd8(r4));
    } else {
        r3 = r3 + 0x10u;
        r3 = (u32)param_1 + r3;
        a.r[0] = r3;
        a.r[1] = r4;
        a.r[2] = r29;
        (void)tc_call(0x8000449cu, &a);
    }
    wr32((u32)param_1 + 0xcu, rd32((u32)param_1 + 0xcu) + r29);
    wr32((u32)param_1 + 8u, rd32((u32)param_1 + 0xcu));
    return r30;
}

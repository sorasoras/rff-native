#include "tc_rt.h"

void fn_800ae138(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    a.r[0] = (u32)param_1;
    r3 = tc_call(0x800ae01cu, &a);
    if (r3 != 0u) {
        a.r[0] = 0u;
        a.r[1] = 0u;
        a.r[2] = 3u;
        (void)tc_call(0x80044e3cu, &a);
        a.r[0] = (u32)param_1 + 0xcu;
        r3 = tc_call(0x800adc0cu, &a);
        wr8(0x817fdfefu, (u8)r3);
        wr8(0x817fdfecu, (u8)((r3 >> 0x18u) & 0xffu));
        wr8(0x817fdfedu, (u8)((r3 >> 0x10u) & 0xffu));
        wr8(0x817fdfeeu, (u8)((r3 >> 8u) & 0xffu));
        wr32(0x817fdfe8u, rd32(0x817fdfecu));
        a.r[0] = 0x817fdfe8u;
        (void)tc_call(0x800a39a8u, &a);
        a.r[0] = 1u;
        a.r[1] = 1u;
        a.r[2] = 3u;
        (void)tc_call(0x80044e3cu, &a);
    }
    return;
}

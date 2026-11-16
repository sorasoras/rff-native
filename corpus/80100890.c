#include "tc_rt.h"

void fn_80100890(u32 param_1, u32 param_2, s32 param_3)
{
    u32 r0 = 0, r3 = 0, r6 = 0, r7 = 0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    r3 = rd32(param_1);
    a.r[0] = r3;
    a.r[1] = param_2;
    a.r[2] = (u32)param_3;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.f[0] = 0.0;
    r3 = tc_call(rd32(rd32(r3) + 0x68u), &a);
    r0 = (u32)rd16(r3 + 0x1au);
    wr16(0x817fdfe0u, rd16(r3 + 0x18u));
    wr16(0x817fdfe2u, (u16)r0);
    r0 = (u32)rd16(r3 + 0x1eu);
    wr16(0x817fdfe4u, rd16(r3 + 0x1cu));
    wr16(0x817fdfe6u, (u16)r0);
    a.r[0] = param_1;
    a.r[1] = 0x817fdfe0u;
    r3 = tc_call(0x80100674u, &a);
    wr8(0x817fdfdfu, (u8)r3);
    wr8(0x817fdfdcu, (u8)((r3 >> 0x18u) & 0xffu));
    wr8(0x817fdfddu, (u8)((r3 >> 0x10u) & 0xffu));
    wr8(0x817fdfdeu, (u8)((r3 >> 8u) & 0xffu));
    wr32(0x817fdfd8u, rd32(0x817fdfdcu));
    r7 = (u32)rd8(0x817fdfd9u);
    r6 = (u32)rd8(0x817fdfdau);
    r0 = (u32)rd8(0x817fdfdbu);
    wr8((u32)param_3 + 0x24u, rd8(0x817fdfd8u));
    wr8((u32)param_3 + 0x25u, (u8)r7);
    wr8((u32)param_3 + 0x26u, (u8)r6);
    wr8((u32)param_3 + 0x27u, (u8)r0);
    a.r[0] = param_1;
    a.r[1] = param_2;
    a.r[2] = (u32)param_3;
    (void)tc_call(0x80100964u, &a);
    return;
}

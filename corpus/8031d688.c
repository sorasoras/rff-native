#include "tc_rt.h"

void fn_8031d688(u32 param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5, u32 param_6, u32 param_7, s32 param_8, f64 param_f1)
{
    u32 r0 = 0, r3 = 0, r11 = 0, r12 = 0, r28 = 0, r29 = 0, r30 = 0;
    TcArgs a = {0};
    wr32(0x817fdfb0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff8u, 0.0);
    wr32(0x817fdfd0u, 0u);
    wr32(0x817fdfd4u, 0u);
    wr32(0x817fdfd8u, 0u);
    wr32(0x817fdfdcu, 0u);
    wr32(0x817fdfe0u, 0u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    r3 = rd32(rd32(rd32(rd32(param_1 + 0x20u) + 0xbcu) + 0x20u));
    a.r[0] = r3;
    a.r[1] = param_2;
    a.r[2] = param_3;
    a.r[3] = param_4;
    a.r[4] = param_5;
    a.r[5] = param_6;
    a.r[6] = param_7;
    a.r[7] = (u32)param_8;
    a.f[0] = param_f1;
    r3 = tc_call(rd32(rd32(r3) + 0x4cu), &a);
    r28 = r3;
    if (r3 == 0u) {
        return;
    }
    r29 = rd32(param_4 + 4u);
    r30 = rd32(param_4 + 8u);
    r12 = rd32(param_3);
    r11 = rd32(param_3 + 4u);
    r0 = rd32(param_3 + 8u);
    wr32(0x817fdfb8u, rd32(param_4));
    wr32(0x817fdfbcu, r29);
    wr32(0x817fdfc0u, r30);
    wr32(0x817fdfc4u, r12);
    wr32(0x817fdfc8u, r11);
    wr32(0x817fdfccu, r0);
    a.r[0] = r3;
    a.r[1] = param_2;
    a.r[2] = 0x817fdfc4u;
    a.r[3] = 0x817fdfb8u;
    a.r[4] = param_1;
    a.r[5] = param_5;
    a.r[6] = param_6;
    a.r[7] = param_7;
    a.f[0] = param_f1;
    r3 = tc_call(rd32(rd32(r3 + 0x1cu) + 0x10u), &a);
    if (r3 == 0u) {
        return;
    }
    wr16(r28 + 0xe2u, (u16)((u32)rd16(r28 + 0xe2u) + (u32)param_8));
    a.r[0] = param_1 + 0x38u;
    a.r[1] = r28;
    (void)tc_call(0x802de7f4u, &a);
    wr16(param_1 + 0x50u, (u16)((u32)rd16(param_1 + 0x50u) + 1u));
    wr32(r28 + 0xcu, 1u);
    return;
}

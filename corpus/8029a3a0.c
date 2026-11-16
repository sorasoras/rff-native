#include "tc_rt.h"

void fn_8029a3a0(u32 param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5, u32 param_6, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10)
{
    u32 ctr = 0, r12 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfc0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfe0u, 0u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    r31 = 0x8053f1acu;
    if ((u32)rd8(0x80540118u) >= 4u) {
        a.f[0] = param_f1;
        a.f[1] = param_f2;
        a.f[2] = param_f3;
        a.f[3] = param_f4;
        a.f[4] = param_f5;
        a.f[5] = param_f6;
        a.f[6] = param_f7;
        a.f[7] = param_f8;
        a.r[0] = 0xd0003u;
        a.r[1] = 0x803941c4u;
        a.r[2] = param_2;
        a.r[3] = param_1;
        a.r[4] = param_5;
        a.r[5] = param_6;
        a.r[6] = 0x8053d958u;
        a.r[7] = param_r10;
        (void)tc_call(0x8028cc84u, &a);
    }
    r30 = 0u;
    ctr = 3u;
    while ((u32)rd16(r31 + 8u) != 4u || param_2 != (u32)rd16(r31 + 0xau)) {
        r30 = r30 + 1u;
        r31 = r31 + 0x34u;
        ctr = ctr - 1u;
        if (ctr == 0u) {
            return;
        }
    }
    if (rd32(r31 + 0x10u) != 0u) {
        a.r[0] = 0x817fdfceu;
        a.r[1] = r31 + 0x28u;
        a.r[2] = 6u;
        f1 = tc_callf(0x80004338u, &a);
        wr16(r31 + 0x24u, (u16)param_5);
        wr16(r31 + 0x26u, (u16)param_6);
        wr8(r31 + 0x2fu, (u8)param_3);
        wr8(r31 + 0x30u, (u8)param_4);
        r12 = rd32(r31 + 0x10u);
        wr8(0x817fdfd4u, (u8)param_1);
        wr16(0x817fdfc8u, (u16)r30);
        wr16(0x817fdfcau, (u16)param_5);
        wr16(0x817fdfccu, (u16)param_6);
        wr8(0x817fdfd5u, (u8)param_3);
        wr8(0x817fdfd6u, (u8)param_4);
        a.r[0] = 1u;
        a.r[1] = 0x817fdfc8u;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        (void)tc_call(r12, &a);
    }
    return;
}

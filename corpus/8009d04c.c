#include "tc_rt.h"

void fn_8009d04c(u32 param_1, s32 param_2, u32 param_3, u32 param_4, u32 param_5)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r25 = 0, r26 = 0, r27 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfb0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
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
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    r27 = 0u;
    r26 = 0u;
    r25 = 0u;
    wr32(0x817fdfb8u, param_5);
    wr8(0x817fdfc8u, 0u);
    wr32(0x817fdfccu, 0u);
    do {
        a.r[0] = param_1;
        a.r[1] = 0x817fdfc0u;
        a.r[2] = 0x817fdfb8u;
        a.r[3] = param_3;
        r3 = tc_call(0x8009cde4u, &a);
        f1 = tc_lastf();
        if ((u32)(s8)r3 != 0u) {
            if (r27 != 0u) {
                r3 = (r26 << 3u) & 0xfffffff8u;
                r26 = r26 + 1u;
                wr8(r3 + (u32)param_2, rd8(0x817fdfc8u));
                r3 = r3 + (u32)param_2;
                wr32(r3 + 4u, rd32(0x817fdfccu));
            }
            r27 = 1u;
            r0 = rd32(0x817fdfc4u);
            wr8(0x817fdfc8u, rd8(0x817fdfc0u));
            wr32(0x817fdfccu, r0);
        } else {
            r4 = rd32(0x817fdfb8u);
            r3 = (u32)rd8(r4);
            if (r3 == 0u) {
                a.r[0] = param_1;
                a.r[1] = 0x817fdfc8u;
                a.r[2] = 0x817fdfc8u;
                a.r[3] = param_3;
                (void)tc_call(0x8009cab0u, &a);
                wr32(param_4, rd32(0x817fdfccu));
                return;
            }
            r0 = r3 - 0x80u;
            if (r0 <= 0x17u) {
                r0 = (r0 << 2u) & 0xfffffffcu;
                r3 = rd32(r0 - 0x7fcae698u);
                a.r[0] = r3;
                a.r[1] = r4;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.f[0] = f1;
                (void)tc_call(r3, &a);
                return;
            }
            r25 = 1u;
        }
    } while (r25 == 0u);
    return;
}

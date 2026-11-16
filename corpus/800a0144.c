#include "tc_rt.h"

u32 fn_800a0144(u32 param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5, u32 param_6)
{
    u32 r3 = 0, r4 = 0, r5 = 0, r8 = 0, r9 = 0, r23 = 0, r24 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(0x817fdfb0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfdcu, 0u);
    wr32(0x817fdfe0u, 0u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    r31 = 0u;
    r9 = rd32(param_6);
    wr32(0x817fdfc8u, r9);
    r5 = (u32)rd8(r9);
    wr32(0x817fdfc8u, r9 + 1u);
    a.r[0] = 0x817fdfbau;
    a.r[1] = 0x817fdfb9u;
    a.r[2] = r5;
    r3 = tc_call(0x800a012cu, &a);
    if ((u32)(s8)r3 != 0u) {
        r24 = rd32(0x817fdfc8u);
        r4 = (u32)rd8(0x817fdfbau);
        wr32(0x817fdfc4u, r24);
        a.r[0] = 0x817fdfc4u;
        a.r[1] = r4;
        r3 = tc_call(0x8009f9a8u, &a);
        if ((u32)(s8)r3 != 0u) {
            r4 = (u32)rd8(0x817fdfb9u);
            wr32(0x817fdfc8u, rd32(0x817fdfc4u));
            a.r[0] = 0x817fdfc8u;
            a.r[1] = r4;
            r3 = tc_call(0x8009f9a8u, &a);
            if ((u32)(s8)r3 != 0u) {
                r8 = (u32)rd8(0x817fdfbau);
                if (r8 == 1u || (u32)rd8(0x817fdfb9u) == 1u) {
                    r23 = 1u;
                } else {
                    r23 = 0u;
                }
                wr8(0x817fdfb8u, 0u);
                a.r[0] = 0x817fdfc0u;
                a.r[1] = 0x817fdfb8u;
                a.r[2] = param_4;
                a.r[3] = param_5;
                a.r[4] = r24;
                a.r[5] = r8;
                a.r[6] = r23;
                r3 = tc_call(0x8009fa14u, &a);
                if ((u32)(s8)r3 != 0u) {
                    a.r[0] = 0x817fdfbcu;
                    a.r[1] = 0x817fdfb8u;
                    a.r[2] = param_4;
                    a.r[3] = param_5;
                    a.r[4] = rd32(0x817fdfc4u);
                    a.r[5] = (u32)rd8(0x817fdfb9u);
                    a.r[6] = r23;
                    r3 = tc_call(0x8009fa14u, &a);
                    if ((u32)(s8)r3 != 0u) {
                        r31 = 1u;
                        wr8(param_1, rd8(0x817fdfb8u));
                        wr32(param_2, rd32(0x817fdfc0u));
                        wr32(param_3, rd32(0x817fdfbcu));
                    }
                }
            }
        }
    }
    wr32(param_6, rd32(0x817fdfc8u));
    return r31;
}

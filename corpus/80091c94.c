#include "tc_rt.h"

void fn_80091c94(u32 param_1, u32 param_2, s32 param_3, s32 param_4)
{
    u32 r3 = 0, r4 = 0, r5 = 0, r18 = 0, r20 = 0, r21 = 0, r22 = 0, r27 = 0, r28 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf90u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wr32(0x817fdfb8u, 0u);
    wr32(0x817fdfbcu, 0u);
    wr32(0x817fdfc0u, 0u);
    wr32(0x817fdfc4u, 0u);
    wr32(0x817fdfc8u, 0u);
    wr32(0x817fdfccu, 0u);
    wr32(0x817fdfd0u, 0u);
    wr32(0x817fdfd4u, 0u);
    wr32(0x817fdfd8u, 0u);
    wr32(0x817fdfdcu, 0u);
    wr32(0x817fdfe0u, 0u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    if (rd32(0x805706e8u) != 0u || (u32)rd8(0x80492821u) != 3u) {
        f31 = rdf64(0x805729b0u);
        r28 = 0u;
        r22 = 0u;
        while ((s32)r28 < param_3) {
            r18 = r22 ^ 0x80000000u;
            r27 = 0u;
            r21 = 0u;
            while ((s32)r27 < param_4) {
                wr32(0x817fdfacu, r18);
                r5 = rd32(param_2);
                r31 = 0u;
                wr32(0x817fdfa8u, 0x43300000u);
                r20 = 0u;
                r3 = rd32(param_2 + 8u);
                f0 = rdf64(0x817fdfa8u);
                wr32(0x817fdf98u, r5);
                f1 = (f64)(f32)(f0 - f31);
                r4 = rd32(param_2 + 4u);
                f0 = (f64)rdf32(0x817fdf98u);
                wr32(0x817fdfb4u, r21 ^ 0x80000000u);
                f2 = (f64)(f32)(f0 + f1);
                wr32(0x817fdfb0u, 0x43300000u);
                f1 = rdf64(0x817fdfb0u);
                wr32(0x817fdfa0u, r3);
                f1 = (f64)(f32)(f1 - f31);
                f0 = (f64)rdf32(0x817fdfa0u);
                wr32(0x817fdf9cu, r4);
                f0 = (f64)(f32)(f0 + f1);
                wrf32d(0x817fdf98u, f2);
                wrf32d(0x817fdfa0u, f0);
                for (;;) {
                    r3 = rd32(param_1 + r20 + 0xbf8u);
                    if (r3 != 0u) {
                        a.r[0] = r3;
                        a.r[1] = 0x817fdf98u;
                        r3 = tc_call(0x80090324u, &a);
                        if (r3 != 0u) break;
                    }
                    r31 = r31 + 1u;
                    r20 = r20 + 4u;
                    if ((s32)r31 >= 20) {
                        r3 = 0u;
                        break;
                    }
                }
                if (r3 != 0u) {
                    a.r[0] = r3;
                    r3 = tc_call(0x8008f3c4u, &a);
                }
                r27 = r27 + 1u;
                r21 = r21 + 0x64u;
            }
            r28 = r28 + 1u;
            r22 = r22 + 0x64u;
        }
    }
    return;
}

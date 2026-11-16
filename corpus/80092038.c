#include "tc_rt.h"

void fn_80092038(u32 param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5, s32 param_6, s32 param_7)
{
    u32 r3 = 0, r4 = 0, r5 = 0, r16 = 0, r17 = 0, r18 = 0, r26 = 0, r27 = 0, r29 = 0, r30 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf80u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wr32(0x817fdfb0u, 0u);
    wr32(0x817fdfb4u, 0u);
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
    f31 = rdf64(0x805729b0u);
    r27 = 0u;
    r18 = 0u;
    while ((s32)r27 < param_6) {
        r30 = r18 ^ 0x80000000u;
        r26 = 0u;
        r17 = 0u;
        while ((s32)r26 < param_7) {
            wr32(0x817fdf9cu, r30);
            r5 = rd32(param_2);
            r29 = 0u;
            wr32(0x817fdf98u, 0x43300000u);
            r16 = 0u;
            r3 = rd32(param_2 + 8u);
            f0 = rdf64(0x817fdf98u);
            wr32(0x817fdf88u, r5);
            f1 = (f64)(f32)(f0 - f31);
            r4 = rd32(param_2 + 4u);
            f0 = (f64)rdf32(0x817fdf88u);
            wr32(0x817fdfa4u, r17 ^ 0x80000000u);
            f2 = (f64)(f32)(f0 + f1);
            wr32(0x817fdfa0u, 0x43300000u);
            f1 = rdf64(0x817fdfa0u);
            wr32(0x817fdf90u, r3);
            f1 = (f64)(f32)(f1 - f31);
            f0 = (f64)rdf32(0x817fdf90u);
            wr32(0x817fdf8cu, r4);
            f0 = (f64)(f32)(f0 + f1);
            wrf32d(0x817fdf88u, f2);
            wrf32d(0x817fdf90u, f0);
            for (;;) {
                r3 = rd32(param_1 + r16 + 0xbf8u);
                if (r3 != 0u) {
                    a.r[0] = r3;
                    a.r[1] = 0x817fdf88u;
                    r3 = tc_call(0x80090324u, &a);
                    if (r3 != 0u) break;
                }
                r29 = r29 + 1u;
                r16 = r16 + 4u;
                if ((s32)r29 >= 20) {
                    r3 = 0u;
                    break;
                }
            }
            if (r3 != 0u) {
                a.r[0] = r3;
                a.r[1] = param_3;
                a.r[2] = param_4;
                a.r[3] = param_5;
                (void)tc_call(0x8008eb68u, &a);
            }
            r26 = r26 + 1u;
            r17 = r17 + 0x64u;
        }
        r27 = r27 + 1u;
        r18 = r18 + 0x64u;
    }
    return;
}

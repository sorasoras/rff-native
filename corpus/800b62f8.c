#include "tc_rt.h"

void fn_800b62f8(s32 param_1, u32 param_2)
{
    u32 r0 = 0, r4 = 0, r5 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf90u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe0u, 0u);
    if (rd32((u32)param_1 + 0xe94u) != 0u) {
        if (rd32(0x80571130u) != 0u) {
            if ((u32)rd8((u32)param_1 + 0x368u) == 0u) {
                return;
            }
            a.r[0] = (u32)param_1;
            a.r[1] = param_2;
            (void)tc_call(0x8007e6d4u, &a);
        } else {
            if (rd32((u32)param_1 + 0xea0u) != 0u && rd32((u32)param_1 + 0xccu) != 0u) {
                r5 = rd32(0x80337c4cu);
                r4 = rd32(0x80337c50u);
                r0 = rd32(0x80337c54u);
                wr32(0x817fdfc8u, rd32(0x80337c48u));
                wr32(0x817fdfccu, r5);
                wr32(0x817fdfd0u, r4);
                wr32(0x817fdfd4u, r0);
                a.f[0] = (f64)rdf32((u32)param_1 + 0xea4u);
                a.r[0] = 0x817fdfc8u;
                f1 = tc_callf(0x80045764u, &a);
                wrf32d(0x817fdfb8u, f1);
                f0 = (f64)rdf32(0x803d27acu);
                f3 = (f64)rdf32(0x803d27a4u);
                f2 = (f64)rdf32(0x803d27a8u);
                wrf32d(0x817fdfa8u, (f64)rdf32(0x803d27a0u));
                wrf32d(0x817fdfacu, f3);
                wrf32d(0x817fdfb0u, f2);
                wrf32d(0x817fdfb4u, f0);
                wrf32d(0x817fdfc4u, f0);
                wrf32d(0x817fdfbcu, f1);
                wrf32d(0x817fdfc0u, f1);
                a.r[0] = 0x817fdfb8u;
                (void)tc_call(0x8004a4fcu, &a);
                a.r[0] = rd32((u32)param_1 + 0x70u);
                a.r[1] = param_2;
                (void)tc_call(0x800318a8u, &a);
                a.r[0] = 0x817fdfa8u;
                (void)tc_call(0x8004a4fcu, &a);
                a.r[0] = 1u;
                a.r[1] = 3u;
                a.r[2] = 1u;
                (void)tc_call(0x80253f64u, &a);
                f2 = (f64)rdf32(0x803d27a4u);
                f1 = (f64)rdf32(0x803d27a8u);
                f0 = (f64)rdf32(0x80572c14u);
                wrf32d(0x817fdf98u, (f64)rdf32(0x803d27a0u));
                f31 = (f64)rdf32(0x803d27acu);
                wrf32d(0x817fdf9cu, f2);
                wrf32d(0x817fdfa0u, f1);
                wrf32d(0x817fdfa4u, f0);
                a.r[0] = 0x817fdf98u;
                (void)tc_call(0x8004a4fcu, &a);
                a.r[0] = rd32((u32)param_1 + 0x1668u);
                a.r[1] = param_2;
                (void)tc_call(0x800318a8u, &a);
                wrf32d(0x817fdfa4u, f31);
                a.r[0] = 0x817fdf98u;
                (void)tc_call(0x8004a4fcu, &a);
            } else {
                a.r[0] = (u32)param_1;
                a.r[1] = param_2;
                (void)tc_call(0x8007e6d4u, &a);
            }
        }
    }
    return;
}

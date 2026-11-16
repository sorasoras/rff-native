#include "tc_rt.h"

void fn_800cc7e0(f64 param_1, f64 param_2, s32 param_3, u32 param_4, s32 param_5)
{
    u32 r0 = 0, r3 = 0, r30 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    (void)param_4;
    wr32(0x817fdf90u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wrf64(0x817fdfe0u, 0.0);
    wrf32d(0x817fdfe8u, 0.0);
    wrf32d(0x817fdfecu, 0.0);
    wrf64(0x817fdfd0u, 0.0);
    wrf32d(0x817fdfd8u, 0.0);
    wrf32d(0x817fdfdcu, 0.0);
    wrf64(0x817fdfc0u, 0.0);
    wrf32d(0x817fdfc8u, 0.0);
    wrf32d(0x817fdfccu, 0.0);
    wr32(0x817fdfbcu, 0u);
    wr32(0x817fdfb8u, 0u);
    wr32(0x817fdfb4u, 0u);
    wr32(0x817fdfb0u, 0u);
    a.r[0] = (u32)param_3;
    r3 = tc_call(0x800cc578u, &a);
    if ((u32)rd16(r3) != 0u) {
        a.r[0] = (u32)param_3;
        r3 = tc_call(0x800cd5a8u, &a);
        if (r3 != 0u) {
            a.r[0] = (u32)param_3;
            r3 = tc_call(0x800cb968u, &a);
            a.r[0] = (u32)param_3;
            a.r[1] = r3;
            (void)tc_call(0x800cb950u, &a);
            r0 = rd32((u32)param_3 + 0x1cu);
            wr32(0x817fdf9cu, rd32((u32)param_3 + 0x18u));
            wr32(0x817fdfa0u, r0);
            wr32(0x817fdfa4u, rd32((u32)param_3 + 0x20u));
            a.r[0] = (u32)param_3;
            r3 = tc_call(0x800cb948u, &a);
            r31 = r3;
            a.r[0] = (u32)param_3;
            r3 = tc_call(0x800cc578u, &a);
            r30 = r3;
            a.r[0] = (u32)param_3;
            f1 = tc_callf(0x800cc598u, &a);
            f31 = f1;
            f30 = (f64)(f32)(param_1 + (f64)rdf32((u32)param_3 + 0x64u));
            a.r[0] = (u32)param_3;
            f1 = tc_callf(0x800cc5f4u, &a);
            f1 = (f64)(f32)(f1 - f31);
            f0 = (f64)(f32)((f64)rdf32(0x817fdf9cu) + param_1);
            wrf32d(0x817fdfa0u, f1);
            wrf32d(0x817fdf9cu, f0);
            while ((u32)rd16(r30) != 0u) {
                if ((u32)param_5 != 0u) {
                    wr8(0x817fdf98u, rd8((u32)param_3 + 0x24u));
                    wr8(0x817fdf99u, rd8((u32)param_3 + 0x25u));
                    wr8(0x817fdf9au, rd8((u32)param_3 + 0x26u));
                    wr8(0x817fdf9bu, rd8((u32)param_3 + 0x27u));
                    a.f[0] = f31;
                    a.r[0] = r31;
                    a.r[1] = 0x817fdf9cu;
                    a.r[2] = 0x817fdf98u;
                    a.r[3] = (u32)rd16(r30);
                    (void)tc_call(0x8007972cu, &a);
                }
                f30 = (f64)(f32)(f30 + param_2);
                wrf32d(0x817fdf9cu, (f64)(f32)((f64)rdf32(0x817fdf9cu) + param_2));
                if ((u32)param_5 != 0u) {
                    a.r[0] = (u32)param_3;
                    f1 = tc_callf(0x800cd52cu, &a);
                    if (f30 > f1) break;
                }
                r30 = r30 + 2u;
            }
            a.r[0] = (u32)param_3;
            (void)tc_call(0x800cc580u, &a);
            a.r[0] = (u32)param_3;
            r3 = tc_call(0x800cb958u, &a);
            a.r[0] = (u32)param_3;
            a.r[1] = r3;
            (void)tc_call(0x800cb950u, &a);
            a.f[0] = (f64)rdf32(0x817fdf9cu);
            a.r[0] = (u32)param_3;
            (void)tc_call(0x800cd050u, &a);
        }
    }
    return;
}

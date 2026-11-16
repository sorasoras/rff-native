#include "tc_rt.h"

void fn_80167914(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf70u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    r0 = rd32((u32)param_1 + 0xcu);
    if (r0 != 0u) {
        a.r[0] = r0;
        a.r[1] = 0x1du;
        r3 = tc_call(0x80031cf8u, &a);
        r0 = rd32((u32)param_1 + 0x14u);
        r31 = r3;
        wr32(0x817fdf84u, rd32((u32)param_1 + 0x10u));
        wr32(0x817fdf88u, r0);
        wr32(0x817fdf8cu, rd32((u32)param_1 + 0x18u));
        if (r3 != 0u) {
            f0 = (f64)rdf32(0x80574bf8u);
            f1 = (f64)rdf32(0x80574bfcu);
            wrf32d(0x817fdfd0u, f0);
            wrf32d(0x817fdfc0u, f1);
            wrf32d(0x817fdfe0u, f0);
            wrf32d(0x817fdfc4u, f0);
            wrf32d(0x817fdfd4u, f1);
            wrf32d(0x817fdfe4u, f0);
            wrf32d(0x817fdfc8u, f0);
            wrf32d(0x817fdfd8u, f0);
            wrf32d(0x817fdfe8u, f1);
            wrf32d(0x817fdfccu, f0);
            wrf32d(0x817fdfdcu, f0);
            wrf32d(0x817fdfecu, f0);
            wrf32d(0x817fdf78u, f0);
            wrf32d(0x817fdf7cu, f0);
            wrf32d(0x817fdf80u, f0);
            wrf32d(0x817fdf90u, f1);
            wrf32d(0x817fdfa0u, f0);
            wrf32d(0x817fdfb0u, f0);
            wrf32d(0x817fdf94u, f0);
            wrf32d(0x817fdfa4u, f1);
            wrf32d(0x817fdfb4u, f0);
            wrf32d(0x817fdf98u, f0);
            wrf32d(0x817fdfa8u, f0);
            wrf32d(0x817fdfb8u, f1);
            wrf32d(0x817fdf9cu, f0);
            wrf32d(0x817fdfacu, f0);
            wrf32d(0x817fdfbcu, f0);
            a.r[0] = 0x817fdf90u;
            a.r[1] = 0x817fdfc0u;
            a.r[2] = 0x817fdfc0u;
            (void)tc_call(0x802337a0u, &a);
            a.r[0] = rd32(r31 + 0x50u);
            a.r[1] = 0x817fdfc0u;
            a.r[2] = 0x817fdfc0u;
            (void)tc_call(0x802337a0u, &a);
            f0 = (f64)rdf32(0x80574bf8u);
            wrf32d(0x817fdf84u, f0);
            wrf32d(0x817fdf88u, f0);
            wrf32d(0x817fdf8cu, f0);
            a.r[0] = 0x817fdfc0u;
            a.r[1] = 0x817fdf84u;
            a.r[2] = 0x817fdf84u;
            (void)tc_call(0x8023411cu, &a);
        }
    }
    return;
}

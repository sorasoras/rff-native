#include "tc_rt.h"

void fn_800aeafc(u32 param_1, s32 param_2, u32 param_3, u32 param_4)
{
    u32 r0 = 0, r3 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf80u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    r0 = rd32((u32)param_2 + 0xcf8u);
    wr32(param_1, rd32((u32)param_2 + 0xcf4u));
    wr32(param_1 + 4u, r0);
    wr32(param_1 + 8u, rd32((u32)param_2 + 0xcfcu));
    a.r[0] = rd32((u32)param_2 + 0x70u);
    a.r[1] = param_3;
    r3 = tc_call(0x80031cf8u, &a);
    r31 = r3;
    if (r3 != 0u) {
        f3 = (f64)rdf32(0x80572bf8u);
        f4 = (f64)rdf32(0x80572c00u);
        wrf32d(0x817fdf94u, f3);
        f2 = (f64)rdf32(param_4);
        wrf32d(0x817fdfa4u, f3);
        f1 = (f64)rdf32(param_4 + 4u);
        wrf32d(0x817fdfb4u, f3);
        f0 = (f64)rdf32(param_4 + 8u);
        wrf32d(0x817fdfb8u, f4);
        wrf32d(0x817fdfc8u, f3);
        wrf32d(0x817fdfd8u, f3);
        wrf32d(0x817fdfbcu, f3);
        wrf32d(0x817fdfccu, f4);
        wrf32d(0x817fdfdcu, f3);
        wrf32d(0x817fdfc0u, f3);
        wrf32d(0x817fdfd0u, f3);
        wrf32d(0x817fdfe0u, f4);
        wrf32d(0x817fdfc4u, f3);
        wrf32d(0x817fdfd4u, f3);
        wrf32d(0x817fdfe4u, f3);
        wrf32d(0x817fdf88u, f4);
        wrf32d(0x817fdf98u, f3);
        wrf32d(0x817fdfa8u, f3);
        wrf32d(0x817fdf8cu, f3);
        wrf32d(0x817fdf9cu, f4);
        wrf32d(0x817fdfacu, f3);
        wrf32d(0x817fdf90u, f3);
        wrf32d(0x817fdfa0u, f3);
        wrf32d(0x817fdfb0u, f4);
        wrf32d(0x817fdf94u, f2);
        wrf32d(0x817fdfa4u, f1);
        wrf32d(0x817fdfb4u, f0);
        a.r[0] = 0x817fdf88u;
        a.r[1] = 0x817fdfb8u;
        a.r[2] = 0x817fdfb8u;
        (void)tc_call(0x802337a0u, &a);
        a.r[0] = rd32(r31 + 0x50u);
        a.r[1] = 0x817fdfb8u;
        a.r[2] = 0x817fdfb8u;
        (void)tc_call(0x802337a0u, &a);
        f0 = (f64)rdf32(0x80572bf8u);
        wrf32d(param_1 + 8u, f0);
        wrf32d(param_1 + 4u, f0);
        wrf32d(param_1, f0);
        a.r[0] = 0x817fdfb8u;
        a.r[1] = param_1;
        a.r[2] = param_1;
        (void)tc_call(0x8023411cu, &a);
    } else {
        a.r[0] = param_1;
        a.r[1] = param_4;
        a.r[2] = param_1;
        (void)tc_call(0x80234380u, &a);
    }
    return;
}

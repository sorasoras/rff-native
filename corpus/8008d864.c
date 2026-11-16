#include "tc_rt.h"

void fn_8008d864(s32 param_1)
{
    u32 r4 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf90u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    if (rd32((u32)param_1 + 0x48u) != 0u) {
        f0 = (f64)rdf32(0x8057296cu);
        r4 = (u32)param_1 + 0x5cu;
        f1 = (f64)rdf32(0x80572968u);
        wrf32d((u32)param_1 + 0x6cu, f0);
        wrf32d((u32)param_1 + 0x5cu, f1);
        wrf32d((u32)param_1 + 0x7cu, f0);
        wrf32d((u32)param_1 + 0x60u, f0);
        wrf32d((u32)param_1 + 0x70u, f1);
        wrf32d((u32)param_1 + 0x80u, f0);
        wrf32d((u32)param_1 + 0x64u, f0);
        wrf32d((u32)param_1 + 0x74u, f0);
        wrf32d((u32)param_1 + 0x84u, f1);
        wrf32d((u32)param_1 + 0x68u, f0);
        wrf32d((u32)param_1 + 0x78u, f0);
        wrf32d((u32)param_1 + 0x88u, f0);
        wrf32d(0x817fdfc8u, f1);
        wrf32d(0x817fdfd8u, f0);
        wrf32d(0x817fdfe8u, f0);
        wrf32d(0x817fdfccu, f0);
        wrf32d(0x817fdfdcu, f1);
        wrf32d(0x817fdfecu, f0);
        wrf32d(0x817fdfd0u, f0);
        wrf32d(0x817fdfe0u, f0);
        wrf32d(0x817fdff0u, f1);
        wrf32d(0x817fdfd4u, f0);
        wrf32d(0x817fdfe4u, f0);
        wrf32d(0x817fdff4u, f0);
        wrf32d(0x817fdfd4u, (f64)rdf32((u32)param_1 + 0x50u));
        wrf32d(0x817fdfe4u, (f64)rdf32((u32)param_1 + 0x54u));
        wrf32d(0x817fdff4u, (f64)rdf32((u32)param_1 + 0x58u));
        a.r[0] = 0x817fdfc8u;
        a.r[1] = r4;
        a.r[2] = r4;
        (void)tc_call(0x802337a0u, &a);
        a.r[0] = rd32((u32)param_1 + 0x48u);
        a.r[1] = (u32)param_1 + 0x5cu;
        (void)tc_call(0x800315c0u, &a);
    }
    if (rd32((u32)param_1 + 4u) != 0u) {
        f0 = (f64)rdf32(0x8057296cu);
        r4 = (u32)param_1 + 0x18u;
        f1 = (f64)rdf32(0x80572968u);
        wrf32d((u32)param_1 + 0x28u, f0);
        wrf32d((u32)param_1 + 0x18u, f1);
        wrf32d((u32)param_1 + 0x38u, f0);
        wrf32d((u32)param_1 + 0x1cu, f0);
        wrf32d((u32)param_1 + 0x2cu, f1);
        wrf32d((u32)param_1 + 0x3cu, f0);
        wrf32d((u32)param_1 + 0x20u, f0);
        wrf32d((u32)param_1 + 0x30u, f0);
        wrf32d((u32)param_1 + 0x40u, f1);
        wrf32d((u32)param_1 + 0x24u, f0);
        wrf32d((u32)param_1 + 0x34u, f0);
        wrf32d((u32)param_1 + 0x44u, f0);
        wrf32d(0x817fdf98u, f1);
        wrf32d(0x817fdfa8u, f0);
        wrf32d(0x817fdfb8u, f0);
        wrf32d(0x817fdf9cu, f0);
        wrf32d(0x817fdfacu, f1);
        wrf32d(0x817fdfbcu, f0);
        wrf32d(0x817fdfa0u, f0);
        wrf32d(0x817fdfb0u, f0);
        wrf32d(0x817fdfc0u, f1);
        wrf32d(0x817fdfa4u, f0);
        wrf32d(0x817fdfb4u, f0);
        wrf32d(0x817fdfc4u, f0);
        wrf32d(0x817fdfa4u, (f64)rdf32((u32)param_1 + 0xcu));
        wrf32d(0x817fdfb4u, (f64)rdf32((u32)param_1 + 0x10u));
        wrf32d(0x817fdfc4u, (f64)rdf32((u32)param_1 + 0x14u));
        a.r[0] = 0x817fdf98u;
        a.r[1] = r4;
        a.r[2] = r4;
        (void)tc_call(0x802337a0u, &a);
        a.r[0] = rd32((u32)param_1 + 4u);
        a.r[1] = (u32)param_1 + 0x18u;
        (void)tc_call(0x800315c0u, &a);
    }
    return;
}

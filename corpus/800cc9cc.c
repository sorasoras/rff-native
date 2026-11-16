#include "tc_rt.h"

void fn_800cc9cc(s32 param_1, u32 param_2)
{
    u32 r3 = 0;
    f64 f0 = 0.0, f1 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wr32(0x817fdfecu, 0u);
    f1 = (f64)rdf32((u32)param_1 + 0x20u);
    f0 = (f64)(f32)((f64)(f32)((f64)rdf32((u32)param_1 + 0x1cu) + (f64)rdf32((u32)param_1 + 0x44u)) - (f64)rdf32((u32)param_1 + 0x30u));
    wrf32d(0x817fdfdcu, (f64)rdf32((u32)param_1 + 0x18u));
    wrf32d(0x817fdfe4u, f1);
    wrf32d(0x817fdfe0u, f0);
    wr8(0x817fdfd8u, rd8((u32)param_1 + 0x24u));
    wr8(0x817fdfd9u, rd8((u32)param_1 + 0x25u));
    wr8(0x817fdfdau, rd8((u32)param_1 + 0x26u));
    wr8(0x817fdfdbu, rd8((u32)param_1 + 0x27u));
    f31 = (f64)rdf32((u32)param_1 + 0x30u);
    a.r[0] = (u32)param_1;
    r3 = tc_call(0x800cb948u, &a);
    a.f[0] = f31;
    a.r[0] = r3;
    a.r[1] = 0x817fdfdcu;
    a.r[2] = 0x817fdfd8u;
    a.r[3] = param_2;
    (void)tc_call(0x8007972cu, &a);
    return;
}

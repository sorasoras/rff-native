#include "tc_rt.h"

u32 fn_8010fcdc(f64 param_1, u32 param_2, u32 param_3)
{
    u32 r0 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    r0 = rd32(param_2 + 4u);
    wr32(0x817fdfd8u, rd32(param_2));
    wr32(0x817fdfdcu, r0);
    wr32(0x817fdfe0u, rd32(param_2 + 8u));
    a.r[0] = 0x817fdfd8u;
    a.r[1] = param_3;
    a.r[2] = 0x817fdfd8u;
    (void)tc_call(0x802343a4u, &a);
    a.r[0] = 0x817fdfd8u;
    f1 = tc_callf(0x80234428u, &a);
    f0 = (f64)(f32)(param_1 * param_1);
    return ((((f1 < f0) << 0x1fu) | ((f1 > f0) << 0x1eu) | ((f1 == f0) << 0x1du) | (((f1 != f1) || (f0 != f0)) << 0x1cu)) >> 0x1fu) & 1u;
}

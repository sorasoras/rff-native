#include "tc_rt.h"

u32 fn_801597c4(s32 param_1)
{
    f64 f1 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    f31 = (f64)(f32)ppc_fabs((f64)(f32)((f64)rdf32((u32)param_1 + 0x1cu) - (f64)rdf32((u32)param_1 + 0x18u)));
    f1 = tc_callf(0x80159310u, &a);
    return (ppc_cntlzw(((((f31 < f1) << 0x1fu) | ((f31 > f1) << 0x1eu) | ((f31 == f1) << 0x1du) | (((f31 != f31) || (f1 != f1)) << 0x1cu)) >> 0x1eu) & 1u) >> 5u) & 0x7ffffffu;
}

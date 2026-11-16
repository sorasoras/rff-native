#include "tc_rt.h"

u32 fn_801cff2c(s32 param_1)
{
    u32 c0lt = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    r31 = 0xbu;
    f31 = (f64)rdf32((u32)param_1 + 0xe00u);
    f1 = tc_callf(0x80040a00u, &a);
    f0 = (f64)(f32)((f64)rdf32(0x80575f38u) * f1);
    c0lt = f0 < f31;
    if (((((c0lt << 0x1fu) | ((f0 > f31) << 0x1eu) | ((c0lt || (f0 == f31)) << 0x1du) | (((f0 != f0) || (f31 != f31)) << 0x1cu)) >> 0x1du) & 1u) != 0u) {
        r31 = 7u;
    }
    return r31;
}

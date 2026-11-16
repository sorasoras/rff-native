#include "tc_rt.h"

u32 fn_80093428(f64 param_1, u32 param_2, u32 param_3)
{
    u32 c0lt = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0;
    f7 = (f64)(f32)((f64)rdf32(param_2 + 0x14u) + param_1);
    f6 = (f64)(f32)((f64)rdf32(param_2 + 0xcu) + param_1);
    f2 = (f64)rdf32(param_3 + 8u);
    f5 = (f64)(f32)((f64)rdf32(param_2 + 8u) - param_1);
    f3 = (f64)(f32)((f64)rdf32(param_2) - param_1);
    f0 = (f64)rdf32(param_2 + 0x10u);
    f4 = (f64)rdf32(param_2 + 4u);
    c0lt = f2 < f7;
    f1 = (f64)rdf32(param_3 + 4u);
    r7 = (((c0lt << 0x1fu) | ((f2 > f7) << 0x1eu) | ((c0lt || (f2 == f7)) << 0x1du) | (((f2 != f2) || (f7 != f7)) << 0x1cu)) >> 0x1du) & 1u;
    c0lt = f1 < f0;
    r6 = (c0lt << 0x1fu) | ((f1 > f0) << 0x1eu) | ((c0lt || (f1 == f0)) << 0x1du) | (((f1 != f1) || (f0 != f0)) << 0x1cu);
    f0 = (f64)rdf32(param_3);
    r6 = (r6 >> 0x1du) & 1u;
    c0lt = f0 < f6;
    r5 = (c0lt << 0x1fu) | ((f0 > f6) << 0x1eu) | ((c0lt || (f0 == f6)) << 0x1du) | (((f0 != f0) || (f6 != f6)) << 0x1cu);
    c0lt = f5 < f2;
    r5 = (r5 >> 0x1du) & 1u;
    r4 = (c0lt << 0x1fu) | ((f5 > f2) << 0x1eu) | ((c0lt || (f5 == f2)) << 0x1du) | (((f5 != f5) || (f2 != f2)) << 0x1cu);
    c0lt = f3 < f0;
    r4 = (r4 >> 0x1du) & 1u;
    r3 = (c0lt << 0x1fu) | ((f3 > f0) << 0x1eu) | ((c0lt || (f3 == f0)) << 0x1du) | (((f3 != f3) || (f0 != f0)) << 0x1cu);
    c0lt = f4 < f1;
    r3 = (r3 >> 0x1du) & 1u;
    r3 = r7 & (r6 & (r5 & (r4 & (r3 & ((((c0lt << 0x1fu) | ((f4 > f1) << 0x1eu) | ((c0lt || (f4 == f1)) << 0x1du) | (((f4 != f4) || (f1 != f1)) << 0x1cu)) >> 0x1du) & 1u)))));
    return r3;
}

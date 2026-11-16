#include "tc_rt.h"

u32 fn_8020e5bc(f64 param_1, u32 param_2)
{
    u32 r3 = 0, r5 = 0, r31 = 0;
    TcArgs a = {0};
    if (param_2 >= 0x23u) {
        r31 = 0u;
    } else {
        r5 = 0x804df9e0u;
        r31 = rd32(((param_2 << 2u) & 0xfffffffcu) - 0x7fb20620u);
    }
    if (r31 != 0u) {
        a.r[0] = r31;
        a.r[1] = 0u;
        a.r[2] = r5;
        a.f[0] = param_1;
        (void)tc_call(rd32(rd32(r31) + 0x1cu), &a);
        a.r[0] = r31;
        a.r[1] = tc_lastr4();
        a.r[2] = 0u;
        a.f[0] = param_1;
        (void)tc_call(rd32(rd32(r31) + 0x24u), &a);
        r3 = 1u;
    } else {
        r3 = 0u;
    }
    return r3;
}

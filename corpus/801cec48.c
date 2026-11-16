#include "tc_rt.h"

void fn_801cec48(s32 param_1, u32 param_2)
{
    u32 r3 = 0;
    TcArgs a = {0};
    r3 = rd32((u32)param_1 + 0xd34u);
    if (rd32(((r3 << 2u) & 0xfffffffcu) - 0x7fca9e94u) != 0u) {
        a.f[0] = (f64)rdf32(0x80575e98u);
        a.r[0] = r3;
        a.r[1] = param_2;
        a.r[2] = 0x804b15c0u;
        a.r[3] = 0x804890c8u;
        (void)tc_call(0x800d7768u, &a);
        return;
    }
    a.f[0] = (f64)rdf32(0x80575e98u);
    a.r[0] = r3;
    a.r[1] = param_2;
    a.r[2] = 0x804b15c0u;
    a.r[3] = 0x804890c8u;
    (void)tc_call(0x800d783cu, &a);
    return;
}

#include "tc_rt.h"

void fn_800bfeb4(u32 param_1)
{
    u32 r3 = 0, r4 = 0, r12 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    do {
        wr32(param_1 + 0xa08u, 4u);
        f1 = (f64)rdf32(0x80572e78u);
        r12 = rd32(param_1);
        r4 = (u32)rd8(0x80468f50u);
        r12 = rd32(r12 + 0x54u);
    } while (r12 == 0x800bfeb4u);
    if (r12 == 0x817ff000u) {
        return;
    }
    a.r[0] = param_1;
    a.r[1] = r4;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.f[0] = f1;
    r3 = tc_call(r12, &a);
    f1 = tc_lastf();
    return;
}

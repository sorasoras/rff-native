#include "tc_rt.h"

void fn_800bfe40(u32 param_1, s32 param_2)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r12 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r4 = (u32)param_2;
    do {
        r0 = 2u;
        if (r4 != 0u) {
            r0 = 3u;
        }
        wr32(param_1 + 0xa08u, r0);
        r0 = r0 * 0x58u;
        f1 = (f64)rdf32(0x80572e78u);
        r12 = rd32(param_1);
        r12 = rd32(r12 + 0x54u);
        r4 = (u32)rd8(r0 - 0x7fb97210u);
    } while (r12 == 0x800bfe40u);
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

#include "tc_rt.h"

void fn_80213bb8(u32 param_1)
{
    u32 r3 = 0, r4 = 0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    if ((u32)rd8(param_1) != 0u) {
        r3 = tc_call(0x800a7488u, &a);
        if (rd32(param_1 + 8u) == r3) {
            wr8(0x817fdfe8u, 0u);
            a.r[0] = param_1;
            a.r[1] = 9u;
            a.r[2] = param_1 + 0x18u;
            a.r[3] = 0x817fdfe8u;
            (void)tc_call(0x80212b5cu, &a);
            a.r[0] = 9u;
            r3 = tc_call(0x800a4500u, &a);
            r4 = tc_lastr4();
            if (r3 != 0u) {
                a.r[0] = r3;
                a.r[1] = r4;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.f[0] = (f64)rdf32(param_1 + 0x24u);
                (void)tc_call(rd32(rd32(r3) + 0x24u), &a);
            }
        }
    }
    return;
}

#include "tc_rt.h"

void fn_8004ca7c(u32 param_1)
{
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    if ((u32)rd8(0x803c6300u) != param_1) {
        if (param_1 != 0u) {
            a.r[0] = 0x803c6308u;
            a.r[1] = 1u;
            (void)tc_call(0x802543b0u, &a);
            a.r[0] = 0x803c6348u;
            a.r[1] = 0u;
            (void)tc_call(0x802544a0u, &a);
            a.r[0] = 0u;
            (void)tc_call(0x80254548u, &a);
            f1 = (f64)rdf32(0x805721c8u);
            wr32(0x817fdfe8u, 0u);
            a.f[0] = f1;
            a.f[1] = f1;
            a.f[2] = f1;
            a.f[3] = f1;
            a.r[0] = 0u;
            a.r[1] = 0x817fdfe8u;
            (void)tc_call(0x802539e0u, &a);
            a.r[0] = 4u;
            a.r[1] = 0u;
            a.r[2] = 1u;
            a.r[3] = 1u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 2u;
            (void)tc_call(0x80251eb4u, &a);
            a.r[0] = 1u;
            (void)tc_call(0x80251e90u, &a);
            a.r[0] = 0u;
            (void)tc_call(0x8004a73cu, &a);
        } else {
            (void)tc_call(0x8004d69cu, &a);
            (void)tc_call(0x8004e090u, &a);
        }
        wr8(0x803c6300u, (u8)param_1);
    }
    return;
}

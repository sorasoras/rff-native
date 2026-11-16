#include "tc_rt.h"

void fn_8010ced0(u32 param_1, s32 param_2)
{
    u32 r3 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    r3 = tc_call(0x800a6894u, &a);
    r31 = r3;
    if (r3 != 0u) {
        a.r[0] = r3;
        r3 = tc_call(0x800a68e0u, &a);
        f1 = tc_lastf();
        if (r3 != 0u) {
            if ((u32)param_2 != 0u) {
                a.r[0] = r31;
                a.r[1] = 0u;
                a.r[2] = 0xbu;
                a.f[0] = f1;
                (void)tc_call(rd32(rd32(r31) + 0x7cu), &a);
            } else {
                a.r[0] = r31;
                a.r[1] = 0u;
                a.r[2] = 0xau;
                a.f[0] = f1;
                (void)tc_call(rd32(rd32(r31) + 0x7cu), &a);
            }
        }
    }
    return;
}

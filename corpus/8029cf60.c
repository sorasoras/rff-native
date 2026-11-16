#include "tc_rt.h"

void fn_8029cf60(u32 param_1, u32 param_2)
{
    u32 r3 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    r3 = tc_call(0x802952a8u, &a);
    f1 = tc_lastf();
    if (r3 != 0u) {
        r31 = param_2 | 0x8000u;
        wr16(r3 + 0x1au, (u16)r31);
        r3 = r3 + 0x1cu;
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = r3;
        r3 = tc_call(0x80297a6cu, &a);
        if (r3 != 0u) {
            wr16(r3, (u16)r31);
        }
    }
    return;
}

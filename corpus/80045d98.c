#include "tc_rt.h"

u32 fn_80045d98(u32 param_1)
{
    u32 r3 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    if (rd32(0x80571040u) == 0u) {
        r3 = 0u;
    } else {
        if (rd32(0x803c1de0u) != 0u) {
            r3 = 0u;
        } else {
            a.r[0] = 0x803c1dc0u;
            a.r[1] = 0u;
            a.r[2] = 0xcu;
            (void)tc_call(0x8000443cu, &a);
            a.r[0] = 0x803c1dccu;
            a.r[1] = 0u;
            a.r[2] = 0x10u;
            f1 = tc_callf(0x8000443cu, &a);
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = param_1;
            a.r[1] = 0x803c1d40u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            r3 = tc_call(0x802348dcu, &a);
            f1 = tc_lastf();
            if (r3 == 0u) {
                r3 = 0u;
            } else {
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                a.r[0] = 0x803c1d40u;
                a.r[1] = 0x803c1f40u;
                a.r[2] = 0x80u;
                a.r[3] = 0u;
                a.r[4] = 0x80045d84u;
                a.r[5] = 2u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                r3 = tc_call(0x80234db8u, &a);
                if (r3 == 0u) {
                    r3 = 0u;
                } else {
                    r3 = 1u;
                    wr8(0x80571074u, 1u);
                }
            }
        }
    }
    return r3;
}

#include "tc_rt.h"

u32 fn_802bf164(f64 param_1, f64 param_2, u32 param_3, u32 param_4, u32 param_r8)
{
    u32 r3 = 0, r4 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r31 = 0u;
    a.r[0] = param_3;
    a.r[1] = param_4;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[5] = param_r8;
    a.f[0] = param_1;
    a.f[1] = param_2;
    r3 = tc_call(rd32(rd32(param_3) + 0x58u), &a);
    r4 = tc_lastr4();
    if (r3 != 0u) {
        a.r[0] = param_3;
        a.r[1] = r4;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[5] = 0u;
        a.f[0] = param_1;
        a.f[1] = param_2;
        r3 = tc_call(rd32(rd32(param_3) + 0x5cu), &a);
        f1 = tc_lastf();
        if (r3 != 0u) {
            a.r[0] = param_3;
            a.r[1] = param_4;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[5] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            r3 = tc_call(rd32(rd32(param_3) + 0x24u), &a);
            f1 = tc_lastf();
            r4 = tc_lastr4();
            if (r3 != 0u) {
                a.r[0] = param_3;
                a.r[1] = r4;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[5] = 0u;
                a.f[0] = param_1;
                a.f[1] = param_2;
                f1 = tc_callf(rd32(rd32(param_3) + 0x38u), &a);
                a.r[0] = param_3;
                a.r[1] = tc_lastr4();
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[5] = 0u;
                a.f[0] = f1;
                a.f[1] = 0.0;
                r3 = tc_call(rd32(rd32(param_3) + 0x20u), &a);
                f1 = tc_lastf();
                r4 = r3;
                r3 = rd32(param_3 + 0x28u);
                a.r[0] = r3;
                a.r[1] = r4;
                a.r[2] = 3u;
                a.r[3] = param_r8;
                a.r[5] = 0u;
                a.f[0] = f1;
                a.f[1] = 0.0;
                (void)tc_call(rd32(rd32(r3) + 0x34u), &a);
            } else {
                a.r[0] = param_3;
                a.r[1] = param_4;
                a.r[2] = 1u;
                a.r[3] = 0u;
                a.r[5] = 0u;
                a.f[0] = f1;
                a.f[1] = 0.0;
                f1 = tc_callf(rd32(rd32(param_3) + 0x28u), &a);
                a.r[0] = param_3;
                a.r[1] = tc_lastr4();
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[5] = 0u;
                a.f[0] = f1;
                a.f[1] = 0.0;
                f1 = tc_callf(rd32(rd32(param_3) + 0x2cu), &a);
                a.r[0] = param_3;
                a.r[1] = tc_lastr4();
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[5] = 0u;
                a.f[0] = f1;
                a.f[1] = 0.0;
                r3 = tc_call(rd32(rd32(param_3) + 0x20u), &a);
                f1 = tc_lastf();
                r4 = r3;
                r3 = rd32(param_3 + 0x28u);
                a.r[0] = r3;
                a.r[1] = r4;
                a.r[2] = 1u;
                a.r[3] = param_r8;
                a.r[5] = 0u;
                a.f[0] = f1;
                a.f[1] = 0.0;
                (void)tc_call(rd32(rd32(r3) + 0x34u), &a);
            }
            r31 = 1u;
        } else {
            a.r[0] = param_3;
            a.r[1] = param_4;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[5] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            r3 = tc_call(rd32(rd32(param_3) + 0x24u), &a);
            f1 = tc_lastf();
            if (r3 != 0u) {
                a.r[0] = param_3;
                a.r[1] = param_4;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[5] = 0u;
                a.f[0] = f1;
                a.f[1] = 0.0;
                f1 = tc_callf(rd32(rd32(param_3) + 0x28u), &a);
                a.r[0] = param_3;
                a.r[1] = tc_lastr4();
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[5] = 0u;
                a.f[0] = f1;
                a.f[1] = 0.0;
                f1 = tc_callf(rd32(rd32(param_3) + 0x30u), &a);
                a.r[0] = param_3;
                a.r[1] = tc_lastr4();
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[5] = 0u;
                a.f[0] = f1;
                a.f[1] = 0.0;
                r3 = tc_call(rd32(rd32(param_3) + 0x20u), &a);
                f1 = tc_lastf();
                r4 = r3;
                r3 = rd32(param_3 + 0x28u);
                a.r[0] = r3;
                a.r[1] = r4;
                a.r[2] = 2u;
                a.r[3] = param_r8;
                a.r[5] = 0u;
                a.f[0] = f1;
                a.f[1] = 0.0;
                (void)tc_call(rd32(rd32(r3) + 0x34u), &a);
            }
        }
    }
    return r31;
}

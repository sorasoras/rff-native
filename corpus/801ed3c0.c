#include "tc_rt.h"

u32 fn_801ed3c0(s32 param_1, s32 param_2)
{
    u32 r3 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r31 = 0u;
    a.r[0] = (u32)param_2 + 0xbcu;
    r3 = tc_call(0x801ed2a4u, &a);
    f1 = tc_lastf();
    if (r3 != 0xffffu) {
        a.r[0] = (u32)param_1;
        a.r[1] = (u32)param_2;
        a.f[0] = f1;
        r3 = tc_call(rd32(((r3 << 2u) & 0xfffffffcu) - 0x7fc89dc8u), &a);
        r31 = r3;
    } else {
        if ((u32)param_1 == 2u) {
            a.r[0] = 0x40u;
            r3 = tc_call(0x8010057cu, &a);
            r31 = r3;
            if (r3 != 0u) {
                a.r[0] = r3;
                (void)tc_call(0x801005ecu, &a);
                wr32(r31 + 0x34u, 0x803762d8u);
            }
            wr32(r31, (u32)param_2);
        }
    }
    return r31;
}

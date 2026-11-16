#include "tc_rt.h"

void fn_8009f64c(u32 param_1, s32 param_2)
{
    u32 r3 = 0, r4 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    if (((u32)param_2 != 0u && rd32((u32)param_2 + 0x14u) != 0u) && rd32((u32)param_2 + 0x18u) >= 0x14u) {
        a.r[0] = 0x817fdfe8u;
        a.r[1] = (u32)param_2;
        r3 = tc_call(0x8009f7acu, &a);
        if ((u32)(s8)r3 != 0u) {
            a.r[0] = (u32)param_2;
            a.r[1] = param_1;
            a.r[2] = 0x817fdfe8u;
            r3 = tc_call(0x8009f92cu, &a);
            f1 = tc_lastf();
            r4 = tc_lastr4();
            if (r3 != 0u) {
                r3 = r3 + 0x10u;
                a.r[0] = r3;
                a.r[1] = r4;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.f[0] = f1;
                r3 = tc_call(rd32(0x817fdff0u), &a);
                if (r3 != 0u) {
                    a.r[0] = (u32)param_2;
                    a.r[1] = 0x817fdfe8u;
                    a.r[2] = rd32((u32)param_2 + 0x14u) + r3;
                    a.r[3] = 1u;
                    (void)tc_call(0x800a03c8u, &a);
                }
            }
        }
    }
    return;
}

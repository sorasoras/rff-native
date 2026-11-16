#include "tc_rt.h"

u32 fn_8009f574(u32 param_1, s32 param_2)
{
    u32 r3 = 0, r4 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    r30 = 0u;
    wr32(0x817fdff4u, 0u);
    if (((u32)param_2 != 0u && rd32((u32)param_2 + 0x14u) != 0u) && rd32((u32)param_2 + 0x18u) >= 0x14u) {
        a.r[0] = 0x817fdfd8u;
        a.r[1] = (u32)param_2;
        r3 = tc_call(0x8009f7acu, &a);
        if ((u32)(s8)r3 != 0u) {
            a.r[0] = (u32)param_2;
            a.r[1] = param_1;
            a.r[2] = 0x817fdfd8u;
            r3 = tc_call(0x8009f92cu, &a);
            f1 = tc_lastf();
            r4 = tc_lastr4();
            r31 = r3;
            if (r3 != 0u) {
                r3 = r3 + 0xcu;
                a.r[0] = r3;
                a.r[1] = r4;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.f[0] = f1;
                r3 = tc_call(rd32(0x817fdfe0u), &a);
                f1 = tc_lastf();
                r4 = tc_lastr4();
                if (r3 != 0u) {
                    r30 = rd32((u32)param_2 + 0x14u) + r3;
                    a.r[0] = r31 + 8u;
                    a.r[1] = r4;
                    a.r[2] = 0u;
                    a.r[3] = 0u;
                    a.f[0] = f1;
                    r3 = tc_call(rd32(0x817fdfe0u), &a);
                    a.r[0] = (u32)param_2;
                    a.r[1] = 0x817fdfd8u;
                    a.r[2] = r30;
                    a.r[3] = r3;
                    r3 = tc_call(0x8009fc60u, &a);
                    r30 = r3;
                }
            }
        }
    }
    return r30;
}

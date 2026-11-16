#include "tc_rt.h"

u32 fn_800a28c8(u32 param_1, u32 param_2, s32 param_3, s32 param_4, s32 param_5)
{
    u32 r3 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    (void)param_1;
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff0u, 0u);
    a.r[0] = (u32)param_5;
    r3 = tc_call(0x800a3218u, &a);
    f1 = tc_lastf();
    if (((u32)param_3 + (u32)param_4) > r3) {
        r3 = 0u;
    } else {
        wr32((u32)param_5 + 0x3338u, 1u);
        wr32(0x817fdfe0u, (u32)param_3);
        wr32(0x817fdfe4u, (u32)param_4);
        wr32(0x817fdfd8u, 0x800a35ecu);
        wr32(0x817fdfdcu, (u32)param_5);
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = param_2;
        a.r[1] = 0x393u;
        a.r[2] = 0u;
        a.r[3] = 0x817fdfd8u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        (void)tc_call(0x80050e08u, &a);
        r3 = 1u;
    }
    return r3;
}

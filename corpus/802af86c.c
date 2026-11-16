#include "tc_rt.h"

void fn_802af86c(s32 param_1, u32 param_2, u32 param_3, s32 param_4)
{
    u32 r3 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    (void)param_3;
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr16(0x817fdfe8u, (u16)param_4);
    a.r[0] = (u32)param_1;
    a.r[1] = param_2;
    r3 = tc_call(0x802acd40u, &a);
    f1 = tc_lastf();
    if ((u32)rd8((u32)param_1 + 0x6cu) != 5u && (u32)rd16(0x817fdfe8u) == 0u) {
        a.r[0] = (u32)param_1;
        a.r[1] = param_2;
        (void)tc_call(0x802ac38cu, &a);
    } else {
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = r3;
        a.r[1] = 0xbu;
        a.r[2] = 0x817fdfe8u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        (void)tc_call(0x802ae638u, &a);
    }
    return;
}

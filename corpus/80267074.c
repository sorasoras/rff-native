#include "tc_rt.h"

void fn_80267074(u32 param_1)
{
    u32 r0 = 0, r3 = 0, r29 = 0, r30 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    r29 = param_1;
    for (;;) {
        r0 = (u32)rd8(r29);
        r29 = r29 + 1u;
        r30 = (u32)(s8)r0;
        if (r30 == 0u) break;
        r3 = tc_call(0x80268310u, &a);
        wr8(0x817fdfe8u, (u8)r30);
        r30 = r3;
        wr8(0x817fdfe9u, 0u);
        a.r[0] = 0u;
        f1 = tc_callf(0x80268304u, &a);
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = 0x817fdfe8u;
        a.r[1] = tc_lastr4();
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        (void)tc_call(0x80228554u, &a);
        a.r[0] = r30;
        (void)tc_call(0x80268304u, &a);
    }
    return;
}

#include "tc_rt.h"

void fn_800fe8d4(s32 param_1)
{
    u32 r0 = 0, r5 = 0, r6 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    a.r[0] = 0u;
    (void)tc_call(0x802547e8u, &a);
    a.r[0] = 0u;
    (void)tc_call(0x80250e3cu, &a);
    a.r[0] = 0u;
    a.r[1] = 0x11u;
    a.r[2] = 0u;
    (void)tc_call(0x802537d4u, &a);
    a.r[0] = 1u;
    a.r[1] = 7u;
    a.r[2] = 0u;
    (void)tc_call(0x80253f64u, &a);
    f1 = (f64)rdf32(0x80573c30u);
    wr32(0x817fdfecu, 0u);
    r6 = (u32)rd8(0x817fdfedu);
    r5 = (u32)rd8(0x817fdfeeu);
    r0 = (u32)rd8(0x817fdfefu);
    wr8(0x817fdfe8u, rd8(0x817fdfecu));
    wr8(0x817fdfe9u, (u8)r6);
    wr8(0x817fdfeau, (u8)r5);
    wr8(0x817fdfebu, (u8)r0);
    a.f[0] = f1;
    a.f[1] = f1;
    a.f[2] = f1;
    a.f[3] = f1;
    a.r[0] = 0u;
    a.r[1] = 0x817fdfe8u;
    (void)tc_call(0x802539e0u, &a);
    a.r[0] = (u32)param_1 + 0x74u;
    a.r[1] = 1u;
    (void)tc_call(0x802543b0u, &a);
    return;
}

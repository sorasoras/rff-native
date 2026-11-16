#include "tc_rt.h"

void fn_801153a0(s32 param_1, u32 param_2)
{
    u32 r0 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r12 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    r7 = (u32)rd8(param_2);
    wr32(0x817fe004u, 0x817ff000u);
    r6 = (u32)rd8(param_2 + 1u);
    wr32(0x817fdffcu, 0u);
    r5 = (u32)rd8(param_2 + 2u);
    wr32(0x817fdff8u, 0u);
    r0 = (u32)rd8(param_2 + 3u);
    wr8(0x817fdfdcu, (u8)r7);
    wr8(0x817fdfddu, (u8)r6);
    wr8(0x817fdfdeu, (u8)r5);
    wr8(0x817fdfdfu, (u8)r0);
    a.r[0] = (u32)param_1 + 0x40u;
    a.r[1] = 0x817fdfdcu;
    f1 = tc_callf(0x8010fa28u, &a);
    if (rd32((u32)param_1 + 0x70u) != 0u) {
        f0 = (f64)rdf32(0x80574124u);
        r5 = (u32)rd8(param_2);
        wrf32d(0x817fdfe8u, f0);
        wrf32d(0x817fdfe4u, f0);
        wrf32d(0x817fdfe0u, f0);
        r12 = rd32((u32)param_1 + 0x30u);
        wr8(param_2, (u8)(r5 + 0xffu));
        r12 = rd32(r12 + 0x18u);
        a.r[0] = (u32)param_1;
        a.r[1] = 0x817fdfe0u;
        a.r[2] = r5;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        (void)tc_call(r12, &a);
        r5 = (u32)rd8(param_2 + 1u);
        r4 = (u32)rd8(param_2 + 2u);
        r0 = (u32)rd8(param_2 + 3u);
        wr8(0x817fdfd8u, rd8(param_2));
        f1 = (f64)rdf32(0x817fdfe0u);
        wr8(0x817fdfd9u, (u8)r5);
        f2 = (f64)rdf32(0x817fdfe8u);
        wr8(0x817fdfdau, (u8)r4);
        f3 = (f64)rdf32(0x80574120u);
        wr8(0x817fdfdbu, (u8)r0);
        a.f[0] = f1;
        a.f[1] = f2;
        a.f[2] = f3;
        a.r[0] = 0x817fdfd8u;
        (void)tc_call(0x8010f888u, &a);
    }
    return;
}

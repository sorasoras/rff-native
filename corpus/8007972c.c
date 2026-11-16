#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

void fn_8007972c(f64 param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5)
{
    u32 r0 = 0, r3 = 0, r5 = 0, r6 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe0u, 0u);
    a.r[0] = param_2;
    (void)tc_call(0x80079d50u, &a);
    r6 = (u32)rd8(param_4 + 1u);
    r5 = (u32)rd8(param_4 + 2u);
    r0 = (u32)rd8(param_4 + 3u);
    wr8(0x817fdfd8u, rd8(param_4));
    wr8(0x817fdfd9u, (u8)r6);
    wr8(0x817fdfdau, (u8)r5);
    wr8(0x817fdfdbu, (u8)r0);
    a.r[0] = param_2;
    a.r[1] = param_5;
    r3 = tc_call(0x800795b0u, &a);
    a.r[0] = param_2;
    f1 = tc_callf(0x80079d28u, &a);
    f1 = (f64)(f32)px_fdiv(param_1, f1);
    a.f[0] = f1;
    a.r[0] = param_2;
    a.r[1] = param_3;
    a.r[2] = 0x817fdfd8u;
    a.r[3] = r3 & 0xffffu;
    (void)tc_call(0x800797e0u, &a);
    return;
}

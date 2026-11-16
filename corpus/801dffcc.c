#include "tc_rt.h"

static u64 px_f2b(f64 x)
{
    union { f64 d; u64 b; } v;
    v.d = x;
    return v.b;
}

static f64 px_b2f(u64 x)
{
    union { f64 d; u64 b; } v;
    v.b = x;
    return v.d;
}

static f64 px_ctiw(f64 b, s32 w)
{
    u64 r = 0xfff8000000000000ull | (u32)w;
    if (w == 0 && (px_f2b(b) >> 63) != 0) r |= 0x100000000ull;
    return px_b2f(r);
}

s32 fn_801dffcc(f64 param_1, f64 param_2, u32 param_3, s32 param_4, u32 param_5, u32 param_6)
{
    u32 r0 = 0, r3 = 0, r29 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(0x817fdfc0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff8u, 0.0);
    wrf64(0x817fdff0u, 0.0);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfe4u, 0u);
    r29 = param_5;
    wr32(0x817fdfe0u, 0u);
    if (param_5 == 0u) {
        a.r[0] = param_3;
        a.r[1] = (u32)param_4;
        a.r[2] = param_5;
        a.r[3] = param_6;
        a.f[0] = param_1;
        a.f[1] = param_2;
        r3 = tc_call(rd32(rd32(param_3) + 0x28u), &a);
        r29 = r3;
    }
    if (rd32((((u32)param_4 << 2u) & 0xfffffffcu) - 0x7fca9e94u) != 0u) {
        r0 = rd32(r29 + 4u);
        wr32(0x817fdfc8u, rd32(r29));
        wr32(0x817fdfccu, r0);
        wr32(0x817fdfd0u, rd32(r29 + 8u));
        a.f[0] = param_1;
        a.r[0] = (u32)param_4;
        a.r[1] = 0x817fdfc8u;
        a.r[2] = 0x804890c8u;
        a.r[3] = 0x804890c8u;
        r3 = tc_call(0x800d7758u, &a);
        r31 = r3;
    } else {
        a.f[0] = param_1;
        a.r[0] = (u32)param_4;
        a.r[1] = r29;
        a.r[2] = 0x804890c8u;
        a.r[3] = 0x804890c8u;
        r3 = tc_call(0x800d782cu, &a);
        r31 = r3;
    }
    if (r3 == 0u) {
        r3 = 0u;
    } else {
        r3 = r3;
        wrf64(0x817fdfd8u, px_ctiw(param_2, ppc_fctiwz(param_2)));
        a.r[0] = r3;
        a.r[1] = rd32(0x817fdfdcu);
        (void)tc_call(0x80157f28u, &a);
        a.r[0] = rd32(param_3 + 0xd10u);
        a.r[1] = r31;
        a.r[2] = r29;
        a.r[3] = param_6;
        (void)tc_call(0x801dcdb8u, &a);
        r3 = r31;
    }
    return (s32)r3;
}

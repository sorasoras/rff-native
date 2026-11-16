#include "tc_rt.h"

static f64 px_b2f(u64 x)
{
    union { f64 d; u64 b; } v;
    v.b = x;
    return v.d;
}

void fn_8004d208(u32 param_1)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfe8u, 0x43300000u);
    r3 = tc_call(0x8003c9d0u, &a);
    r0 = rd32(param_1);
    r31 = r3;
    c0lt = (s32)r0 < 1;
    if (r0 == 1u) {
        a.r[0] = param_1 + 0x58u;
        a.r[1] = 1u;
        (void)tc_call(0x802543b0u, &a);
    } else if (!c0lt) {
        if ((s32)r0 < 3) {
            a.r[0] = param_1 + 0x58u;
            a.r[1] = 1u;
            (void)tc_call(0x802543b0u, &a);
        }
    } else if ((s32)r0 >= 0) {
        a.r[0] = param_1 + 0x58u;
        a.r[1] = 0u;
        (void)tc_call(0x802543b0u, &a);
    }
    a.r[0] = (u32)rd16(param_1 + 0xf0u);
    a.r[1] = (u32)rd16(param_1 + 0xf2u);
    a.r[2] = (u32)rd16(param_1 + 0xf4u);
    a.r[3] = (u32)rd16(param_1 + 0xf6u);
    (void)tc_call(0x80254744u, &a);
    if ((u32)rd8(r31 + 0x18u) == 0u) {
        r0 = (u32)rd16(param_1 + 0xf2u);
        wr32(0x817fdfecu, (u32)rd16(param_1 + 0xf0u));
        r3 = (u32)rd16(param_1 + 0xf4u);
        f4 = rdf64(0x80572208u);
        f0 = px_b2f((u64)r0 | 0x4330000000000000ull);
        r0 = (u32)rd16(param_1 + 0xf6u);
        f1 = (f64)(f32)(rdf64(0x817fdfe8u) - f4);
        wr32(0x817fdfecu, r3);
        f2 = (f64)(f32)(f0 - f4);
        f3 = (f64)(f32)(px_b2f((u64)r3 | 0x4330000000000000ull) - f4);
        f4 = (f64)(f32)(px_b2f((u64)r0 | 0x4330000000000000ull) - f4);
        a.f[0] = f1;
        a.f[1] = f2;
        a.f[2] = f3;
        a.f[3] = f4;
        a.f[4] = (f64)rdf32(param_1 + 0xe8u);
        a.f[5] = (f64)rdf32(param_1 + 0xecu);
        (void)tc_call(0x802546e8u, &a);
    } else {
        r3 = tc_call(0x8023f380u, &a);
        r0 = (u32)rd16(param_1 + 0xf2u);
        wr32(0x817fdfecu, (u32)rd16(param_1 + 0xf0u));
        r4 = (u32)rd16(param_1 + 0xf4u);
        f4 = rdf64(0x80572208u);
        f0 = px_b2f((u64)r0 | 0x4330000000000000ull);
        r0 = (u32)rd16(param_1 + 0xf6u);
        f1 = (f64)(f32)(rdf64(0x817fdfe8u) - f4);
        wr32(0x817fdfecu, r4);
        f2 = (f64)(f32)(f0 - f4);
        f3 = (f64)(f32)(px_b2f((u64)r4 | 0x4330000000000000ull) - f4);
        f4 = (f64)(f32)(px_b2f((u64)r0 | 0x4330000000000000ull) - f4);
        a.f[0] = f1;
        a.f[1] = f2;
        a.f[2] = f3;
        a.f[3] = f4;
        a.f[4] = (f64)rdf32(param_1 + 0xe8u);
        a.f[5] = (f64)rdf32(param_1 + 0xecu);
        a.r[0] = r3;
        (void)tc_call(0x802546acu, &a);
    }
    return;
}

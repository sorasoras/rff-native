#include "tc_rt.h"

static f64 px_b2f(u64 x)
{
    union { f64 d; u64 b; } v;
    v.b = x;
    return v.d;
}

void fn_8032d638(u32 param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r17 = 0, r23 = 0, r24 = 0, r25 = 0, r26 = 0, r27 = 0, r28 = 0;
    u32 r29 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0, f2 = 0.0, f29 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    r31 = rd32(param_2);
    wr32(0x817fdf78u, 0x43300000u);
    a.r[0] = rd32(r31 + 0x24u);
    r3 = tc_call(0x8032a308u, &a);
    f1 = tc_lastf();
    r30 = r3;
    a.r[0] = param_1;
    a.r[1] = r31;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.r[6] = 0u;
    a.r[7] = 0u;
    a.f[0] = f1;
    a.f[1] = 0.0;
    r3 = tc_call(rd32(rd32(param_1) + 0x18u), &a);
    f1 = tc_lastf();
    r29 = r3;
    r28 = (u32)rd16(r30) & 0x800u;
    a.r[0] = param_1;
    a.r[1] = r28;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.r[6] = 0u;
    a.r[7] = 0u;
    a.f[0] = f1;
    a.f[1] = 0.0;
    r3 = tc_call(rd32(rd32(param_1) + 0x10u), &a);
    f1 = tc_lastf();
    r27 = r3;
    a.r[0] = param_1;
    a.r[1] = r28;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.r[6] = 0u;
    a.r[7] = 0u;
    a.f[0] = f1;
    a.f[1] = 0.0;
    r3 = tc_call(rd32(rd32(param_1) + 0x14u), &a);
    r26 = r3;
    a.r[0] = param_1;
    a.r[1] = r31;
    r3 = tc_call(0x8032d988u, &a);
    r25 = r3;
    f2 = rdf64(0x80577cb8u);
    r5 = (u32)rd8(r30 + 0xb2u) & 7u;
    wr32(0x817fdf7cu, (u32)(s8)rd8(r30 + 0xa9u) ^ 0x80000000u);
    r24 = (ppc_cntlzw(r5 - 1u) >> 5u) & 0x7ffffffu;
    r23 = (ppc_cntlzw(r5 - 2u) >> 5u) & 0x7ffffffu;
    f30 = (f64)(f32)((f64)rdf32(0x80577cb0u) * (f64)(f32)(rdf64(0x817fdf78u) - f2));
    if (r24 != 0u || r23 != 0u) {
        r25 = r3 + 1u;
    }
    a.r[0] = 0x98u;
    a.r[1] = 0u;
    a.r[2] = (r25 << 1u) & 0xfffeu;
    (void)tc_call(0x80250b74u, &a);
    a.r[0] = param_1;
    a.r[1] = r30;
    r3 = tc_call(0x8032d990u, &a);
    f1 = tc_lastf();
    r4 = tc_lastr4();
    c0lt = (s32)r3 < 64;
    if (r3 == 0x40u) {
        f29 = (f64)rdf32(0x80577cb4u);
    } else {
        a.f[0] = (f64)(f32)(px_b2f((u64)((r25 - 1u) ^ 0x80000000u) | 0x4330000000000000ull) - rdf64(0x80577cb8u));
        f1 = tc_callf(0x8032d99cu, &a);
        r4 = tc_lastr4();
        f29 = f1;
    }
    r0 = (u32)rd16(r30) & 0x800u;
    c0lt = (s32)r0 < 1;
    if (r0 == 1u || !c0lt) {
        r25 = r25 - 1u;
        r30 = 0xffffffffu;
    } else if ((s32)r0 >= 0) {
        r25 = 0u;
        r30 = 1u;
    } else {
        r25 = r25 - 1u;
        r30 = 0xffffffffu;
    }
    if (r23 != 0u && r28 == 0u) {
        r0 = r25 ^ 0x80000000u;
        f2 = rdf64(0x80577cb8u);
        wr32(0x817fdf7cu, r0);
        f2 = (f64)(f32)(f29 * (f64)(f32)(px_b2f((u64)r0 | 0x4330000000000000ull) - f2));
        a.f[0] = f30;
        a.f[1] = f2;
        a.r[0] = param_1;
        a.r[1] = param_2;
        a.r[2] = param_3;
        a.r[3] = 0u;
        a.r[4] = r29;
        a.r[5] = param_2 + 0xa4u;
        a.r[6] = param_4;
        a.r[7] = param_5;
        f1 = tc_callf(0x8032d9b4u, &a);
        r4 = tc_lastr4();
        r25 = r25 + r30;
    }
    a.r[0] = r31;
    a.r[1] = r4;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.r[6] = 0u;
    a.r[7] = 0u;
    a.f[0] = f1;
    a.f[1] = 0.0;
    r3 = tc_call(r27, &a);
    f1 = tc_lastf();
    r4 = tc_lastr4();
    f31 = rdf64(0x80577cb8u);
    r17 = r3;
    while (r3 != 0u) {
        a.f[0] = f30;
        a.f[1] = (f64)(f32)(f29 * (f64)(f32)(px_b2f((u64)(r25 ^ 0x80000000u) | 0x4330000000000000ull) - f31));
        a.r[0] = param_1;
        a.r[1] = param_2;
        a.r[2] = param_3;
        a.r[3] = r3;
        a.r[4] = r29;
        a.r[5] = r3 + 0xacu;
        a.r[6] = param_4;
        a.r[7] = param_5;
        f1 = tc_callf(0x8032d9b4u, &a);
        a.r[0] = r31;
        a.r[1] = r17;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        r3 = tc_call(r26, &a);
        f1 = tc_lastf();
        r4 = tc_lastr4();
        r17 = r3;
        r25 = r25 + r30;
    }
    if (r24 != 0u) {
        a.r[0] = r31;
        a.r[1] = r4;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        r3 = tc_call(r27, &a);
        r0 = r25 ^ 0x80000000u;
        wr32(0x817fdf7cu, r0);
        a.f[0] = f30;
        a.f[1] = (f64)(f32)(f29 * (f64)(f32)(px_b2f((u64)r0 | 0x4330000000000000ull) - rdf64(0x80577cb8u)));
        a.r[0] = param_1;
        a.r[1] = param_2;
        a.r[2] = param_3;
        a.r[3] = r3;
        a.r[4] = r29;
        a.r[5] = r3 + 0xacu;
        a.r[6] = param_4;
        a.r[7] = param_5;
        (void)tc_call(0x8032d9b4u, &a);
    }
    if (r23 != 0u && r28 != 0u) {
        a.f[0] = f30;
        a.f[1] = (f64)(f32)(f29 * (f64)(f32)(px_b2f((u64)(r25 ^ 0x80000000u) | 0x4330000000000000ull) - rdf64(0x80577cb8u)));
        a.r[0] = param_1;
        a.r[1] = param_2;
        a.r[2] = param_3;
        a.r[3] = 0u;
        a.r[4] = r29;
        a.r[5] = param_2 + 0xa4u;
        a.r[6] = param_4;
        a.r[7] = param_5;
        (void)tc_call(0x8032d9b4u, &a);
    }
    (void)tc_call(0x8032ddf0u, &a);
    return;
}

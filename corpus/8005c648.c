#include "tc_rt.h"

u32 fn_8005c648(s32 param_1)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r29 = 0, r30 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    f1 = (f64)rdf32(0x80572430u);
    wr32((u32)param_1 + 0x18u, 0u);
    wr32((u32)param_1 + 0x24u, 0u);
    r3 = rd32(0x804b9dfcu);
    f1 = (f64)(f32)(f1 * (f64)rdf32(0x804b9e00u));
    if (((((0u - r3) | r3) >> 0x1fu) & 1u) != 0u) {
        a.f[0] = f1;
        a.r[0] = rd32(0x804b9dfcu);
        a.r[1] = 0x96u;
        (void)tc_call(0x802f7194u, &a);
    }
    if (rd32(0x805711a8u) == 0u) {
        a.r[0] = 0x803d29f8u;
        (void)tc_call(0x80097aacu, &a);
    }
    r3 = rd32(0x80571158u);
    wr32(0x8057115cu, r3);
    a.r[0] = r3;
    (void)tc_call(0x80071230u, &a);
    r3 = tc_call(0x800532c0u, &a);
    f1 = tc_lastf();
    a.r[0] = r3;
    a.r[1] = tc_lastr4();
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.f[0] = f1;
    r3 = tc_call(0x8005a0c8u, &a);
    r4 = r3;
    if (rd32(r3 + 0x10u) == 0u) {
        if (rd32(r3 + 0x20u) == 0u) {
            r3 = rd32(r3);
            a.r[0] = r3;
            a.r[1] = 0x2ecu;
            a.r[2] = rd32(r4 + 0xcu);
            a.r[3] = r4 + 0x18u;
            r3 = tc_call(0x80040cd8u, &a);
            r30 = r3;
        } else {
            r3 = r3 + 0x24u;
            a.r[0] = r3;
            a.r[1] = 0x20u;
            a.r[2] = 0x2ecu;
            r3 = tc_call(0x80094e80u, &a);
            r30 = r3;
        }
    } else {
        r3 = rd32(r3);
        a.r[0] = r3;
        a.r[1] = 0x2ecu;
        a.r[2] = rd32(r4 + 0xcu);
        a.r[3] = r4 + 0x18u;
        r3 = tc_call(0x80040db8u, &a);
        r30 = r3;
    }
    if (r3 != 0u) {
        r3 = r3;
        a.r[0] = r3;
        (void)tc_call(0x8005a000u, &a);
    }
    wr32((u32)param_1 + 0x14u, r30);
    a.r[0] = r30;
    (void)tc_call(0x8005a0d4u, &a);
    if (rd32(0x805711a8u) != 0u) {
        a.r[0] = 0x803d29f8u;
        (void)tc_call(0x80097b64u, &a);
        a.r[0] = rd32(0x805706e8u);
        a.r[1] = (u32)rd8(0x80492c5du);
        (void)tc_call(0x80074fd4u, &a);
    } else {
        a.r[0] = rd32(0x805706e8u);
        a.r[1] = 0u;
        (void)tc_call(0x80074fd4u, &a);
    }
    a.r[0] = rd32((u32)param_1 + 0x14u);
    a.r[1] = rd32(0x8057115cu);
    (void)tc_call(0x8005c40cu, &a);
    r3 = tc_call(0x8003c20cu, &a);
    if (r3 != 0u) {
        r0 = 1u;
        wr32(0x80571124u, 1u);
    } else {
        r0 = 0u;
        wr32(0x80571124u, 0u);
    }
    r0 = (0u - r0) | r0;
    a.r[0] = (r0 >> 0x1fu) & 1u;
    (void)tc_call(0x80035b6cu, &a);
    a.f[0] = (f64)rdf32(0x80572434u);
    a.r[0] = 0u;
    a.r[1] = 6u;
    (void)tc_call(0x800523b0u, &a);
    wr32(0x805710d8u, 0u);
    wr32((u32)param_1 + 0xcu, 0u);
    r29 = 0u;
    r4 = 0u;
    wr32((u32)param_1 + 0x10u, 0x12u);
    wr32((u32)param_1 + 0x28u, 0u);
    ctr = 0xau;
    for (;;) {
        r3 = r4 - 0x7fc34570u;
        if (rd32(r3 + 0x73cu) == 0u) break;
        r29 = r29 + 1u;
        r4 = r4 + 0x740u;
        ctr = ctr - 1u;
        if (ctr == 0u) {
            r0 = 0u;
            wr32((u32)param_1 + 0x30u, r0);
            return 1u;
        }
    }
    wr32(r3 + 0x73cu, 1u);
    a.r[0] = r3;
    (void)tc_call(0x800d3704u, &a);
    r0 = (r29 * 0x740u) - 0x7fc34570u;
    wr32((u32)param_1 + 0x30u, r0);
    return 1u;
}

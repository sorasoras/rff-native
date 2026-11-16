#include "tc_rt.h"

u32 fn_8005e7b0(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    a.r[0] = (u32)param_1;
    a.r[1] = 0x100u;
    (void)tc_call(0x8005df40u, &a);
    a.r[0] = (u32)param_1;
    a.r[1] = 0x100u;
    (void)tc_call(0x8005df48u, &a);
    if (rd32(0x805706d0u) != 7u) {
        a.r[0] = (rd32(0x80471a18u) * 0x4150u) - 0x7fb92738u;
        (void)tc_call(0x801e6900u, &a);
    } else {
        r5 = (u32)rd8(0x805724e5u);
        r4 = (u32)rd8(0x805724e6u);
        r0 = (u32)rd8(0x805724e7u);
        wr8(0x817fdfe8u, rd8(0x805724e4u));
        f1 = (f64)rdf32(0x80572434u);
        wr8(0x817fdfe9u, (u8)r5);
        wr8(0x817fdfeau, (u8)r4);
        wr8(0x817fdfebu, (u8)r0);
        a.f[0] = f1;
        a.r[0] = 0x817fdfe8u;
        (void)tc_call(0x80051e9cu, &a);
        a.r[0] = rd32(0x804863d8u);
        (void)tc_call(0x80066ea4u, &a);
        a.r[0] = (rd32(0x80471a18u) * 0x4150u) - 0x7fb92738u;
        (void)tc_call(0x801e666cu, &a);
        r4 = (u32)rd8(0x805710c0u);
        wr32(0x805710a0u, 1u);
        f1 = (f64)rdf32(0x80572434u);
        r0 = 0xdu;
        if (r4 >= 0xdu) {
            r0 = r4;
        }
        a.f[0] = f1;
        a.r[0] = 5u;
        a.r[1] = r0 & 0xffu;
        (void)tc_call(0x800523b0u, &a);
        r3 = rd32(0x80571158u);
        wr32(0x80571160u, 0u);
        wr32(0x8057115cu, r3);
        if (rd32((u32)param_1 + 0x20u) != 0u) {
            r0 = r3 * 0xcu;
            f1 = (f64)rdf32(0x80572430u);
            r4 = rd32(0x8057116cu);
            wrf32d(0x817fdff4u, f1);
            r6 = r0 - 0x7fcc9960u;
            f3 = (f64)rdf32(r0 - 0x7fcc9960u);
            wrf32d(0x817fdfecu, f1);
            f0 = (f64)rdf32(r6 + 8u);
            wrf32d(0x817fdff0u, f1);
            f2 = (f64)rdf32(r6 + 4u);
            wrf32d(0x817fdfecu, f3);
            wrf32d(0x817fdff0u, f2);
            wrf32d(0x817fdff4u, f0);
            a.r[0] = r3;
            a.r[1] = r4;
            a.r[2] = 0x817fdfecu;
            (void)tc_call(0x80073fe4u, &a);
        } else {
            a.r[0] = r3;
            a.r[1] = rd32(0x8057116cu);
            a.r[2] = 0u;
            (void)tc_call(0x80073fe4u, &a);
        }
        r3 = rd32((u32)param_1 + 0x14u);
        wr32((u32)param_1 + 0x20u, 0u);
        a.r[0] = r3;
        a.r[1] = rd32(0x8057115cu);
        (void)tc_call(0x8005c40cu, &a);
        a.r[0] = (u32)param_1;
        a.r[1] = 0x151u;
        (void)tc_call(0x8005df40u, &a);
        a.r[0] = (u32)param_1;
        a.r[1] = 0x151u;
        (void)tc_call(0x8005df48u, &a);
        wr32((u32)param_1 + 0xcu, 0u);
    }
    return 1u;
}

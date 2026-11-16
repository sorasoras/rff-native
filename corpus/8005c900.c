#include "tc_rt.h"

u32 fn_8005c900(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r30 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
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
        } else {
            r3 = r3 + 0x24u;
            a.r[0] = r3;
            a.r[1] = 0x20u;
            a.r[2] = 0x2ecu;
            r3 = tc_call(0x80094e80u, &a);
        }
        r30 = r3;
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
    if (rd32((u32)param_1 + 0x10u) == 0x12u) {
        wr32((u32)param_1 + 0xcu, 0u);
    } else {
        if (rd32(0x805711ecu) == 0u) {
            r3 = rd32(0x804863d8u);
            wr32(r3 + 0x9cu, rd32(r3 + 0x9cu) & 0xbfffffffu);
        }
        r0 = rd32((u32)param_1 + 0x10u);
        wr32((u32)param_1 + 0xcu, r0);
        if (r0 == 0x10u) {
            r3 = tc_call(0x80198e78u, &a);
            f1 = tc_lastf();
            if (r3 == 0u) {
                wr32((u32)param_1 + 0xcu, 0u);
            } else {
                for (;;) {
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    a.f[3] = 0.0;
                    a.f[4] = 0.0;
                    a.f[5] = 0.0;
                    a.f[6] = 0.0;
                    a.f[7] = 0.0;
                    a.r[0] = 0x803d29f8u;
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    a.r[6] = 0u;
                    a.r[7] = 0u;
                    r3 = tc_call(0x80097c5cu, &a);
                    if (r3 == 0u) break;
                    a.r[0] = (u32)param_1;
                    a.r[1] = 0x4000u;
                    f1 = tc_callf(0x8005df40u, &a);
                }
                a.r[0] = (u32)param_1;
                a.r[1] = 0x4000u;
                (void)tc_call(0x8005df40u, &a);
                a.r[0] = rd32(0x804863d8u);
                a.r[1] = 1u;
                (void)tc_call(0x800c6440u, &a);
                a.r[0] = (rd32(0x805710e0u) * 0x6d0u) - 0x7fc2e738u;
                a.r[1] = 4u;
                (void)tc_call(0x800564f8u, &a);
                a.r[0] = 0x80486da8u;
                (void)tc_call(0x800b8708u, &a);
                wr32(0x8057118cu, rd32(0x8057118cu) & 0xfffffdffu);
            }
        }
    }
    f1 = (f64)rdf32(0x80572434u);
    wr32((u32)param_1 + 0x10u, 0x12u);
    a.f[0] = f1;
    a.r[0] = 4u;
    a.r[1] = 0xcu;
    (void)tc_call(0x800523b0u, &a);
    r3 = rd32((u32)param_1 + 0x14u);
    wr32((u32)param_1 + 0x24u, 0u);
    a.r[0] = r3;
    a.r[1] = rd32(0x805706e8u);
    (void)tc_call(0x8005c40cu, &a);
    if ((rd32(0x8057118cu) & 0x40u) != 0u) {
        a.r[0] = 0x80486da8u;
        (void)tc_call(0x800b8754u, &a);
        a.r[0] = 0x80486da8u;
        (void)tc_call(0x800b872cu, &a);
    }
    return 1u;
}

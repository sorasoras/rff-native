#include "tc_rt.h"

u32 fn_801ca480(s32 param_1)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r6 = 0, r7 = 0, r29 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    r31 = 1u;
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff0u, 0u);
    r0 = rd32((u32)param_1 + 0x4cu);
    c0lt = (s32)r0 < 1;
    if (r0 == 1u) {
        if (rd32(0x805706d0u) == 7u) {
            f0 = (f64)rdf32(0x80575e2cu);
            r3 = rd32(0x804863d8u);
            wrf32d(0x817fdfe0u, f0);
            wrf32d(0x817fdfdcu, f0);
            wrf32d(0x817fdfd8u, f0);
            a.r[0] = r3;
            a.r[1] = 0u;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.f[0] = 0.0;
            a.f[1] = 0.0;
            r3 = tc_call(rd32(rd32(r3) + 0x28u), &a);
            a.r[0] = 0x817fdfd8u;
            a.r[1] = r3;
            r3 = tc_call(0x801b0cecu, &a);
            a.r[0] = 2u;
            a.r[1] = 0x4bu;
            a.r[2] = r3;
            f1 = tc_callf(0x800a6dccu, &a);
            r3 = rd32((u32)param_1 + 0x44u);
            a.r[0] = r3;
            a.r[1] = tc_lastr4();
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            r3 = tc_call(rd32(rd32(r3) + 0x28u), &a);
            r4 = rd32(0x804863d8u);
            f2 = (f64)rdf32(r3);
            wrf32d(r4 + 0x84u, f2);
            f1 = (f64)rdf32(r3 + 4u);
            wrf32d(r4 + 0x88u, f1);
            f0 = (f64)rdf32(r3 + 8u);
            wrf32d(r4 + 0x8cu, f0);
            wrf32d(r4 + 4u, f2);
            wrf32d(r4 + 8u, f1);
            wrf32d(r4 + 0xcu, f0);
            r3 = rd32((u32)param_1 + 0x44u);
            r29 = rd32(0x804863d8u);
            a.r[0] = r3;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.f[0] = f1;
            a.f[1] = f2;
            f1 = tc_callf(rd32(rd32(r3) + 0x2cu), &a);
            a.r[0] = r29;
            a.r[1] = tc_lastr4();
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            (void)tc_call(rd32(rd32(r29) + 0x24u), &a);
            a.r[0] = rd32(0x804863d8u);
            (void)tc_call(0x800c42fcu, &a);
            a.r[0] = rd32((u32)param_1 + 0x44u);
            (void)tc_call(0x80182eacu, &a);
            r7 = rd32((u32)param_1 + 0x44u);
            f1 = (f64)rdf32(0x80575e28u);
            wr32(r7 + 0xacu, 1u);
            wrf32d(r7 + 0xb0u, (f64)rdf32(0x804890d4u));
            wrf32d(r7 + 0xb4u, (f64)rdf32(0x804890d8u));
            wrf32d(r7 + 0xb8u, (f64)rdf32(0x804890dcu));
            a.f[0] = f1;
            a.r[0] = 0u;
            a.r[1] = 0xcu;
            (void)tc_call(0x800523b0u, &a);
            wr32((u32)param_1 + 0x4cu, 2u);
            f1 = (f64)rdf32(0x80575e30u);
            r6 = rd32(0x805710e0u) * 0x6d0u;
            r3 = rd32(0x80571140u);
            f0 = (f64)rdf32(0x80575e34u);
            wr32(0x80486da8u, rd32(0x80486da8u) & 0xffffffe7u);
            r4 = r6 - 0x7fc2e738u;
            wrf32d(r4 + 0x1d8u, f1);
            wrf32d(r4 + 0x1d0u, f0);
            if (r3 != 0u) {
                a.r[0] = r3;
                a.r[1] = 0u;
                a.r[2] = 0x803d18c8u;
                a.r[3] = r6;
                a.r[4] = 0u;
                a.f[0] = f1;
                a.f[1] = 0.0;
                (void)tc_call(rd32(rd32(r3) + 0x194u), &a);
            }
        }
    } else if (!c0lt) {
        if ((s32)r0 < 3 && rd32(0x805706d0u) == 7u) {
            r31 = 0u;
            wr32((u32)param_1 + 0x4cu, 0u);
        }
    } else if ((s32)r0 >= 0) {
        a.f[0] = (f64)rdf32(0x80575e28u);
        a.r[0] = 1u;
        a.r[1] = 0xcu;
        (void)tc_call(0x800523b0u, &a);
        wr32((u32)param_1 + 0x4cu, 1u);
        a.r[0] = rd32(0x804863d8u);
        (void)tc_call(0x800c4b50u, &a);
    }
    return r31;
}

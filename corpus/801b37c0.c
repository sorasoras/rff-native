#include "tc_rt.h"

u32 fn_801b37c0(s32 param_1)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r7 = 0, r29 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0;
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
            f0 = (f64)rdf32(0x80575c34u);
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
            a.f[2] = 0.0;
            r3 = tc_call(rd32(rd32(r3) + 0x28u), &a);
            a.r[0] = 0x817fdfd8u;
            a.r[1] = r3;
            r3 = tc_call(0x801b0cecu, &a);
            r29 = r3;
            a.r[0] = r3;
            (void)tc_call(0x801b0fd8u, &a);
            a.r[0] = 2u;
            a.r[1] = 0x4cu;
            a.r[2] = r29;
            (void)tc_call(0x800a6dccu, &a);
            r3 = rd32(0x804863d8u);
            f3 = (f64)rdf32(0x817fdfd8u);
            f1 = (f64)rdf32(0x80575c34u);
            wrf32d(r3 + 0x84u, f3);
            f2 = (f64)rdf32(0x817fdfdcu);
            wrf32d(r3 + 0x88u, f2);
            f0 = (f64)rdf32(0x817fdfe0u);
            wrf32d(r3 + 0x8cu, f0);
            wrf32d(r3 + 4u, f3);
            wrf32d(r3 + 8u, f2);
            wrf32d(r3 + 0xcu, f0);
            r3 = rd32(0x804863d8u);
            a.r[0] = r3;
            a.r[1] = tc_lastr4();
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.f[0] = f1;
            a.f[1] = f2;
            a.f[2] = f3;
            (void)tc_call(rd32(rd32(r3) + 0x24u), &a);
            a.r[0] = rd32(0x804863d8u);
            (void)tc_call(0x800c4b50u, &a);
            a.r[0] = rd32(0x804863d8u);
            (void)tc_call(0x800c4394u, &a);
            r7 = rd32((u32)param_1 + 0x44u);
            f1 = (f64)rdf32(0x80575c30u);
            wr32(r7 + 0xacu, 0u);
            wrf32d(r7 + 0xb0u, (f64)rdf32(0x804890d4u));
            wrf32d(r7 + 0xb4u, (f64)rdf32(0x804890d8u));
            wrf32d(r7 + 0xb8u, (f64)rdf32(0x804890dcu));
            a.f[0] = f1;
            a.r[0] = 0u;
            a.r[1] = 0xcu;
            (void)tc_call(0x800523b0u, &a);
            wr32((u32)param_1 + 0x4cu, 2u);
            f0 = (f64)rdf32(0x803365b0u);
            r3 = rd32(0x80571140u);
            r7 = rd32(0x805710e0u) * 0x6d0u;
            wr32(0x80486da8u, 0x7fu);
            f1 = (f64)rdf32(0x803365a8u);
            r4 = r7 - 0x7fc2e738u;
            wrf32d(r4 + 0x1d8u, f0);
            wrf32d(r4 + 0x1d0u, f1);
            if (r3 != 0u) {
                f2 = (f64)(f32)((f64)rdf32(0x817fdfd8u) + (f64)rdf32(0x80575c38u));
                wrf32d(0x817fdfd8u, f2);
                wrf32d(r3 + 0x84u, f2);
                f1 = (f64)rdf32(0x817fdfdcu);
                wrf32d(r3 + 0x88u, f1);
                f0 = (f64)rdf32(0x817fdfe0u);
                wrf32d(r3 + 0x8cu, f0);
                wrf32d(r3 + 4u, f2);
                wrf32d(r3 + 8u, f1);
                wrf32d(r3 + 0xcu, f0);
                a.r[0] = r3;
                a.r[1] = r4;
                a.r[2] = 0x803d18c8u;
                a.r[3] = 0x80330000u;
                a.r[4] = r7;
                a.f[0] = f1;
                a.f[1] = f2;
                a.f[2] = 0.0;
                (void)tc_call(rd32(rd32(r3) + 0x198u), &a);
            }
        }
    } else if (!c0lt) {
        if ((s32)r0 < 3 && rd32(0x805706d0u) == 7u) {
            r31 = 0u;
            wr32((u32)param_1 + 0x4cu, 0u);
        }
    } else if ((s32)r0 >= 0) {
        a.f[0] = (f64)rdf32(0x80575c30u);
        a.r[0] = 1u;
        a.r[1] = 0xcu;
        (void)tc_call(0x800523b0u, &a);
        wr32((u32)param_1 + 0x4cu, 1u);
    }
    return r31;
}

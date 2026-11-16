#include "tc_rt.h"

u32 fn_8018c1ec(s32 param_1)
{
    u32 r3 = 0, r4 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    r4 = rd32(0x804863d8u);
    wr32(r4 + 0x9cu, rd32(r4 + 0x9cu) & 0xbfffffffu);
    wr32((u32)param_1 + 0x5cu, rd32((u32)param_1 + 0x5cu) + 1u);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x8018cf24u, &a);
    f31 = (f64)rdf32(0x805752d8u);
    r3 = tc_call(0x8018cb38u, &a);
    r4 = tc_lastr4();
    r31 = r3;
    if (r3 != 3u) {
        if (r3 == 0u) {
            a.r[0] = (u32)param_1;
            a.r[1] = 0u;
            a.r[2] = 1u;
            a.r[3] = 0u;
            (void)tc_call(0x8018d1e8u, &a);
            r4 = tc_lastr4();
        }
    } else {
        a.r[0] = (u32)param_1;
        r3 = tc_call(0x8018ce28u, &a);
        r4 = tc_lastr4();
        if (r3 != 0u) {
            return 1u;
        }
    }
    wrf32d((u32)param_1 + 0x70u, (f64)(f32)((f64)rdf32((u32)param_1 + 0x70u) * (f64)rdf32(0x805708a8u)));
    if (r31 != 2u) {
        if (r31 == 1u) {
            f0 = (f64)rdf32((u32)param_1 + 0x54u);
            f1 = ppc_fmadds((f64)rdf32(0x805752f8u), (f64)rdf32(0x805708acu), (f64)rdf32((u32)param_1 + 0x74u));
            wr32((u32)param_1 + 0x78u, 1u);
            f31 = (f64)(f32)(f31 - f0);
            wrf32d((u32)param_1 + 0x74u, f1);
        }
    } else {
        f0 = (f64)rdf32((u32)param_1 + 0x54u);
        f1 = ppc_fnmsubs((f64)rdf32(0x805752f8u), (f64)rdf32(0x805708acu), (f64)rdf32((u32)param_1 + 0x74u));
        wr32((u32)param_1 + 0x78u, 1u);
        f31 = (f64)(f32)(f31 + f0);
        wrf32d((u32)param_1 + 0x74u, f1);
    }
    f2 = (f64)rdf32(0x805752fcu);
    f1 = (f64)rdf32((u32)param_1 + 0x70u);
    f0 = -f2;
    if (!(f1 < f0)) {
        if (!(f1 > f2)) {
            f1 = ppc_fabs(f1);
            f0 = (f64)rdf32(0x80575300u);
            f1 = (f64)(f32)f1;
            if ((f1 < f0) || (f1 == f0)) {
                wrf32d((u32)param_1 + 0x70u, (f64)rdf32(0x805752d8u));
            }
        } else {
            wrf32d((u32)param_1 + 0x70u, f2);
        }
    } else {
        wrf32d((u32)param_1 + 0x70u, f0);
    }
    f3 = (f64)rdf32((u32)param_1 + 0x74u);
    if (!((f64)rdf32(0x805752ecu) < f3)) {
        f0 = (f64)rdf32(0x805752f4u);
        if ((f0 > f3) || (f0 == f3)) {
            f3 = (f64)(f32)((f64)rdf32(0x805752f0u) + f3);
        }
    } else {
        f3 = (f64)(f32)(f3 - (f64)rdf32(0x805752f0u));
    }
    f1 = (f64)rdf32((u32)param_1 + 0x6cu);
    f2 = (f64)rdf32(0x805752ecu);
    wrf32d((u32)param_1 + 0x74u, f3);
    f1 = (f64)(f32)(f1 + (f64)(f32)f3);
    r3 = rd32(0x804863d8u);
    if (!(f2 < f1)) {
        f0 = (f64)rdf32(0x805752f4u);
        if ((f0 > f1) || (f0 == f1)) {
            f1 = (f64)(f32)((f64)rdf32(0x805752f0u) + f1);
        }
    } else {
        f1 = (f64)(f32)(f1 - (f64)rdf32(0x805752f0u));
    }
    a.r[0] = r3;
    a.r[1] = r4;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.f[0] = f1;
    a.f[1] = f2;
    a.f[2] = f3;
    (void)tc_call(rd32(rd32(r3) + 0x24u), &a);
    if (r31 != 0u) {
        a.r[0] = (u32)param_1;
        a.r[1] = 0u;
        a.r[2] = 1u;
        a.r[3] = 1u;
        (void)tc_call(0x8018d1e8u, &a);
    }
    a.f[0] = f31;
    a.r[0] = (u32)param_1;
    (void)tc_call(0x8018ccb0u, &a);
    if (rd32((u32)param_1 + 0x60u) != 0xffffffffu) {
        r4 = rd32((u32)param_1 + 0x5cu);
        r3 = rd32((u32)param_1 + 0x90u);
        if ((r4 - ((u32)ppc_divw((s32)r4, (s32)r3) * r3)) == 0u) {
            a.r[0] = (u32)param_1;
            (void)tc_call(0x8018ccecu, &a);
        }
    } else {
        a.r[0] = (u32)param_1;
        a.r[1] = 2u;
        a.r[2] = 0u;
        a.r[3] = 0u;
        (void)tc_call(0x8018d1e8u, &a);
        a.r[0] = (u32)param_1;
        r3 = tc_call(0x8018ceb4u, &a);
        a.r[0] = (u32)param_1;
        a.r[1] = r3;
        (void)tc_call(0x8018d734u, &a);
        a.r[0] = (u32)param_1;
        (void)tc_call(0x8018d1c8u, &a);
    }
    a.r[0] = (u32)param_1;
    (void)tc_call(0x8018cfacu, &a);
    return 1u;
}

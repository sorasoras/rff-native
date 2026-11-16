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

void fn_800be544(s32 param_1)
{
    u32 c0eq = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r29 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf60u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    r29 = 0x2e8u;
    r5 = rd32(0x804863d8u);
    r4 = rd32(r5 + 0xa48u);
    if (r4 == 0u) {
        r0 = 0x2e8u;
    } else {
        r0 = rd32(r4 + 0x74u);
    }
    if (r0 == 0x2e8u) {
        r0 = rd32((u32)param_1 + 0x1f30u);
        if (r0 != 0x2e8u) {
            r29 = r0;
        }
    } else {
        r4 = rd32(r5 + 0xa48u);
        if (r4 == 0u) {
            r29 = 0x2e8u;
        } else {
            r29 = rd32(r4 + 0x74u);
        }
    }
    if (r29 != 0x2e8u) {
        r0 = rd32((u32)param_1 + 0x10u);
        f0 = rdf64(0x80572e58u) * (f64)rdf32((u32)param_1 + 0x1db4u);
        wr8((u32)param_1 + 0x1e04u, 0x58u);
        c0eq = r0 == 0u;
        wr8((u32)param_1 + 0x1e05u, 0x28u);
        f0 = px_ctiw(f0, ppc_fctiwz(f0));
        wr8((u32)param_1 + 0x1e06u, 0xcu);
        wr8((u32)param_1 + 0x1e08u, 0x58u);
        wrf64(0x817fdfe8u, f0);
        r0 = rd32(0x817fdfecu);
        wr8((u32)param_1 + 0x1e09u, 0x28u);
        wr8((u32)param_1 + 0x1e07u, (u8)r0);
        wr8((u32)param_1 + 0x1e0au, 0xcu);
        wr8((u32)param_1 + 0x1e0bu, (u8)r0);
        wr8((u32)param_1 + 0x1e0cu, 0x58u);
        wr8((u32)param_1 + 0x1e0du, 0x28u);
        wr8((u32)param_1 + 0x1e0eu, 0xcu);
        wr8((u32)param_1 + 0x1e0fu, (u8)r0);
        wr8((u32)param_1 + 0x1e10u, 0x58u);
        wr8((u32)param_1 + 0x1e11u, 0x28u);
        wr8((u32)param_1 + 0x1e12u, 0xcu);
        wr8((u32)param_1 + 0x1e13u, (u8)r0);
        if (c0eq) {
            a.r[0] = (u32)param_1 + 0x1db8u;
            (void)tc_call(0x8005250cu, &a);
            f1 = (f64)rdf32((u32)param_1 + 0x1db4u);
            f0 = (f64)rdf32(0x80572db8u);
            wr32((u32)param_1 + 0x1de0u, 1u);
            if ((f1 > f0) || (f1 == f0)) {
                a.r[0] = r29;
                r3 = tc_call(0x800cd694u, &a);
                a.r[0] = 0x817fdf68u;
                a.r[1] = r3;
                (void)tc_call(0x8025e7c0u, &a);
                r3 = tc_call(0x80052c30u, &a);
                a.r[0] = r3;
                a.r[1] = 0x817fdf68u;
                f1 = tc_callf(0x80079bf8u, &a);
                a.f[0] = f1;
                r3 = tc_call(0x802558e4u, &a);
                wr32(0x817fdfecu, r3);
                f1 = rdf64(0x80572d88u);
                wr32(0x817fdfe8u, 0x43300000u);
                a.f[0] = ppc_fnmsubs((f64)rdf32(0x80572e60u), (f64)(f32)((f64)(f32)(rdf64(0x817fdfe8u) - f1) * (f64)rdf32(0x80572e14u)), (f64)rdf32(0x80572d2cu));
                a.f[1] = (f64)(f32)((f64)rdf32(0x80572e64u) + (f64)rdf32((u32)param_1 + 0x1e34u));
                a.f[2] = (f64)rdf32(0x80572dc0u);
                a.f[3] = (f64)rdf32(0x80572e68u);
                a.r[0] = 0x817fdf68u;
                a.r[1] = 0u;
                (void)tc_call(0x80052a08u, &a);
                r3 = rd32(rd32(0x804863d8u) + 0xa48u);
                if (r3 == 0u) {
                    r0 = 0x2e8u;
                } else {
                    r0 = rd32(r3 + 0x74u);
                }
                if (r0 != 0x2e8u) {
                    a.r[0] = r29;
                    r3 = tc_call(0x800cd704u, &a);
                    if ((r3 & 0xffu) != 1u) {
                        r31 = (u32)rd8(rd32(rd32(0x804863d8u) + 0xa48u) + 0x79u);
                        if ((s32)r31 < 10) {
                            f2 = (f64)rdf32(0x80572ce4u);
                            f3 = (f64)rdf32((u32)param_1 + 8u);
                            f1 = ppc_fmadds((f64)rdf32((u32)param_1 + 0x1e3cu), f3, (f64)(f32)((f64)rdf32((u32)param_1 + 0x1e30u) + (f64)rdf32((u32)param_1 + 0x1e44u)));
                            r0 = (u32)((s32)ppc_mulhw(1717986919, (s32)r31) >> 2);
                            f3 = (f64)(f32)((f64)rdf32(0x80572d30u) * f3);
                            f4 = (f64)(f32)((f64)rdf32(0x80572ca4u) + f1);
                            r0 = r0 + ((r0 >> 0x1fu) & 1u);
                            r0 = r0 * 0xau;
                            f0 = (f64)(f32)((f64)rdf32(0x80572e40u) + (f64)rdf32((u32)param_1 + 0x1e34u));
                            r0 = r31 - r0;
                            wrf32d((u32)param_1 + 0x1e5cu, f3);
                            wrf32d((u32)param_1 + 0x1e58u, f2);
                            wrf32d((u32)param_1 + 0x1e4cu, f4);
                            wrf32d((u32)param_1 + 0x1e50u, f0);
                            a.r[0] = (u32)param_1;
                            a.r[1] = (u32)param_1 + 0x1e48u;
                            a.r[2] = (u32)(s8)r0;
                            (void)tc_call(0x800bac2cu, &a);
                            a.r[0] = (u32)param_1 + 0x1e48u;
                            (void)tc_call(0x8005250cu, &a);
                            wr32((u32)param_1 + 0x1e70u, 1u);
                        } else {
                            f4 = (f64)rdf32((u32)param_1 + 8u);
                            f5 = (f64)rdf32(0x80572d30u);
                            r0 = (u32)((s32)ppc_mulhw(1717986919, (s32)r31) >> 2);
                            f2 = (f64)(f32)((f64)rdf32(0x80572e40u) + (f64)rdf32((u32)param_1 + 0x1e34u));
                            r0 = r0 + ((r0 >> 0x1fu) & 1u);
                            r0 = r0 * 0xau;
                            f1 = ppc_fmadds(f5, f4, ppc_fmadds((f64)rdf32((u32)param_1 + 0x1e3cu), f4, (f64)(f32)((f64)rdf32((u32)param_1 + 0x1e30u) + (f64)rdf32((u32)param_1 + 0x1e44u))));
                            f0 = (f64)rdf32(0x80572ca4u);
                            r0 = r31 - r0;
                            wrf32d((u32)param_1 + 0x1e58u, (f64)rdf32(0x80572ce4u));
                            f0 = (f64)(f32)(f0 + f1);
                            wrf32d((u32)param_1 + 0x1e5cu, (f64)(f32)(f5 * f4));
                            wrf32d((u32)param_1 + 0x1e50u, f2);
                            wrf32d((u32)param_1 + 0x1e4cu, f0);
                            a.r[0] = (u32)param_1;
                            a.r[1] = (u32)param_1 + 0x1e48u;
                            a.r[2] = (u32)(s8)r0;
                            (void)tc_call(0x800bac2cu, &a);
                            a.r[0] = (u32)param_1 + 0x1e48u;
                            (void)tc_call(0x8005250cu, &a);
                            f4 = (f64)rdf32(0x80572ce4u);
                            f2 = (f64)rdf32((u32)param_1 + 8u);
                            r0 = (u32)((s32)ppc_mulhw(1717986919, (s32)r31) >> 2);
                            f5 = (f64)(f32)((f64)rdf32(0x80572d30u) * f2);
                            f0 = (f64)(f32)((f64)rdf32(0x80572ca4u) + ppc_fmadds((f64)rdf32((u32)param_1 + 0x1e3cu), f2, (f64)(f32)((f64)rdf32((u32)param_1 + 0x1e30u) + (f64)rdf32((u32)param_1 + 0x1e44u))));
                            r0 = r0 + ((r0 >> 0x1fu) & 1u);
                            f1 = (f64)(f32)((f64)rdf32(0x80572e40u) + (f64)rdf32((u32)param_1 + 0x1e34u));
                            wr32((u32)param_1 + 0x1e70u, 1u);
                            wrf32d((u32)param_1 + 0x1ed0u, f5);
                            wrf32d((u32)param_1 + 0x1eccu, f4);
                            wrf32d((u32)param_1 + 0x1ec0u, f0);
                            wrf32d((u32)param_1 + 0x1ec4u, f1);
                            a.r[0] = (u32)param_1;
                            a.r[1] = (u32)param_1 + 0x1ebcu;
                            a.r[2] = (u32)(s8)r0;
                            (void)tc_call(0x800bac2cu, &a);
                            a.r[0] = (u32)param_1 + 0x1ebcu;
                            (void)tc_call(0x8005250cu, &a);
                            wr32((u32)param_1 + 0x1ee4u, 1u);
                        }
                    }
                }
            }
        }
    }
    return;
}

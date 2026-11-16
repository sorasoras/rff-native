#include "tc_rt.h"

u32 fn_801ac088(s32 param_1, u32 param_2)
{
    u32 r0 = 0, r3 = 0, r5 = 0, r6 = 0;
    f64 f0 = 0.0, f1 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf90u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdfe8u, 0u);
    if (rd32((u32)param_1 + 0xecu) == 0u) {
        r3 = rd32(0x804863d8u);
        a.r[0] = r3;
        a.r[1] = param_2;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.f[0] = 0.0;
        r3 = tc_call(rd32(rd32(r3) + 0x28u), &a);
        r0 = rd32(r3 + 4u);
        wr32(0x817fdfd4u, rd32(r3));
        wr32(0x817fdfd8u, r0);
        wr32(0x817fdfdcu, rd32(r3 + 8u));
        a.r[0] = param_2;
        a.r[1] = 0x817fdfd4u;
        a.r[2] = 0x804dc8b0u;
        f1 = tc_callf(0x801c3248u, &a);
        f31 = (f64)(f32)(f1 * (f64)rdf32(0x80575ac8u));
        a.r[0] = param_2;
        a.r[1] = tc_lastr4();
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.f[0] = f1;
        f1 = tc_callf(rd32(rd32(param_2) + 0x2cu), &a);
        f31 = (f64)(f32)(f31 + f1);
        a.r[0] = param_2;
        a.r[1] = tc_lastr4();
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.f[0] = f31;
        (void)tc_call(rd32(rd32(param_2) + 0x24u), &a);
        f0 = (f64)rdf32(0x80575accu);
        f1 = (f64)rdf32(rd32(param_2 + 0x70u) + 0x54u);
        if ((f1 > f0) || (f1 == f0)) {
            a.r[0] = 0x804b9da0u;
            a.r[1] = 0x2456u;
            f1 = tc_callf(0x8010a75cu, &a);
            a.r[0] = param_2;
            a.r[1] = tc_lastr4();
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.f[0] = f1;
            r3 = tc_call(rd32(rd32(param_2) + 0x28u), &a);
            r0 = rd32(r3 + 4u);
            f0 = (f64)rdf32(0x80575a50u);
            wr32(0x817fdfc8u, rd32(r3));
            wr32(0x817fdfccu, r0);
            wr32(0x817fdfd0u, rd32(r3 + 8u));
            wrf32d(0x817fdfc4u, f0);
            wrf32d(0x817fdfc0u, f0);
            wrf32d(0x817fdfbcu, f0);
            a.r[0] = param_2;
            a.r[1] = 0x817fdfbcu;
            (void)tc_call(0x801c3208u, &a);
            f1 = (f64)rdf32(0x80575ac4u);
            r5 = rd32(0x804890f0u);
            r0 = rd32(0x804890f4u);
            wr32(0x817fdf98u, rd32(0x804890ecu));
            wr32(0x817fdf9cu, r5);
            wr32(0x817fdfa0u, r0);
            a.f[0] = f1;
            a.r[0] = 0x817fdf98u;
            a.r[1] = 0x817fdf98u;
            (void)tc_call(0x802343c8u, &a);
            r5 = rd32(0x817fdfc0u);
            r0 = rd32(0x817fdfc4u);
            wr32(0x817fdfa4u, rd32(0x817fdfbcu));
            f1 = (f64)rdf32(0x80575ad0u);
            wr32(0x817fdfa8u, r5);
            wr32(0x817fdfacu, r0);
            a.f[0] = f1;
            a.r[0] = 0x817fdfa4u;
            a.r[1] = 0x817fdfa4u;
            (void)tc_call(0x802343c8u, &a);
            r6 = rd32(0x817fdfa8u);
            r0 = rd32(0x817fdfacu);
            wr32(0x817fdfb0u, rd32(0x817fdfa4u));
            wr32(0x817fdfb4u, r6);
            wr32(0x817fdfb8u, r0);
            a.r[0] = 0x817fdfb0u;
            a.r[1] = 0x817fdf98u;
            a.r[2] = 0x817fdfb0u;
            (void)tc_call(0x80234380u, &a);
            a.r[0] = 0x817fdfc8u;
            a.r[1] = 0x817fdfb0u;
            a.r[2] = 0x817fdfc8u;
            (void)tc_call(0x80234380u, &a);
            r3 = tc_call(0x801c151cu, &a);
            if (r3 != 0u) {
                a.r[0] = r3;
                a.r[1] = 0x817fdfc8u;
                a.r[2] = 0x817fdfbcu;
                (void)tc_call(0x801c15f4u, &a);
            }
            wr32((u32)param_1 + 0xecu, rd32((u32)param_1 + 0xecu) + 1u);
        }
    }
    return (ppc_cntlzw(rd32(param_2 + 0x110u)) >> 5u) & 0x7ffffffu;
}

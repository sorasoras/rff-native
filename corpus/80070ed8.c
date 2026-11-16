#include "tc_rt.h"

f64 fn_80070ed8(s32 param_1, u32 param_r4)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r7 = 0, t5 = 0, t9 = 0, t13 = 0, t17 = 0, t21 = 0;
    f64 f0 = 0.0, f1 = 0.0, f7 = 0.0, f31 = 0.0, t3 = 0.0, t7 = 0.0, t11 = 0.0, t15 = 0.0, t19 = 0.0, t23 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfa0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    r3 = rd32((u32)param_1 + 0x70u);
    f31 = (f64)rdf32(0x80572710u);
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = param_r4;
        r3 = tc_call(0x80031cf8u, &a);
        if (r3 != 0u) {
            r7 = rd32(r3 + 0x50u);
            r4 = rd32(0x804890d8u);
            r0 = rd32(0x804890dcu);
            f0 = (f64)rdf32(0x80572710u);
            wr32(0x817fdfb4u, rd32(0x804890d4u));
            wr32(0x817fdfb8u, r4);
            wr32(0x817fdfbcu, r0);
            wrf32d(r7 + 0x2cu, f0);
            wrf32d(r7 + 0x1cu, f0);
            wrf32d(r7 + 0xcu, f0);
            t3 = (f64)rdf32(r7 + 4u);
            wrf32d(0x817fdfc0u, (f64)rdf32(r7));
            wrf32d(0x817fdfc4u, t3);
            t5 = r7 + 8u;
            t7 = (f64)rdf32(t5 + 4u);
            wrf32d(0x817fdfc8u, (f64)rdf32(t5));
            wrf32d(0x817fdfccu, t7);
            t9 = r7 + 0x10u;
            t11 = (f64)rdf32(t9 + 4u);
            wrf32d(0x817fdfd0u, (f64)rdf32(t9));
            wrf32d(0x817fdfd4u, t11);
            t13 = r7 + 0x18u;
            t15 = (f64)rdf32(t13 + 4u);
            wrf32d(0x817fdfd8u, (f64)rdf32(t13));
            wrf32d(0x817fdfdcu, t15);
            t17 = r7 + 0x20u;
            t19 = (f64)rdf32(t17 + 4u);
            wrf32d(0x817fdfe0u, (f64)rdf32(t17));
            wrf32d(0x817fdfe4u, t19);
            t21 = r7 + 0x28u;
            t23 = (f64)rdf32(t21 + 4u);
            wrf32d(0x817fdfe8u, (f64)rdf32(t21));
            wrf32d(0x817fdfecu, t23);
            a.r[0] = 0x817fdfc0u;
            a.r[1] = 0x817fdfb4u;
            a.r[2] = 0x817fdfb4u;
            (void)tc_call(0x8023411cu, &a);
            f0 = (f64)rdf32(0x80572710u);
            wrf32d(0x817fdfb8u, f0);
            wrf32d(0x817fdfb0u, f0);
            wrf32d(0x817fdfacu, f0);
            wrf32d(0x817fdfa8u, f0);
            a.r[0] = 0x817fdfb4u;
            a.r[1] = 0x817fdfa8u;
            (void)tc_call(0x802343e4u, &a);
            a.f[0] = (f64)rdf32(0x817fdfa8u);
            a.f[1] = (f64)rdf32(0x817fdfb0u);
            f1 = tc_callf(0x80262c68u, &a);
            if ((f64)rdf32(0x80572718u) < (f64)(f32)f1) {
                a.f[0] = (f64)rdf32(0x817fdfa8u);
                a.f[1] = (f64)rdf32(0x817fdfb0u);
                f1 = tc_callf(0x80262c68u, &a);
                f31 = (f64)(f32)((f64)(f32)f1 - (f64)rdf32(0x8057271cu));
            } else {
                a.f[0] = (f64)rdf32(0x817fdfa8u);
                a.f[1] = (f64)rdf32(0x817fdfb0u);
                f1 = tc_callf(0x80262c68u, &a);
                f7 = (f64)(f32)f1;
                f0 = (f64)rdf32(0x80572720u);
                if ((f0 > f7) || (f0 == f7)) {
                    a.f[0] = (f64)rdf32(0x817fdfa8u);
                    a.f[1] = (f64)rdf32(0x817fdfb0u);
                    f1 = tc_callf(0x80262c68u, &a);
                    f31 = (f64)(f32)((f64)rdf32(0x8057271cu) + (f64)(f32)f1);
                } else {
                    a.f[0] = (f64)rdf32(0x817fdfa8u);
                    a.f[1] = (f64)rdf32(0x817fdfb0u);
                    f1 = tc_callf(0x80262c68u, &a);
                    f31 = (f64)(f32)f1;
                }
            }
        }
    }
    return f31;
}

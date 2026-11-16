#include "tc_rt.h"

s32 fn_8020fbec(u32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r6 = 0, r30 = 0, r31 = 0, t9 = 0;
    f64 f0 = 0.0, f1 = 0.0, f3 = 0.0, f31 = 0.0, t3 = 0.0, t5 = 0.0, t11 = 0.0, t13 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfa0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfe4u, 0u);
    a.r[0] = param_1;
    r3 = tc_call(0x8020ff88u, &a);
    if (r3 != 0u) {
        r3 = tc_call(0x800545e4u, &a);
        r4 = r3;
        if (rd32(r3 + 0x10u) == 0u) {
            if (rd32(r3 + 0x20u) == 0u) {
                r3 = rd32(r3);
                a.r[0] = r3;
                a.r[1] = 0x54u;
                a.r[2] = rd32(r4 + 0xcu);
                a.r[3] = r4 + 0x18u;
                r3 = tc_call(0x80040cd8u, &a);
            } else {
                r3 = r3 + 0x24u;
                a.r[0] = r3;
                a.r[1] = 0x20u;
                a.r[2] = 0x54u;
                r3 = tc_call(0x80094e80u, &a);
            }
        } else {
            r3 = rd32(r3);
            a.r[0] = r3;
            a.r[1] = 0x54u;
            a.r[2] = rd32(r4 + 0xcu);
            a.r[3] = r4 + 0x18u;
            r3 = tc_call(0x80040db8u, &a);
        }
        r30 = r3;
        if (r3 != 0u) {
            a.r[0] = r3;
            (void)tc_call(0x800f41bcu, &a);
        }
        a.r[0] = rd32(param_1 + 0x78u);
        a.r[1] = 2u;
        r3 = tc_call(0x80031cf8u, &a);
        f1 = tc_lastf();
        r4 = tc_lastr4();
        r31 = r3;
        if (r3 == 0u) {
            a.r[0] = param_1;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            f1 = tc_callf(rd32(rd32(param_1) + 0x2cu), &a);
            a.r[0] = param_1;
            a.r[1] = tc_lastr4();
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
            a.f[0] = f1;
            a.f[1] = (f64)rdf32(0x8057686cu);
            a.f[2] = (f64)rdf32(0x80576868u);
            a.r[0] = r30;
            a.r[1] = param_1;
            a.r[2] = 9u;
            a.r[3] = r3;
            a.r[4] = 0u;
            r3 = tc_call(0x800f4210u, &a);
            if (r3 == 0u) {
                r3 = 0u;
                return (s32)r3;
            }
        } else {
            r4 = rd32(r3 + 0x40u);
            if (r4 == 0u) {
                r3 = rd32(r3 + 0x54u);
            } else {
                r3 = rd32(r4 + 0x20u) + 0x40u;
            }
            t3 = (f64)rdf32(r3 + 4u);
            t5 = (f64)rdf32(r3 + 8u);
            wrf32d(0x817fdfccu, (f64)rdf32(r3));
            wrf32d(0x817fdfd0u, t3);
            wrf32d(0x817fdfd4u, t5);
            t9 = r3 + 0xcu;
            t11 = (f64)rdf32(t9 + 4u);
            t13 = (f64)rdf32(r3 + 0x14u);
            wrf32d(0x817fdfc0u, (f64)rdf32(t9));
            wrf32d(0x817fdfc4u, t11);
            wrf32d(0x817fdfc8u, t13);
            r6 = rd32(0x817fdfc4u);
            r0 = rd32(0x817fdfc8u);
            wr32(0x817fdfb4u, rd32(0x817fdfc0u));
            wr32(0x817fdfb8u, r6);
            wr32(0x817fdfbcu, r0);
            a.r[0] = 0x817fdfb4u;
            a.r[1] = 0x817fdfccu;
            a.r[2] = 0x817fdfb4u;
            (void)tc_call(0x802343a4u, &a);
            a.r[0] = 0x817fdfb4u;
            f1 = tc_callf(0x80234440u, &a);
            f0 = (f64)rdf32(0x8057685cu);
            f3 = (f64)rdf32(0x80576864u);
            wrf32d(0x817fdfa8u, f0);
            f31 = (f64)(f32)(f3 * f1);
            wrf32d(0x817fdfacu, f0);
            wrf32d(0x817fdfb0u, f0);
            a.r[0] = 0x817fdfa8u;
            a.r[1] = rd32(r31 + 0x50u);
            a.r[2] = 0x817fdfa8u;
            f1 = tc_callf(0x80042474u, &a);
            a.r[0] = param_1;
            a.r[1] = tc_lastr4();
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
            f1 = tc_lastf();
            wrf32d(0x817fdfa8u, (f64)rdf32(r3));
            wrf32d(0x817fdfacu, (f64)rdf32(r3 + 4u));
            wrf32d(0x817fdfb0u, (f64)rdf32(r3 + 8u));
            a.r[0] = param_1;
            a.r[1] = tc_lastr4();
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            f1 = tc_callf(rd32(rd32(param_1) + 0x2cu), &a);
            a.f[0] = f1;
            a.f[1] = f31;
            a.f[2] = (f64)rdf32(0x80576868u);
            a.r[0] = r30;
            a.r[1] = param_1;
            a.r[2] = 9u;
            a.r[3] = 0x817fdfa8u;
            a.r[4] = 0u;
            r3 = tc_call(0x800f4210u, &a);
            if (r3 == 0u) {
                r3 = 0u;
                return (s32)r3;
            }
        }
        r3 = r30;
    } else {
        r3 = 0u;
    }
    return (s32)r3;
}

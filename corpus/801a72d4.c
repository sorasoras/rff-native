#include "tc_rt.h"

void fn_801a72d4(u32 param_1, u32 param_2)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r7 = 0, r29 = 0, r30 = 0;
    f64 f0 = 0.0, f1 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    (void)param_1;
    wr32(0x817fdf90u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfe4u, 0u);
    if ((rd32(param_2 + 0xe88u) & 0x40u) == 0u) {
        f31 = (f64)rdf32(param_2 + 0x16d4u);
        a.r[0] = param_2;
        r3 = tc_call(0x800b3344u, &a);
        f1 = tc_lastf();
        r30 = r3;
        a.r[0] = param_2;
        a.r[1] = tc_lastr4();
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.f[0] = f1;
        r3 = tc_call(rd32(rd32(param_2) + 0x28u), &a);
        r0 = rd32(r3 + 4u);
        wr32(0x817fdfb0u, rd32(r3));
        wr32(0x817fdfb4u, r0);
        wr32(0x817fdfb8u, rd32(r3 + 8u));
        a.r[0] = 0x817fdfb0u;
        a.r[1] = r30;
        a.r[2] = 0x817fdfb0u;
        (void)tc_call(0x802343a4u, &a);
        a.r[0] = 0x817fdfb0u;
        f1 = tc_callf(0x80234440u, &a);
        r4 = tc_lastr4();
        if (f1 < f31) {
            a.r[0] = param_2;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.f[0] = f1;
            r3 = tc_call(rd32(rd32(param_2) + 0x28u), &a);
            r0 = rd32(r3 + 4u);
            wr32(0x817fdfa4u, rd32(r3));
            wr32(0x817fdfa8u, r0);
            wr32(0x817fdfacu, rd32(r3 + 8u));
            a.r[0] = rd32(param_2 + 0x70u);
            a.r[1] = 0u;
            r3 = tc_call(0x80031cf8u, &a);
            if (r3 != 0u) {
                r3 = rd32(r3 + 0x50u);
                wrf32d(0x817fdfa4u, (f64)rdf32(r3 + 0xcu));
                wrf32d(0x817fdfa8u, (f64)rdf32(r3 + 0x1cu));
                wrf32d(0x817fdfacu, (f64)rdf32(r3 + 0x2cu));
            }
            if (rd32(0x80356364u) != 0u) {
                r7 = rd32(0x817fdfa4u);
                r0 = rd32(0x817fdfacu);
                wr32(0x817fdf9cu, rd32(0x817fdfa8u));
                f1 = (f64)rdf32(0x805759f8u);
                wr32(0x817fdf98u, r7);
                wr32(0x817fdfa0u, r0);
                a.f[0] = f1;
                a.r[0] = 0x7eu;
                a.r[1] = 0x817fdf98u;
                a.r[2] = 0x804890c8u;
                a.r[3] = 0x804b15c0u;
                r3 = tc_call(0x800d7758u, &a);
                r30 = r3;
            } else {
                a.f[0] = (f64)rdf32(0x805759f8u);
                a.r[0] = 0x7eu;
                a.r[1] = 0x817fdfa4u;
                a.r[2] = 0x804890c8u;
                a.r[3] = 0x804b15c0u;
                r3 = tc_call(0x800d782cu, &a);
                r30 = r3;
            }
            if (r3 != 0u) {
                a.r[1] = 0xffffffffu;
                r3 = tc_call(0x8010b43cu, &a);
                wr32(r30 + 0x20u, r3);
                wr32(r30 + 0x24u, 0u);
            }
            a.r[0] = 0x804b9da0u;
            a.r[1] = 0x101au;
            a.r[2] = 0x817fdfa4u;
            f1 = tc_callf(0x8010a754u, &a);
            wr32(param_2 + 0x148u, rd32(param_2 + 0x148u) | 0x8000000u);
            a.r[0] = param_2;
            a.r[1] = tc_lastr4();
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.f[0] = f1;
            f1 = tc_callf(rd32(rd32(param_2) + 0x148u), &a);
            f0 = (f64)rdf32(0x805759c8u);
            wr32(0x817fdfd0u, 0u);
            wrf32d(0x817fdfc0u, f0);
            wrf32d(0x817fdfc4u, f0);
            wrf32d(0x817fdfc8u, f0);
            wrf32d(0x817fdfccu, f0);
            wr8(0x817fdfd4u, 0u);
            wr8(0x817fdfd5u, 0u);
            a.r[0] = param_2;
            a.r[1] = tc_lastr4();
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.f[0] = f1;
            r3 = tc_call(rd32(rd32(param_2) + 0x28u), &a);
            wrf32d(0x817fdfc0u, (f64)rdf32(r3));
            wrf32d(0x817fdfc4u, (f64)rdf32(r3 + 4u));
            wrf32d(0x817fdfc8u, (f64)rdf32(r3 + 8u));
            a.r[0] = 0x51u;
            a.r[1] = 0u;
            a.r[2] = 0x817fdfc0u;
            a.r[3] = 0u;
            r3 = tc_call(0x800eb4f0u, &a);
            r29 = r3;
            a.r[0] = 0x8046ad74u;
            a.r[1] = r3;
            (void)tc_call(0x8007b03cu, &a);
            wr32(r29 + 0x9cu, rd32(r29 + 0x9cu) | 0x8000000u);
            wr32(r29 + 0x15cu, rd32(0x8046ad78u));
        }
        a.r[0] = param_2;
        (void)tc_call(0x800b333cu, &a);
    }
    return;
}

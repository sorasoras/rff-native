#include "tc_rt.h"

void fn_800f5e20(void)
{
    u32 r0 = 0, r3 = 0, r5 = 0, r6 = 0, r23 = 0, r24 = 0, r25 = 0, r26 = 0;
    f64 f0 = 0.0, f1 = 0.0, f28 = 0.0, f29 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf20u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wrf64(0x817fdfe0u, 0.0);
    wrf32d(0x817fdfe8u, 0.0);
    wrf32d(0x817fdfecu, 0.0);
    wrf64(0x817fdfd0u, 0.0);
    wrf32d(0x817fdfd8u, 0.0);
    wrf32d(0x817fdfdcu, 0.0);
    wrf64(0x817fdfc0u, 0.0);
    wrf32d(0x817fdfc8u, 0.0);
    wrf32d(0x817fdfccu, 0.0);
    wr32(0x817fdf94u, 0u);
    wr32(0x817fdf98u, 0u);
    wr32(0x817fdf9cu, 0u);
    wr32(0x817fdfa0u, 0u);
    wr32(0x817fdfa4u, 0u);
    wr32(0x817fdfa8u, 0u);
    wr32(0x817fdfacu, 0u);
    wr32(0x817fdfb0u, 0u);
    wr32(0x817fdfb4u, 0u);
    wr32(0x817fdfb8u, 0u);
    wr32(0x817fdfbcu, 0u);
    (void)tc_call(0x8020de6cu, &a);
    f28 = (f64)rdf32(0x80573b9cu);
    f0 = (f64)rdf32(0x80573ba0u);
    wrf32d(0x817fdf70u, (f64)rdf32(0x80573b98u));
    f29 = (f64)rdf32(0x80573ba4u);
    wrf32d(0x817fdf74u, f28);
    f30 = (f64)rdf32(0x80573ba8u);
    r26 = 0u;
    wrf32d(0x817fdf78u, f0);
    r25 = 0u;
    f31 = rdf64(0x80573bb0u);
    r24 = 0u;
    r23 = 0u;
    do {
        a.r[0] = r24;
        r3 = tc_call(0x8020dd18u, &a);
        if (r3 != 0u) {
            wr32(0x817fdf84u, r25);
            wr32(0x817fdf80u, 0x43300000u);
            wrf32d(0x817fdf58u, f28);
            f0 = rdf64(0x817fdf80u);
            wrf32d(0x817fdf5cu, f28);
            r6 = rd32(0x817fdf58u);
            wrf32d(0x817fdf60u, f30);
            r5 = rd32(0x817fdf5cu);
            r0 = rd32(0x817fdf60u);
            wrf32d(0x817fdf64u, f29);
            wrf32d(0x817fdf68u, f28);
            wrf32d(0x817fdf6cu, f28);
            wr32(0x817fdf28u, r6);
            wr32(0x817fdf2cu, r5);
            wr32(0x817fdf30u, r0);
            a.f[0] = (f64)(f32)(f0 - f31);
            a.r[0] = 0x817fdf28u;
            a.r[1] = 0x817fdf28u;
            (void)tc_call(0x802343c8u, &a);
            wr32(0x817fdf8cu, r26);
            r6 = rd32(0x817fdf64u);
            wr32(0x817fdf88u, 0x43300000u);
            r5 = rd32(0x817fdf68u);
            r0 = rd32(0x817fdf6cu);
            f1 = (f64)(f32)(rdf64(0x817fdf88u) - f31);
            wr32(0x817fdf34u, r6);
            wr32(0x817fdf38u, r5);
            wr32(0x817fdf3cu, r0);
            a.f[0] = f1;
            a.r[0] = 0x817fdf34u;
            a.r[1] = 0x817fdf34u;
            (void)tc_call(0x802343c8u, &a);
            r6 = rd32(0x817fdf74u);
            r0 = rd32(0x817fdf78u);
            wr32(0x817fdf40u, rd32(0x817fdf70u));
            wr32(0x817fdf44u, r6);
            wr32(0x817fdf48u, r0);
            a.r[0] = 0x817fdf40u;
            a.r[1] = 0x817fdf34u;
            a.r[2] = 0x817fdf40u;
            (void)tc_call(0x80234380u, &a);
            r6 = rd32(0x817fdf44u);
            r0 = rd32(0x817fdf48u);
            wr32(0x817fdf4cu, rd32(0x817fdf40u));
            wr32(0x817fdf50u, r6);
            wr32(0x817fdf54u, r0);
            a.r[0] = 0x817fdf4cu;
            a.r[1] = 0x817fdf28u;
            a.r[2] = 0x817fdf4cu;
            (void)tc_call(0x80234380u, &a);
            f1 = (f64)rdf32(0x817fdf50u);
            r5 = 1u;
            f0 = (f64)rdf32(0x817fdf54u);
            wrf32d(0x817fdf64u, (f64)rdf32(0x817fdf4cu));
            wrf32d(0x817fdf68u, f1);
            wrf32d(0x817fdf6cu, f0);
            if (r24 == 7u) {
                r5 = (u32)rd8(r23 - 0x7fb64fcbu);
            }
            a.f[0] = (f64)rdf32(0x80573b90u);
            a.r[0] = r24;
            a.r[1] = 0x817fdf64u;
            a.r[2] = r5;
            r3 = tc_call(0x8020e228u, &a);
            if (r3 != 0u) {
                wr32(r3 + 0x94u, rd32(0x804863d8u));
            }
            r26 = r26 + 1u;
            if (r26 == 6u) {
                r26 = 0u;
                r25 = r25 + 1u;
            }
        }
        r24 = r24 + 1u;
        r23 = r23 + 0x38u;
    } while (r24 < 0x21u);
    return;
}

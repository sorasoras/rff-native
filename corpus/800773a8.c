#include "tc_rt.h"

void fn_800773a8(void)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r27 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf40u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wrf64(0x817fdfe0u, 0.0);
    wrf32d(0x817fdfe8u, 0.0);
    wrf32d(0x817fdfecu, 0.0);
    wr32(0x817fdfccu, 0u);
    wr32(0x817fdfd0u, 0u);
    wr32(0x817fdfd4u, 0u);
    wr32(0x817fdfd8u, 0u);
    wr32(0x817fdfdcu, 0u);
    r8 = (rd32(0x805710e0u) * 0x6d0u) - 0x7fc2e738u;
    r6 = rd32(r8 + 0x144u);
    r0 = rd32(r8 + 0x148u);
    wr32(0x817fdfb4u, rd32(r8 + 0x140u));
    wr32(0x817fdfb8u, r6);
    wr32(0x817fdfbcu, r0);
    a.r[0] = 0x817fdfb4u;
    a.r[1] = 0x804865c8u;
    a.r[2] = 0x817fdfb4u;
    f1 = tc_callf(0x80234380u, &a);
    r3 = rd32(0x804863d8u);
    a.r[0] = r3;
    a.r[1] = tc_lastr4();
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.f[0] = f1;
    a.f[1] = 0.0;
    f1 = tc_callf(rd32(rd32(r3) + 0x2cu), &a);
    r3 = rd32(0x804865b8u);
    f0 = (f64)rdf32(0x8057272cu);
    wrf32d(0x817fdfacu, f1);
    wrf32d(0x817fdfa8u, f0);
    wrf32d(0x817fdfb0u, f0);
    if (r3 != 0u && rd32(0x804865c0u) != 0u) {
        r5 = rd32(0x817fdfb8u);
        r0 = rd32(0x817fdfbcu);
        wr32(0x817fdf84u, rd32(0x817fdfb4u));
        wr32(0x817fdf88u, r5);
        wr32(0x817fdf8cu, r0);
        a.r[0] = r3;
        a.r[1] = 0x817fdf84u;
        (void)tc_call(0x8015811cu, &a);
        r5 = rd32(0x817fdfacu);
        r0 = rd32(0x817fdfb0u);
        wr32(0x817fdf78u, rd32(0x817fdfa8u));
        r3 = rd32(0x804865b8u);
        wr32(0x817fdf7cu, r5);
        wr32(0x817fdf80u, r0);
        a.r[0] = r3;
        a.r[1] = 0x817fdf78u;
        (void)tc_call(0x801582b4u, &a);
        if ((u32)rd8(0x80492b98u) == 1u) {
            r3 = rd32(rd32(0x804865b8u) + 0xcu);
            r0 = (r3 << 0x1eu) & 0xc0000000u;
            r3 = (r3 >> 0x1fu) & 1u;
            r0 = r0 - r3;
            r0 = (r0 << 2u) | (r0 >> 0x1eu);
            r0 = r0 + r3;
            if (r0 == 0u) {
                r3 = tc_call(0x80040b64u, &a);
                f30 = (f64)rdf32(0x8057272cu);
                f31 = (f64)rdf32(0x80572790u);
                r27 = 0u;
                r7 = (rd32(0x805710e0u) * 0x6d0u) - 0x7fc2e738u;
                r4 = rd32(r7 + 0x144u);
                r0 = rd32(r7 + 0x148u);
                r3 = r3 - (((ppc_mulhwu(0xaaaaaaabu, r3) >> 1u) & 0x7fffffffu) * 3u);
                wr32(0x817fdf9cu, rd32(r7 + 0x140u));
                r31 = r3 + 1u;
                wr32(0x817fdfa0u, r4);
                wr32(0x817fdfa4u, r0);
                while (r27 < r31) {
                    wrf32d(0x817fdf98u, f30);
                    f1 = (f64)rdf32(0x80572740u);
                    wrf32d(0x817fdf94u, f30);
                    f2 = (f64)rdf32(0x8057278cu);
                    wrf32d(0x817fdf90u, f30);
                    a.f[0] = f1;
                    a.f[1] = f2;
                    a.r[0] = 0x817fdf90u;
                    (void)tc_call(0x80079000u, &a);
                    a.r[0] = 0x817fdf90u;
                    a.r[1] = 0x817fdf9cu;
                    a.r[2] = 0x817fdf90u;
                    (void)tc_call(0x80234380u, &a);
                    a.f[0] = (f64)rdf32(0x817fdf90u);
                    a.f[1] = (f64)rdf32(0x817fdf98u);
                    a.r[0] = (rd32(0x80471a18u) * 0x4150u) - 0x7fb92738u;
                    a.r[1] = 0u;
                    a.r[2] = 0u;
                    f1 = tc_callf(0x80089fc8u, &a);
                    f0 = (f64)(f32)(f31 + f1);
                    f1 = (f64)rdf32(0x80572740u);
                    wrf32d(0x817fdf94u, f0);
                    a.f[0] = f1;
                    a.r[0] = 0x3au;
                    a.r[1] = 0x817fdf90u;
                    a.r[2] = 0x804b15c0u;
                    a.r[3] = 0x804890c8u;
                    (void)tc_call(0x800d783cu, &a);
                    r27 = r27 + 1u;
                }
            }
        }
        r3 = rd32(0x804865bcu);
        if (r3 != 0u) {
            r5 = rd32(0x817fdfb8u);
            r0 = rd32(0x817fdfbcu);
            wr32(0x817fdf6cu, rd32(0x817fdfb4u));
            wr32(0x817fdf70u, r5);
            wr32(0x817fdf74u, r0);
            a.r[0] = r3;
            a.r[1] = 0x817fdf6cu;
            (void)tc_call(0x8015811cu, &a);
            r5 = rd32(0x817fdfacu);
            r0 = rd32(0x817fdfb0u);
            wr32(0x817fdf60u, rd32(0x817fdfa8u));
            r3 = rd32(0x804865bcu);
            wr32(0x817fdf64u, r5);
            wr32(0x817fdf68u, r0);
            a.r[0] = r3;
            a.r[1] = 0x817fdf60u;
            (void)tc_call(0x801582b4u, &a);
        }
    }
    if ((rd32(0x80492c58u) & 0x80u) != 0u) {
        r3 = rd32(0x804865bcu);
        if (r3 != 0u) {
            r5 = rd32(0x817fdfb8u);
            r0 = rd32(0x817fdfbcu);
            wr32(0x817fdf54u, rd32(0x817fdfb4u));
            wr32(0x817fdf58u, r5);
            wr32(0x817fdf5cu, r0);
            a.r[0] = r3;
            a.r[1] = 0x817fdf54u;
            (void)tc_call(0x8015811cu, &a);
            r5 = rd32(0x817fdfacu);
            r0 = rd32(0x817fdfb0u);
            wr32(0x817fdf48u, rd32(0x817fdfa8u));
            r3 = rd32(0x804865bcu);
            wr32(0x817fdf4cu, r5);
            wr32(0x817fdf50u, r0);
            a.r[0] = r3;
            a.r[1] = 0x817fdf48u;
            (void)tc_call(0x801582b4u, &a);
        }
    }
    return;
}

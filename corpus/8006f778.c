#include "tc_rt.h"

void fn_8006f778(u32 param_r3)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r27 = 0, r28 = 0, r30 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf40u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    a.r[0] = param_r3;
    (void)tc_call(0x8006ffecu, &a);
    a.r[0] = param_r3 + (rd32(param_r3 + 0xa0u) * 0x1cu) + 0x68u;
    (void)tc_call(0x8007ae84u, &a);
    a.r[0] = param_r3 + (rd32(param_r3 + 0xa0u) * 0x1cu) + 0xa8u;
    (void)tc_call(0x8007ae84u, &a);
    f4 = (f64)rdf32(0x805726f8u);
    r4 = 0x80490000u;
    r31 = 0u;
    f2 = (f64)rdf32(0x804890ccu);
    r30 = 0u;
    f3 = (f64)rdf32(0x804890c8u);
    wrf32d(0x817fdfb4u, f4);
    f0 = (f64)rdf32(0x80572700u);
    wrf32d(0x817fdf9cu, f4);
    f1 = (f64)rdf32(0x804890d0u);
    wrf32d(0x817fdfbcu, f4);
    wrf32d(0x817fdf90u, f4);
    wrf32d(0x817fdf8cu, f4);
    wrf32d(0x817fdf88u, f4);
    wrf32d(0x817fdfc8u, f4);
    wrf32d(0x817fdfc4u, f4);
    wrf32d(0x817fdfc0u, f4);
    wr32(0x817fdf80u, 0u);
    wrf32d(0x817fdf94u, f3);
    wrf32d(0x817fdf98u, f2);
    wrf32d(0x817fdf9cu, f1);
    wrf32d(0x817fdfb4u, f3);
    wrf32d(0x817fdfb8u, f2);
    wrf32d(0x817fdfbcu, f1);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfdcu, 0u);
    wr32(0x817fdfe0u, 0u);
    wrf32d(0x817fdf84u, f0);
    wrf32d(0x817fdfd8u, f4);
    wrf32d(0x817fdfd4u, f4);
    wrf32d(0x817fdfd0u, f4);
    wrf32d(0x817fdfccu, f4);
    wrf32d(0x817fdfacu, f4);
    wrf32d(0x817fdfa8u, f4);
    wrf32d(0x817fdfa4u, f4);
    wrf32d(0x817fdfa0u, f4);
    if ((u32)((s32)rd32(param_r3 + 0x64u) >> 31) == 0u) {
        wr32(0x817fdf48u, 0u);
        a.f[0] = (f64)rdf32(param_r3 + 8u);
        a.f[1] = (f64)rdf32(param_r3 + 0x10u);
        a.f[2] = (f64)(f32)((f64)rdf32(param_r3 + 0xcu) + (f64)rdf32(param_r3 + 0x20u));
        a.r[0] = (rd32(0x80471a18u) * 0x4150u) - 0x7fb92738u;
        a.r[1] = 0x817fdf48u;
        a.r[2] = 0u;
        f1 = tc_callf(0x8008a2fcu, &a);
        r4 = tc_lastr4();
        f2 = 0.0;
        f3 = 0.0;
        f4 = 0.0;
        if ((u32)((s32)((rd32(param_r3 + 0x64u) << 2u) & 0xc0000000u) >> 31) == 0u) {
            if ((f64)rdf32(0x80572704u) == f1) {
                f1 = (f64)(f32)((f64)rdf32(0x805726fcu) + (f64)rdf32(param_r3 + 0xcu));
            }
            f0 = (f64)rdf32(param_r3 + 0xcu);
            if (!(f1 < f0)) {
                f2 = (f64)rdf32(0x805726f8u);
            } else {
                f2 = (f64)(f32)(f0 - f1);
            }
            f0 = (f64)rdf32(param_r3 + 0x20u);
            if ((f2 < f0) || (f2 == f0)) {
                r4 = 0x80490000u;
                f4 = (f64)rdf32(0x804890ecu);
                f3 = (f64)rdf32(0x804890f0u);
                f2 = (f64)rdf32(0x804890f4u);
                r31 = 1u;
                wr32(0x817fdf80u, 3u);
                wrf32d(0x817fdf94u, f4);
                wrf32d(0x817fdf98u, f3);
                wrf32d(0x817fdf9cu, f2);
                f3 = (f64)rdf32(param_r3 + 0x10u);
                f2 = (f64)rdf32(param_r3 + 8u);
                wrf32d(0x817fdf5cu, f1);
                wrf32d(0x817fdf58u, f2);
                wrf32d(0x817fdf60u, f3);
                wrf32d(0x817fdf88u, f2);
                wrf32d(0x817fdf8cu, (f64)(f32)f1);
                wrf32d(0x817fdf90u, f3);
            }
        }
        if (r31 == 0u) {
            r3 = rd32(param_r3 + 0x64u);
            if ((u32)((s32)((r3 << 3u) & 0xc0000000u) >> 31) == 0u || (u32)((s32)((r3 << 1u) & 0xc0000000u) >> 31) == 0u) {
                a.f[0] = (f64)rdf32(param_r3 + 0x20u);
                a.r[0] = 0x8046d8c8u;
                a.r[1] = 0x817fdf80u;
                a.r[2] = param_r3 + 8u;
                a.r[3] = param_r3 + 0x14u;
                a.r[4] = rd32(0x817fdf48u);
                a.r[5] = rd32(param_r3 + 0x40u) & 0xffffu;
                r3 = tc_call(0x8008c458u, &a);
                f1 = tc_lastf();
                r4 = tc_lastr4();
                f2 = 0.0;
                f3 = 0.0;
                f4 = 0.0;
                r31 = r3;
            }
        }
        if (r31 != 0u) {
            a.r[0] = param_r3;
            a.r[1] = 0x817fdf80u;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.f[0] = f1;
            a.f[1] = f2;
            a.f[2] = f3;
            a.f[3] = f4;
            f1 = tc_callf(rd32(rd32(param_r3) + 0x18u), &a);
            r4 = tc_lastr4();
            f2 = 0.0;
            f3 = 0.0;
            f4 = 0.0;
        }
    }
    f0 = (f64)rdf32(0x805726f8u);
    wrf32d(0x817fdf78u, f0);
    wrf32d(0x817fdf74u, f0);
    wrf32d(0x817fdf70u, f0);
    wrf32d(0x817fdf6cu, f0);
    wrf32d(0x817fdf68u, f0);
    wrf32d(0x817fdf64u, f0);
    if ((rd32(param_r3 + 0x30u) & 1u) != 0u) {
        a.r[0] = param_r3;
        a.r[1] = rd32(0x804863d8u);
        a.r[2] = 0x817fdf70u;
        r3 = tc_call(0x8006fc30u, &a);
        f1 = tc_lastf();
        r4 = tc_lastr4();
        f2 = 0.0;
        f3 = 0.0;
        f4 = 0.0;
        if (r3 != 0u) {
            f2 = (f64)rdf32(0x817fdf70u);
            r30 = 1u;
            f1 = (f64)rdf32(0x817fdf74u);
            f0 = (f64)rdf32(0x817fdf78u);
            wrf32d(0x817fdf64u, f2);
            wrf32d(0x817fdf68u, f1);
            wrf32d(0x817fdf6cu, f0);
        }
    }
    if ((rd32(param_r3 + 0x30u) & 6u) != 0u) {
        r28 = rd32(0x8046ad74u);
        while (r28 != 0u) {
            r3 = r28;
            r28 = rd32(r28);
            r27 = rd32(r3 + 8u);
            if ((u32)((s32)rd32(r27 + 0x9cu) >> 31) != 0u) {
                a.r[0] = r27;
                a.r[1] = r4;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.f[0] = f1;
                a.f[1] = f2;
                a.f[2] = f3;
                a.f[3] = f4;
                r3 = tc_call(rd32(rd32(r27) + 0x140u), &a);
                f1 = tc_lastf();
                r4 = tc_lastr4();
                if (r3 != 0u || (rd32(param_r3 + 0x30u) & 2u) == 0u) {
                    a.r[0] = r27;
                    a.r[1] = r4;
                    a.r[2] = 0u;
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    a.f[3] = 0.0;
                    r3 = tc_call(rd32(rd32(r27) + 0x140u), &a);
                    f1 = tc_lastf();
                    r4 = tc_lastr4();
                    f2 = 0.0;
                    f3 = 0.0;
                    f4 = 0.0;
                    if (r3 == 0u || (rd32(param_r3 + 0x30u) & 4u) == 0u) continue;
                }
                a.r[0] = param_r3;
                a.r[1] = r27;
                a.r[2] = 0x817fdf70u;
                r3 = tc_call(0x8006fc30u, &a);
                f1 = tc_lastf();
                r4 = tc_lastr4();
                f2 = 0.0;
                f3 = 0.0;
                f4 = 0.0;
                if (r3 != 0u) {
                    f2 = (f64)rdf32(0x817fdf70u);
                    r30 = r30 | 1u;
                    f1 = (f64)rdf32(0x817fdf74u);
                    f0 = (f64)rdf32(0x817fdf78u);
                    wrf32d(0x817fdf64u, f2);
                    wrf32d(0x817fdf68u, f1);
                    wrf32d(0x817fdf6cu, f0);
                }
            }
        }
    }
    if ((rd32(param_r3 + 0x30u) & 8u) != 0u) {
        r27 = rd32(0x8046adecu);
        while (r27 != 0u) {
            r3 = r27;
            r27 = rd32(r27);
            r4 = rd32(r3 + 8u);
            if ((u32)((s32)rd32(r4 + 0x74u) >> 31) != 0u) {
                a.r[0] = param_r3;
                a.r[1] = r4;
                a.r[2] = 0x817fdf70u;
                r3 = tc_call(0x8006fdacu, &a);
                f1 = tc_lastf();
                f2 = 0.0;
                f3 = 0.0;
                f4 = 0.0;
                if (r3 != 0u) {
                    f2 = (f64)rdf32(0x817fdf70u);
                    r30 = r30 | 1u;
                    f1 = (f64)rdf32(0x817fdf74u);
                    f0 = (f64)rdf32(0x817fdf78u);
                    wrf32d(0x817fdf64u, f2);
                    wrf32d(0x817fdf68u, f1);
                    wrf32d(0x817fdf6cu, f0);
                }
            }
        }
    }
    if (r31 == 0u) {
        if (r30 != 0u) {
            a.r[0] = param_r3;
            a.r[1] = 0x817fdf64u;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.f[0] = f1;
            a.f[1] = f2;
            a.f[2] = f3;
            a.f[3] = f4;
            f1 = tc_callf(rd32(rd32(param_r3) + 0x20u), &a);
            if (rd32(param_r3 + 4u) != 0u && (rd32(param_r3 + 0x30u) & 0x20u) == 0u) {
                a.r[0] = param_r3;
                a.r[1] = 0x817fdf64u;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                (void)tc_call(rd32(rd32(param_r3) + 0x1cu), &a);
            }
        }
    } else if (rd32(param_r3 + 4u) != 0u) {
        a.r[0] = param_r3;
        a.r[1] = 0x817fdf88u;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.f[0] = f1;
        a.f[1] = f2;
        a.f[2] = f3;
        a.f[3] = f4;
        (void)tc_call(rd32(rd32(param_r3) + 0x1cu), &a);
    }
    if (rd32(param_r3 + 0x3cu) != 0u && rd32(param_r3 + 0x34u) != 3u) {
        r0 = rd32(param_r3 + 0xcu);
        wr32(0x817fdf4cu, rd32(param_r3 + 8u));
        wr32(0x817fdf50u, r0);
        wr32(0x817fdf54u, rd32(param_r3 + 0x10u));
        a.r[0] = rd32(param_r3 + 0x3cu);
        a.r[1] = 0x817fdf4cu;
        (void)tc_call(0x8015811cu, &a);
    }
    f2 = (f64)rdf32(param_r3 + 8u);
    f1 = (f64)rdf32(param_r3 + 0xcu);
    f0 = (f64)rdf32(param_r3 + 0x10u);
    r0 = rd32(param_r3 + 0x44u) + 1u;
    wr32(param_r3 + 0xa0u, rd32(param_r3 + 0xa0u) ^ 1u);
    wrf32d(param_r3 + 0x14u, f2);
    wrf32d(param_r3 + 0x18u, f1);
    wrf32d(param_r3 + 0x1cu, f0);
    wr32(param_r3 + 0x44u, r0);
    return;
}

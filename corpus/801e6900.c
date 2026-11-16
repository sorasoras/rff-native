#include "tc_rt.h"

void fn_801e6900(u32 param_r3)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r25 = 0, r26 = 0, r28 = 0, r29 = 0, r30 = 0;
    u32 r31 = 0;
    f64 f1 = 0.0, f29 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf50u, 0x817fe000u);
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
    wr32(0x817fdfb4u, 0u);
    wr32(0x817fdfb8u, 0u);
    wr32(0x817fdfbcu, 0u);
    wr32(0x817fdfc0u, 0u);
    wr32(0x817fdfc4u, 0u);
    wr32(0x817fdfc8u, 0u);
    wr32(0x817fdfccu, 0u);
    r4 = rd32(param_r3 + 0x724u);
    r28 = param_r3;
    if (r4 != 0u) {
        a.r[0] = 0x817fdf88u;
        a.r[1] = r4;
        a.r[2] = 0xffffu;
        f1 = tc_callf(0x800500a8u, &a);
        r3 = rd32(0x804863d8u);
        a.r[0] = r3;
        a.r[1] = tc_lastr4();
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.f[0] = f1;
        r3 = tc_call(rd32(rd32(r3) + 0x28u), &a);
        r4 = rd32(r3);
        f1 = (f64)rdf32(0x80576310u);
        wr32(0x817fdf80u, rd32(r3 + 4u));
        f31 = (f64)rdf32(0x80576314u);
        wr32(0x817fdf7cu, r4);
        f30 = (f64)(f32)(f1 + (f64)rdf32(0x817fdf80u));
        r30 = rd32(0x817fdf90u);
        wr32(0x817fdf84u, rd32(r3 + 8u));
        wrf32d(0x817fdf80u, f31);
        for (;;) {
            r4 = (u32)(s16)rd16(0x817fdf88u);
            if (r4 >= rd32(r30 + 8u)) break;
            r31 = rd32(r30 + 0xcu) + ((r4 << 5u) & 0xffffffe0u);
            r29 = (u32)(s16)rd16(r31 + 2u) - 1u;
            if ((s32)r29 > 0) {
                r4 = param_r3;
                r6 = 0xffffffffu;
                r7 = 0u;
                r5 = rd32(r31 + 4u) + ((u32)(s16)rd16(0x817fdf8au) * 0xcu);
                ctr = 4u;
                do {
                    if ((u32)rd16(r5) == (u32)rd16(r4 + 0x3f74u) && (u32)(s8)rd8(r5 + 3u) == (u32)rd16(r4 + 0x3f76u)) {
                        r6 = r7;
                        break;
                    }
                    r7 = r7 + 1u;
                    if ((u32)rd16(r5) == (u32)rd16(r4 + 0x3f8cu) && (u32)(s8)rd8(r5 + 3u) == (u32)rd16(r4 + 0x3f8eu)) {
                        r6 = r7;
                        break;
                    }
                    r7 = r7 + 1u;
                    if ((u32)rd16(r5) == (u32)rd16(r4 + 0x3fa4u) && (u32)(s8)rd8(r5 + 3u) == (u32)rd16(r4 + 0x3fa6u)) {
                        r6 = r7;
                        break;
                    }
                    r7 = r7 + 1u;
                    if ((u32)rd16(r5) == (u32)rd16(r4 + 0x3fbcu) && (u32)(s8)rd8(r5 + 3u) == (u32)rd16(r4 + 0x3fbeu)) {
                        r6 = r7;
                        break;
                    }
                    r7 = r7 + 1u;
                    if ((u32)rd16(r5) == (u32)rd16(r4 + 0x3fd4u) && (u32)(s8)rd8(r5 + 3u) == (u32)rd16(r4 + 0x3fd6u)) {
                        r6 = r7;
                        break;
                    }
                    r4 = r4 + 0x78u;
                    r7 = r7 + 1u;
                    ctr = ctr - 1u;
                } while (ctr != 0u);
                if (r6 != 0xffffffffu) {
                    f29 = (f64)rdf32(0x80576318u);
                    r25 = param_r3 + (r6 * 0x18u);
                    for (;;) {
                        r0 = (u32)(s16)rd16(0x817fdf8au);
                        if ((s32)r0 >= (s32)r29) break;
                        r6 = rd32(r31 + 4u);
                        wr16(0x817fdf8au, (u16)((u32)(s16)rd16(0x817fdf8au) + 1u));
                        r7 = r6 + (r0 * 0xcu);
                        f1 = (f64)rdf32(r7 + 8u);
                        wrf32d(0x817fdf70u, (f64)rdf32(r7 + 4u));
                        wrf32d(0x817fdf74u, f31);
                        wrf32d(0x817fdf78u, f1);
                        f1 = (f64)rdf32(r7 + 0x14u);
                        wrf32d(0x817fdf64u, (f64)rdf32(r7 + 0x10u));
                        wrf32d(0x817fdf68u, f31);
                        wrf32d(0x817fdf6cu, f1);
                        wrf32d(0x817fdf60u, f31);
                        wrf32d(0x817fdf5cu, f31);
                        wrf32d(0x817fdf58u, f31);
                        a.r[0] = 0x817fdf7cu;
                        a.r[1] = 0x817fdf70u;
                        a.r[2] = 0x817fdf64u;
                        a.r[3] = 0x817fdf58u;
                        f1 = tc_callf(0x8007910cu, &a);
                        if (f1 < f29) {
                            f29 = f1;
                            wrf32d(r25 + 0x3f7cu, (f64)rdf32(0x817fdf58u));
                            wrf32d(r25 + 0x3f80u, (f64)rdf32(0x817fdf5cu));
                            wrf32d(r25 + 0x3f84u, (f64)rdf32(0x817fdf60u));
                            wrf32d(r25 + 0x3f80u, f30);
                            wrf32d(r25 + 0x3f78u, f1);
                        }
                    }
                }
            }
            r3 = (u32)(s16)rd16(0x817fdf88u);
            wr16(0x817fdf8au, 0u);
            wr16(0x817fdf88u, (u16)(r3 + 1u));
        }
        r26 = param_r3 + 0x3f7cu;
        r25 = 0u;
        do {
            r4 = rd32(r28 + 0x3f70u);
            if (r4 != 0xffffffffu) {
                if ((rd32(0x80571198u) & (u32)rd16(r28 + 0x3f74u)) == 0u) {
                    a.r[0] = 0x804b9da0u;
                    a.r[1] = r4;
                    (void)tc_call(0x8010a864u, &a);
                } else {
                    a.r[0] = 0x804b9da0u;
                    a.r[1] = r4;
                    (void)tc_call(0x8010a8b8u, &a);
                    a.r[0] = 0x804b9e80u;
                    a.r[1] = rd32(r28 + 0x3f70u);
                    a.r[2] = r26;
                    (void)tc_call(0x80120914u, &a);
                }
            }
            r25 = r25 + 1u;
            r26 = r26 + 0x18u;
            r28 = r28 + 0x18u;
        } while (r25 < 0x14u);
    }
    return;
}

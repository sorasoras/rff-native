#include "tc_rt.h"

u32 fn_8005e340(s32 param_1)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r28 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfc0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff0u, 0u);
    a.r[0] = 0x80486da8u;
    f1 = tc_callf(0x800b8708u, &a);
    r4 = tc_lastr4();
    if (rd32(0x805706d0u) != 7u) {
        r0 = 1u;
    } else {
        r0 = 0u;
    }
    if (r0 == 0u) {
        r3 = rd32(0x804863d8u);
        a.r[0] = r3;
        a.r[1] = r4;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        r3 = tc_call(rd32(rd32(r3) + 0x28u), &a);
        r7 = rd32(r3);
        r0 = rd32(0x805710e0u);
        wr32(0x817fdfe8u, rd32(r3 + 4u));
        f0 = (f64)rdf32(0x805724d8u);
        r0 = r0 * 0x6d0u;
        f1 = (f64)rdf32(0x817fdfe8u);
        wr32(0x817fdfe4u, r7);
        f2 = (f64)(f32)(f1 + f0);
        r8 = r0 - 0x7fc2e738u;
        r6 = rd32(r3 + 8u);
        f1 = (f64)rdf32(0x817fdfe4u);
        wrf32d(0x817fdfe8u, f2);
        f0 = (f64)rdf32(0x805724dcu);
        r0 = rd32(0x817fdfe8u);
        wrf32d(r8 + 0x140u, f1);
        f1 = (f64)rdf32(0x805724e0u);
        wr32(0x817fdfecu, r6);
        wr32(0x817fdfdcu, r0);
        f4 = (f64)rdf32(0x817fdfecu);
        wrf32d(r8 + 0x144u, f2);
        f2 = (f64)rdf32(0x817fdfdcu);
        wr32(0x817fdfd8u, r7);
        f3 = (f64)(f32)(f2 + f0);
        wr32(0x817fdfe0u, r6);
        f0 = (f64)rdf32(0x817fdfd8u);
        wrf32d(r8 + 0x148u, f4);
        f2 = (f64)rdf32(0x817fdfe0u);
        wrf32d(r8 + 0x134u, f0);
        f0 = (f64)(f32)(f2 + f1);
        wrf32d(r8 + 0x138u, f3);
        wrf32d(0x817fdfdcu, f3);
        wrf32d(0x817fdfe0u, f0);
        wrf32d(r8 + 0x13cu, f0);
        a.r[0] = 0x817fdfd8u;
        a.r[1] = 0x817fdfe4u;
        a.r[2] = 0x817fdfd8u;
        (void)tc_call(0x802343a4u, &a);
        a.r[0] = 0x817fdfd8u;
        f1 = tc_callf(0x80234440u, &a);
        r5 = rd32(0x8033662cu);
        r31 = 0u;
        r0 = rd32(0x80336630u);
        r7 = (rd32(0x805710e0u) * 0x6d0u) - 0x7fc2e738u;
        wr32(0x817fdfccu, rd32(0x80336628u));
        wrf32d(r7 + 0x1d8u, f1);
        wr32(0x817fdfd0u, r5);
        wr32(0x817fdfd4u, r0);
        a.r[0] = 0x817fdfcau;
        a.r[1] = 0x817fdfc8u;
        r3 = tc_call(0x80198e84u, &a);
        if (r3 != 0u) {
            if (r3 != 5u) {
                if (r3 != 3u) {
                    if (r3 == 2u) {
                        r3 = tc_call(0x80198eb8u, &a);
                        c0lt = (s32)r3 < 0;
                        if (r3 == 0u) {
                            r3 = rd32(0x804863d8u);
                            a.r[0] = r3;
                            a.r[1] = 0x5eu;
                            a.r[2] = 0u;
                            a.r[3] = 0u;
                            a.r[4] = 0u;
                            a.r[5] = 0u;
                            a.f[0] = (f64)rdf32(0x805724ccu);
                            a.f[1] = 0.0;
                            a.f[2] = 0.0;
                            a.f[3] = 0.0;
                            (void)tc_call(rd32(rd32(r3) + 0x54u), &a);
                        } else if (!c0lt && (s32)r3 < 3) {
                            r3 = rd32(0x804863d8u);
                            a.r[0] = r3;
                            a.r[1] = 0x5du;
                            a.r[2] = 0u;
                            a.r[3] = 0u;
                            a.r[4] = 0u;
                            a.r[5] = 0u;
                            a.f[0] = (f64)rdf32(0x805724ccu);
                            a.f[1] = 0.0;
                            a.f[2] = 0.0;
                            a.f[3] = 0.0;
                            (void)tc_call(rd32(rd32(r3) + 0x54u), &a);
                        }
                    }
                } else {
                    a.r[0] = rd32(0x804863d8u);
                    a.r[1] = 0u;
                    (void)tc_call(0x801a06a0u, &a);
                }
            } else {
                a.r[0] = 0x80486da8u;
                (void)tc_call(0x800b872cu, &a);
                r3 = rd32(0x804863d8u);
                f1 = (f64)rdf32(0x805724ccu);
                wr32(0x8057118cu, rd32(0x8057118cu) | 0x200u);
                a.f[0] = f1;
                a.r[0] = r3;
                a.r[1] = 1u;
                a.r[2] = 0u;
                (void)tc_call(0x800bf1d4u, &a);
                r3 = (u32)rd16(0x8049908cu);
                if (r3 == 0u) {
                    r3 = (u32)rd16(0x817fdfcau);
                    r0 = (u32)rd16(0x8049908au) - (((r3 << 2u) & 0xfffffffcu) + r3);
                    if ((s32)r0 < 0) {
                        r0 = 0u;
                    }
                    r0 = r0 & 0xffffu;
                    if (r0 >= 0xffffu) {
                        r0 = 0xffffu;
                    }
                    wr16(0x8049908au, (u16)r0);
                } else {
                    r0 = r3 - (u32)rd16(0x817fdfcau);
                    if ((s32)r0 < 0) {
                        r0 = 0u;
                    }
                    r0 = r0 & 0xffffu;
                    if (r0 >= 0x2710u) {
                        r0 = 0x2710u;
                    }
                    wr16(0x8049908cu, (u16)r0);
                }
                (void)tc_call(0x80198e9cu, &a);
                wr32((u32)param_1 + 0xcu, 1u);
                a.r[0] = rd32(0x804863d8u);
                a.r[1] = 0u;
                (void)tc_call(0x800c6440u, &a);
                a.r[0] = (rd32(0x805710e0u) * 0x6d0u) - 0x7fc2e738u;
                a.r[1] = 2u;
                (void)tc_call(0x800564f8u, &a);
                r28 = 0u;
                do {
                    a.r[0] = (rd32(0x805710e0u) * 0x6d0u) - 0x7fc2e738u;
                    (void)tc_call(0x80056604u, &a);
                    r28 = r28 + 1u;
                } while (r28 < 0x14u);
                r31 = 1u;
                if (rd32(0x8057117cu) == 3u) {
                    a.r[0] = 0x2011u;
                    r3 = tc_call(0x8014d9a4u, &a);
                    f1 = tc_lastf();
                    r0 = rd32((((r3 - 1u) << 2u) & 0xfffffffcu) - 0x7e802034u);
                    r5 = rd32((rd32(0x80471a18u) * 0x4150u) - 0x7fb92730u);
                    while (r5 != 0u) {
                        r3 = r5;
                        r5 = rd32(r5);
                        r3 = rd32(r3 + 8u);
                        if (r0 == rd32(r3 + 0x84u)) {
                            a.r[0] = r3;
                            a.r[1] = 1u;
                            a.r[2] = r5;
                            a.r[3] = 0u;
                            a.r[4] = 0u;
                            a.r[5] = 0u;
                            a.f[0] = f1;
                            a.f[1] = 0.0;
                            a.f[2] = 0.0;
                            a.f[3] = 0.0;
                            (void)tc_call(rd32(rd32(r3) + 0x4cu), &a);
                            break;
                        }
                    }
                }
            }
        } else if (rd32(0x8057117cu) == 3u) {
            a.r[0] = 0x2011u;
            r3 = tc_call(0x8014d9a4u, &a);
            f1 = tc_lastf();
            r4 = rd32((((r3 - 1u) << 2u) & 0xfffffffcu) - 0x7e802034u);
            r5 = rd32((rd32(0x80471a18u) * 0x4150u) - 0x7fb92730u);
            while (r5 != 0u) {
                r3 = r5;
                r5 = rd32(r5);
                r3 = rd32(r3 + 8u);
                if (r4 == rd32(r3 + 0x84u) && (u32)((s32)rd32(r3 + 0x80u) >> 31) != 0u) {
                    a.r[0] = r3;
                    a.r[1] = 0u;
                    a.r[2] = r5;
                    a.r[3] = 0x8046d8c8u;
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    a.f[3] = 0.0;
                    (void)tc_call(rd32(rd32(r3) + 0x4cu), &a);
                    break;
                }
            }
        }
        if (r31 == 0u) {
            a.r[0] = (u32)param_1;
            a.r[1] = 0xffffffffu;
            (void)tc_call(0x8005df40u, &a);
            a.r[0] = (u32)param_1;
            a.r[1] = 0xffffffffu;
            (void)tc_call(0x8005df48u, &a);
        } else {
            a.r[0] = (u32)param_1;
            a.r[1] = 0xfffffff8u;
            (void)tc_call(0x8005df40u, &a);
            a.r[0] = (u32)param_1;
            a.r[1] = 0xffffffffu;
            (void)tc_call(0x8005df48u, &a);
        }
    }
    return 1u;
}

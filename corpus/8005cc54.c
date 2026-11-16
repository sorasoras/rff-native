#include "tc_rt.h"

u32 fn_8005cc54(s32 param_1)
{
    u32 c0lt = 0, ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0;
    u32 r12 = 0, r28 = 0, r31 = 0, sw_ = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0;
    f64 f12 = 0.0, f13 = 0.0;
    TcArgs a = {0};
    f1 = tc_callf(0x800731ecu, &a);
    r4 = tc_lastr4();
    r0 = rd32((u32)param_1 + 0xcu);
    r31 = 1u;
    if (r0 <= 0x11u) {
        r0 = (r0 << 2u) & 0xfffffffcu;
        r3 = rd32(r0 - 0x7fcb0248u);
        sw_ = r3;
        switch (sw_) {
        case 0x8005cca0u:
            r5 = rd32(0x804863d8u);
            wr32(0x805710a0u, 0u);
            wr32(r5 + 0x9cu, rd32(r5 + 0x9cu) | 0x40000000u);
            a.r[0] = (u32)param_1;
            a.r[1] = 0x1b0u;
            (void)tc_call(0x8005df40u, &a);
            a.r[0] = (u32)param_1;
            a.r[1] = 0x37u;
            (void)tc_call(0x8005df48u, &a);
            wr32((u32)param_1 + 0x10u, 0x12u);
            r28 = 0u;
            do {
                a.r[0] = (rd32(0x805710e0u) * 0x6d0u) - 0x7fc2e738u;
                (void)tc_call(0x80056604u, &a);
                r28 = r28 + 1u;
            } while (r28 < 0x64u);
            if (rd32(0x80571190u) != 0u) {
                wr32(0x80571190u, 0u);
                a.r[0] = rd32(0x804863d8u);
                (void)tc_call(0x800c4d38u, &a);
                r3 = rd32(0x804863d8u);
                a.r[0] = r3;
                a.r[1] = tc_lastr4();
                a.r[2] = 0u;
                a.f[0] = (f64)rdf32(0x80572430u);
                a.f[1] = 0.0;
                (void)tc_call(rd32(rd32(r3) + 0x24u), &a);
                r0 = rd32(0x805706e8u);
                r3 = rd32(0x80571140u);
                c0lt = (s32)r0 < 36;
                if (r0 == 0x24u) {
                    f1 = (f64)rdf32(0x80572474u);
                    r4 = rd32(0x804863d8u);
                    f0 = (f64)rdf32(0x8057244cu);
                    wrf32d(r4 + 0x84u, f1);
                    f2 = (f64)rdf32(0x80572478u);
                    wrf32d(r4 + 0x88u, f0);
                    wrf32d(r4 + 0x8cu, f2);
                    wrf32d(r4 + 4u, f1);
                    wrf32d(r4 + 8u, f0);
                    wrf32d(r4 + 0xcu, f2);
                    if (r3 != 0u) {
                        f1 = (f64)rdf32(0x8057247cu);
                        f0 = (f64)rdf32(0x80572480u);
                        wrf32d(r3 + 0x84u, f1);
                        wrf32d(r3 + 0x88u, f0);
                        wrf32d(r3 + 0x8cu, f2);
                        wrf32d(r3 + 4u, f1);
                        wrf32d(r3 + 8u, f0);
                        wrf32d(r3 + 0xcu, f2);
                    }
                } else if (!c0lt) {
                    c0lt = (s32)r0 < 46;
                    if (r0 == 0x2eu) {
                        f2 = (f64)rdf32(0x80572498u);
                        r4 = rd32(0x804863d8u);
                        f1 = (f64)rdf32(0x80572430u);
                        wrf32d(r4 + 0x84u, f2);
                        f0 = (f64)rdf32(0x8057249cu);
                        wrf32d(r4 + 0x88u, f1);
                        wrf32d(r4 + 0x8cu, f0);
                        wrf32d(r4 + 4u, f2);
                        wrf32d(r4 + 8u, f1);
                        wrf32d(r4 + 0xcu, f0);
                        if (r3 != 0u) {
                            f1 = (f64)rdf32(0x805724a0u);
                            wrf32d(r3 + 0x84u, f2);
                            f0 = (f64)rdf32(0x805724a4u);
                            wrf32d(r3 + 0x88u, f1);
                            wrf32d(r3 + 0x8cu, f0);
                            wrf32d(r3 + 4u, f2);
                            wrf32d(r3 + 8u, f1);
                            wrf32d(r3 + 0xcu, f0);
                        }
                    } else if (c0lt && r0 == 0x28u) {
                        f2 = (f64)rdf32(0x80572484u);
                        r4 = rd32(0x804863d8u);
                        f1 = (f64)rdf32(0x80572488u);
                        wrf32d(r4 + 0x84u, f2);
                        f0 = (f64)rdf32(0x8057248cu);
                        wrf32d(r4 + 0x88u, f1);
                        wrf32d(r4 + 0x8cu, f0);
                        wrf32d(r4 + 4u, f2);
                        wrf32d(r4 + 8u, f1);
                        wrf32d(r4 + 0xcu, f0);
                        if (r3 != 0u) {
                            f1 = (f64)rdf32(0x80572490u);
                            wrf32d(r3 + 0x84u, f2);
                            f0 = (f64)rdf32(0x80572494u);
                            wrf32d(r3 + 0x88u, f1);
                            wrf32d(r3 + 0x8cu, f0);
                            wrf32d(r3 + 4u, f2);
                            wrf32d(r3 + 8u, f1);
                            wrf32d(r3 + 0xcu, f0);
                        }
                    }
                } else {
                    c0lt = (s32)r0 < 24;
                    if (r0 == 0x18u) {
                        f0 = (f64)rdf32(0x80572454u);
                        r4 = rd32(0x804863d8u);
                        f2 = (f64)rdf32(0x80572458u);
                        wrf32d(r4 + 0x84u, f0);
                        f1 = (f64)rdf32(0x8057245cu);
                        wrf32d(r4 + 0x88u, f2);
                        wrf32d(r4 + 0x8cu, f1);
                        wrf32d(r4 + 4u, f0);
                        wrf32d(r4 + 8u, f2);
                        wrf32d(r4 + 0xcu, f1);
                        if (r3 != 0u) {
                            f0 = (f64)rdf32(0x80572460u);
                            wrf32d(r3 + 0x84u, f0);
                            wrf32d(r3 + 0x88u, f2);
                            wrf32d(r3 + 0x8cu, f1);
                            wrf32d(r3 + 4u, f0);
                            wrf32d(r3 + 8u, f2);
                            wrf32d(r3 + 0xcu, f1);
                        }
                    } else if (!c0lt) {
                        if (r0 == 0x1bu) {
                            f2 = (f64)rdf32(0x80572464u);
                            r4 = rd32(0x804863d8u);
                            f1 = (f64)rdf32(0x80572468u);
                            wrf32d(r4 + 0x84u, f2);
                            f0 = (f64)rdf32(0x8057246cu);
                            wrf32d(r4 + 0x88u, f1);
                            wrf32d(r4 + 0x8cu, f0);
                            wrf32d(r4 + 4u, f2);
                            wrf32d(r4 + 8u, f1);
                            wrf32d(r4 + 0xcu, f0);
                            if (r3 != 0u) {
                                wrf32d(r3 + 0x84u, f2);
                                f0 = (f64)rdf32(0x80572470u);
                                wrf32d(r3 + 0x88u, f1);
                                wrf32d(r3 + 0x8cu, f0);
                                wrf32d(r3 + 4u, f2);
                                wrf32d(r3 + 8u, f1);
                                wrf32d(r3 + 0xcu, f0);
                            }
                        }
                    } else if (r0 == 0u) {
                        f2 = (f64)rdf32(0x8057243cu);
                        r4 = rd32(0x804863d8u);
                        f1 = (f64)rdf32(0x80572440u);
                        wrf32d(r4 + 0x84u, f2);
                        f0 = (f64)rdf32(0x80572444u);
                        wrf32d(r4 + 0x88u, f1);
                        wrf32d(r4 + 0x8cu, f0);
                        wrf32d(r4 + 4u, f2);
                        wrf32d(r4 + 8u, f1);
                        wrf32d(r4 + 0xcu, f0);
                        if (r3 != 0u) {
                            f2 = (f64)rdf32(0x80572448u);
                            f1 = (f64)rdf32(0x8057244cu);
                            wrf32d(r3 + 0x84u, f2);
                            f0 = (f64)rdf32(0x80572450u);
                            wrf32d(r3 + 0x88u, f1);
                            wrf32d(r3 + 0x8cu, f0);
                            wrf32d(r3 + 4u, f2);
                            wrf32d(r3 + 8u, f1);
                            wrf32d(r3 + 0xcu, f0);
                        }
                    }
                }
            }
            f1 = tc_callf(0x800cf350u, &a);
            if (rd32(0x805706d0u) != 7u) break;
            if (rd32((u32)param_1 + 0x28u) != 0u) {
                wr32((u32)param_1 + 0xcu, 0x11u);
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                a.r[0] = 0x803d29f8u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                r3 = tc_call(0x80097c5cu, &a);
                if (r3 != 0u) {
                    a.r[0] = rd32(0x804863d8u);
                    (void)tc_call(0x800c11d4u, &a);
                    wr32((u32)param_1 + 0xcu, 1u);
                    wr32((u32)param_1 + 0x28u, 0u);
                    wr32(0x8057118cu, rd32(0x8057118cu) | 0x100u);
                }
            } else {
                wr32((u32)param_1 + 0xcu, 1u);
                a.r[0] = rd32(0x804863d8u);
                (void)tc_call(0x80067334u, &a);
            }
            r3 = rd32(0x804863d8u);
            wr32(r3 + 0x9cu, rd32(r3 + 0x9cu) & 0xbfffffffu);
            (void)tc_call(0x800520b0u, &a);
            (void)tc_call(0x800510b0u, &a);
            break;
        case 0x8005d0a8u:
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = (u32)param_1;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            r3 = tc_call(0x8005df7cu, &a);
            r31 = r3;
            break;
        case 0x8005d108u:
            a.r[0] = (u32)param_1;
            r3 = tc_call(0x8005f108u, &a);
            r31 = r3;
            break;
        case 0x8005d194u:
            break;
        case 0x8005d128u:
            a.r[0] = (u32)param_1;
            r3 = tc_call(0x800600f8u, &a);
            r31 = r3;
            break;
        case 0x8005d0f8u:
            a.r[0] = (u32)param_1;
            r3 = tc_call(0x8005edc0u, &a);
            r31 = r3;
            break;
        case 0x8005d138u:
            a.r[0] = (u32)param_1;
            r3 = tc_call(0x8006026cu, &a);
            r31 = r3;
            break;
        case 0x8005d148u:
            a.r[0] = (u32)param_1;
            r3 = tc_call(0x8005f6a0u, &a);
            r31 = r3;
            break;
        case 0x8005d0b8u:
            a.r[0] = (u32)param_1;
            r3 = tc_call(0x8005e7b0u, &a);
            r31 = r3;
            break;
        case 0x8005d0c8u:
            a.r[0] = (u32)param_1;
            r3 = tc_call(0x8005e944u, &a);
            r31 = r3;
            break;
        case 0x8005d0d8u:
            a.r[0] = (u32)param_1;
            r3 = tc_call(0x8005e970u, &a);
            r31 = r3;
            break;
        case 0x8005d0e8u:
            a.r[0] = (u32)param_1;
            r3 = tc_call(0x8005eb60u, &a);
            r31 = r3;
            break;
        case 0x8005d118u:
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = (u32)param_1;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            r3 = tc_call(0x8005f3a4u, &a);
            r31 = r3;
            break;
        case 0x8005d158u:
            a.r[0] = (u32)param_1;
            r3 = tc_call(0x8005eaa4u, &a);
            r31 = r3;
            break;
        case 0x8005d168u:
            a.r[0] = (u32)param_1;
            r3 = tc_call(0x8005f748u, &a);
            r31 = r3;
            break;
        case 0x8005d178u:
            a.r[0] = (u32)param_1;
            r3 = tc_call(0x8005e340u, &a);
            r31 = r3;
            break;
        case 0x8005d188u:
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = (u32)param_1;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            r3 = tc_call(0x8005fb58u, &a);
            r31 = r3;
            break;
        default:
            a.r[0] = r3;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            r3 = tc_call(sw_, &a);
            r0 = 0u;
            r4 = tc_lastr4();
            r5 = 0u;
            r6 = 0u;
            r7 = 0u;
            r8 = 0u;
            r9 = 0u;
            r10 = 0u;
            r11 = 0u;
            r12 = 0u;
            f0 = 0.0;
            f2 = 0.0;
            f3 = 0.0;
            f4 = 0.0;
            f5 = 0.0;
            f6 = 0.0;
            f7 = 0.0;
            f8 = 0.0;
            f9 = 0.0;
            f10 = 0.0;
            f11 = 0.0;
            f12 = 0.0;
            f13 = 0.0;
            ctr = 0u;
            return r3;
        }
    }
    (void)tc_call(0x8007787cu, &a);
    return r31;
}

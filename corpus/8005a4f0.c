#include "tc_rt.h"

void fn_8005a4f0(s32 param_1, u32 param_2)
{
    u32 r3 = 0, r4 = 0, r26 = 0, r27 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    (void)tc_call(0x80074e5cu, &a);
    f1 = tc_callf(0x8005a414u, &a);
    r4 = tc_lastr4();
    r30 = param_2 & 0x10u;
    if (r30 != 0u) {
        a.r[0] = 0x8046d8c8u;
        f1 = tc_callf(0x8008bfc0u, &a);
        r4 = tc_lastr4();
    }
    if ((param_2 & 0x20u) != 0u) {
        r31 = rd32(0x8046adecu);
        while (r31 != 0u) {
            r3 = r31;
            r31 = rd32(r31);
            r3 = rd32(r3 + 8u);
            if ((u32)((s32)rd32(r3 + 0x74u) >> 31) != 0u) {
                a.r[0] = r3;
                a.r[1] = r4;
                a.f[0] = f1;
                f1 = tc_callf(rd32(rd32(r3) + 0xcu), &a);
                r4 = tc_lastr4();
            }
        }
    }
    if ((param_2 & 0x1000u) != 0u) {
        r31 = rd32(0x8046ad24u);
        while (r31 != 0u) {
            r3 = r31;
            r31 = rd32(r31);
            r3 = rd32(r3 + 8u);
            a.r[0] = r3;
            a.r[1] = r4;
            a.f[0] = f1;
            f1 = tc_callf(rd32(rd32(r3) + 0x14u), &a);
            r4 = tc_lastr4();
        }
        f1 = tc_callf(0x8020b384u, &a);
        r4 = tc_lastr4();
    }
    r31 = param_2 & 1u;
    if (r31 != 0u) {
        r3 = rd32(0x804863d8u);
        a.r[0] = r3;
        a.r[1] = r4;
        a.f[0] = f1;
        f1 = tc_callf(rd32(rd32(r3) + 0xcu), &a);
        r4 = tc_lastr4();
    }
    if ((param_2 & 0x2000u) != 0u) {
        r27 = rd32(0x8046d874u);
        while (r27 != 0u) {
            r3 = r27;
            r27 = rd32(r27);
            r3 = rd32(r3 + 8u);
            if ((u32)((s32)rd32(r3 + 0xd4u) >> 31) != 0u) {
                a.r[0] = r3;
                f1 = tc_callf(0x800956e8u, &a);
                r4 = tc_lastr4();
            }
        }
    }
    if ((param_2 & 2u) != 0u) {
        r27 = rd32(0x8046b7e4u);
        while (r27 != 0u) {
            r3 = r27;
            r27 = rd32(r27);
            r3 = rd32(r3 + 8u);
            if ((u32)((s32)rd32(r3 + 0x9cu) >> 31) != 0u) {
                a.r[0] = r3;
                a.r[1] = r4;
                a.f[0] = f1;
                f1 = tc_callf(rd32(rd32(r3) + 0xcu), &a);
                r4 = tc_lastr4();
            }
        }
        f1 = tc_callf(0x8020e46cu, &a);
        r4 = tc_lastr4();
        r3 = rd32(0x80571140u);
        if (r3 != 0u && (u32)((s32)rd32(r3 + 0x9cu) >> 31) != 0u) {
            a.r[0] = r3;
            a.r[1] = r4;
            a.f[0] = f1;
            f1 = tc_callf(rd32(rd32(r3) + 0xcu), &a);
            r4 = tc_lastr4();
        }
    }
    if ((param_2 & 4u) != 0u) {
        f1 = tc_callf(0x800b5bf0u, &a);
        r4 = tc_lastr4();
        r27 = rd32(0x8046ad74u);
        while (r27 != 0u) {
            r3 = r27;
            r27 = rd32(r27);
            r26 = rd32(r3 + 8u);
            if ((u32)((s32)rd32(r26 + 0x9cu) >> 31) != 0u) {
                a.r[0] = r26;
                a.r[1] = r4;
                a.f[0] = f1;
                r3 = tc_call(rd32(rd32(r26) + 0x140u), &a);
                f1 = tc_lastf();
                r4 = tc_lastr4();
                if (r3 == 0u) {
                    a.r[0] = r26;
                    a.r[1] = r4;
                    a.f[0] = f1;
                    f1 = tc_callf(rd32(rd32(r26) + 0xcu), &a);
                    r4 = tc_lastr4();
                }
            }
        }
        f1 = tc_callf(0x800b5e20u, &a);
        r4 = tc_lastr4();
    }
    if (r31 != 0u) {
        a.r[0] = 0x8046d8c8u;
        f1 = tc_callf(0x8008c04cu, &a);
        r4 = tc_lastr4();
    }
    if (r30 != 0u) {
        r26 = rd32(0x8046adc4u);
        while (r26 != 0u) {
            r3 = r26;
            r26 = rd32(r26);
            r3 = rd32(r3 + 8u);
            if (rd32(r3 + 0x7cu) != 0u) {
                a.r[0] = r3;
                a.r[1] = r4;
                a.f[0] = f1;
                f1 = tc_callf(rd32(rd32(r3) + 0xcu), &a);
                r4 = tc_lastr4();
            }
        }
        f1 = tc_callf(0x80077c40u, &a);
    }
    if ((param_2 & 0x8000u) != 0u) {
        f1 = tc_callf(0x800cf30cu, &a);
    }
    if ((param_2 & 0x100u) != 0u) {
        a.r[0] = (rd32(0x805710e0u) * 0x6d0u) - 0x7fc2e738u;
        f1 = tc_callf(0x80056604u, &a);
    }
    if (rd32((u32)param_1 + 0xbcu) != 0u) {
        a.r[0] = rd32((rd32(0x80471a18u) * 0x4150u) - 0x7fb92738u);
        r3 = tc_call(0x8007d150u, &a);
        if (r3 != 0u) {
            r4 = rd32(r3 + 4u);
        } else {
            r4 = 3u;
        }
        a.r[0] = (u32)param_1;
        a.r[1] = r4;
        f1 = tc_callf(0x8005c0e4u, &a);
    }
    if ((param_2 & 0x80u) != 0u) {
        a.r[0] = 0x80486da8u;
        f1 = tc_callf(0x800b86c8u, &a);
    }
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    a.r[6] = 0u;
    a.r[7] = 0u;
    (void)tc_call(0x800cf25cu, &a);
    if ((param_2 & 0x4000u) != 0u) {
        a.r[0] = 0x803d29f8u;
        (void)tc_call(0x80096e6cu, &a);
    }
    if ((param_2 & 0x40u) != 0u) {
        (void)tc_call(0x80069f38u, &a);
        (void)tc_call(0x800773a8u, &a);
        a.r[0] = 0x80475e24u;
        (void)tc_call(0x8017bf30u, &a);
        (void)tc_call(0x800d85dcu, &a);
    }
    return;
}

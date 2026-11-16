#include "tc_rt.h"

void fn_8005a814(u32 param_1, u32 param_2)
{
    u32 r3 = 0, r4 = 0, r28 = 0, r29 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    (void)param_1;
    r4 = param_2;
    r31 = param_2 & 0x10u;
    if (r31 != 0u) {
        a.r[0] = 0x8046d8c8u;
        (void)tc_call(0x8008bf34u, &a);
        a.r[0] = 0x80471ed0u;
        f1 = tc_callf(0x800914c4u, &a);
        r4 = tc_lastr4();
    }
    if ((param_2 & 0x20u) != 0u) {
        r29 = rd32(0x8046adecu);
        while (r29 != 0u) {
            r3 = r29;
            r29 = rd32(r29);
            r3 = rd32(r3 + 8u);
            if ((u32)((s32)rd32(r3 + 0x74u) >> 31) != 0u) {
                a.r[0] = r3;
                a.r[1] = r4;
                a.f[0] = f1;
                f1 = tc_callf(rd32(rd32(r3) + 0x10u), &a);
                r4 = tc_lastr4();
            }
        }
    }
    r29 = param_2 & 2u;
    if (r29 != 0u) {
        r3 = rd32(0x80571140u);
        if (r3 != 0u && (u32)((s32)rd32(r3 + 0x9cu) >> 31) != 0u) {
            a.r[0] = r3;
            a.r[1] = r4;
            a.f[0] = f1;
            f1 = tc_callf(rd32(rd32(r3) + 0x10u), &a);
            r4 = tc_lastr4();
        }
    }
    if ((param_2 & 1u) != 0u) {
        r3 = rd32(0x804863d8u);
        a.r[0] = r3;
        a.r[1] = r4;
        a.f[0] = f1;
        f1 = tc_callf(rd32(rd32(r3) + 0x10u), &a);
        r4 = tc_lastr4();
    }
    if (r29 != 0u) {
        r29 = rd32(0x8046b7e4u);
        while (r29 != 0u) {
            r3 = r29;
            r29 = rd32(r29);
            r3 = rd32(r3 + 8u);
            if ((u32)((s32)rd32(r3 + 0x9cu) >> 31) != 0u) {
                a.r[0] = r3;
                a.r[1] = r4;
                a.f[0] = f1;
                f1 = tc_callf(rd32(rd32(r3) + 0x10u), &a);
                r4 = tc_lastr4();
            }
        }
        f1 = tc_callf(0x8020e4e4u, &a);
        r4 = tc_lastr4();
    }
    if ((param_2 & 4u) != 0u) {
        r29 = rd32(0x8046ad74u);
        while (r29 != 0u) {
            r3 = r29;
            r29 = rd32(r29);
            r28 = rd32(r3 + 8u);
            if ((u32)((s32)rd32(r28 + 0x9cu) >> 31) != 0u) {
                a.r[0] = r28;
                a.r[1] = r4;
                a.f[0] = f1;
                r3 = tc_call(rd32(rd32(r28) + 0x140u), &a);
                f1 = tc_lastf();
                r4 = tc_lastr4();
                if (r3 == 0u) {
                    a.r[0] = r28;
                    a.r[1] = r4;
                    a.f[0] = f1;
                    f1 = tc_callf(rd32(rd32(r28) + 0x10u), &a);
                    r4 = tc_lastr4();
                }
            }
        }
    }
    if (r31 != 0u) {
        r28 = rd32(0x8046adc4u);
        while (r28 != 0u) {
            r3 = r28;
            r28 = rd32(r28);
            r3 = rd32(r3 + 8u);
            if (rd32(r3 + 0x7cu) != 0u) {
                a.r[0] = r3;
                a.r[1] = r4;
                a.f[0] = f1;
                f1 = tc_callf(rd32(rd32(r3) + 0x10u), &a);
                r4 = tc_lastr4();
            }
        }
    }
    if ((param_2 & 0x40u) != 0u) {
        a.r[0] = 0x80475e24u;
        (void)tc_call(0x8017c28cu, &a);
    }
    return;
}

#include "tc_rt.h"

void fn_8013cd18(s32 param_1)
{
    u32 c0lt = 0, ctr = 0, r3 = 0, r4 = 0, r5 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r3 = tc_call(0x800a7854u, &a);
    if (r3 != 0u) {
        r4 = 0x80363df8u;
        r5 = 0u;
        ctr = 4u;
        do {
            if ((u32)param_1 == rd32(r4)) {
                r3 = r3 + (rd32(((r5 << 3u) & 0xfffffff8u) - 0x7fc9c204u) * 0xacu) + 0x29cu;
                if (r3 != 0u) {
                    r3 = rd32(r3 + 0x74u);
                    if (r3 != 0x2e8u) {
                        a.r[0] = r3;
                        a.r[1] = 0u;
                        (void)tc_call(0x800a796cu, &a);
                        return;
                    }
                }
                a.r[0] = 0x2e8u;
                a.r[1] = 0u;
                (void)tc_call(0x800a796cu, &a);
                return;
            }
            r4 = r4 + 8u;
            r5 = r5 + 1u;
            ctr = ctr - 1u;
        } while (ctr != 0u);
        c0lt = param_1 < 116;
        if ((u32)param_1 == 0x74u) {
            r3 = rd32(r3 + 0xa48u);
            if (r3 == 0u) {
                r3 = 0x2e8u;
            } else {
                r3 = rd32(r3 + 0x74u);
            }
            if ((s32)r3 < 0 || (s32)r3 >= 744) {
                a.r[0] = 0x2e8u;
                a.r[1] = 0u;
                (void)tc_call(0x800a796cu, &a);
            } else {
                a.r[0] = r3;
                a.r[1] = 0u;
                (void)tc_call(0x800a796cu, &a);
            }
        } else if (!c0lt) {
            if (param_1 < 118) {
                r3 = rd32(0x804863d8u);
                r31 = rd32(r3 + 0xa48u);
                if (r31 != 0u) {
                    a.r[0] = r3;
                    f1 = tc_callf(0x800c4a78u, &a);
                    a.r[0] = r31;
                    a.r[1] = tc_lastr4();
                    a.r[2] = 0u;
                    a.f[0] = f1;
                    f1 = tc_callf(rd32(rd32(r31) + 0x18u), &a);
                    if (r31 != 0u) {
                        a.r[0] = r31;
                        a.r[1] = 1u;
                        a.r[2] = 0u;
                        a.f[0] = f1;
                        (void)tc_call(rd32(rd32(r31) + 8u), &a);
                    }
                }
            }
        } else if ((u32)param_1 == 0x6eu) {
            r3 = r3 + 0x54cu;
            if (r3 != 0u) {
                r3 = rd32(r3 + 0x74u);
                if (r3 != 0x2e8u) {
                    a.r[0] = r3;
                    a.r[1] = 0u;
                    (void)tc_call(0x800a796cu, &a);
                    return;
                }
            }
            a.r[0] = 0x2e8u;
            a.r[1] = 0u;
            (void)tc_call(0x800a796cu, &a);
        }
    } else {
        a.r[0] = 0x2e8u;
        a.r[1] = 0u;
        (void)tc_call(0x800a796cu, &a);
    }
    return;
}

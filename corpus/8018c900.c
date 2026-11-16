#include "tc_rt.h"

u32 fn_8018c900(u32 param_1)
{
    u32 r0 = 0, r3 = 0, r5 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r3 = tc_call(0x80097da4u, &a);
    r3 = rd32(r3);
    a.r[0] = r3;
    a.r[1] = 0x9fu;
    r3 = tc_call(0x800a3168u, &a);
    if (r3 != 0u) {
        r3 = tc_call(0x80097da4u, &a);
        r3 = rd32(r3);
        a.r[0] = r3;
        a.r[1] = 0x9fu;
        a.r[2] = 0u;
        (void)tc_call(0x800a31c0u, &a);
        a.r[0] = param_1 + 0x44u;
        r3 = tc_call(0x80255850u, &a);
        f1 = tc_lastf();
        if (r3 == 0u) {
            r0 = rd32(0x8036fea0u);
            wr32(param_1 + 0x38u, rd32(0x8036fe9cu));
            wr32(param_1 + 0x3cu, r0);
            wr32(param_1 + 0x40u, rd32(0x8036fea4u));
        } else {
            r3 = rd32(param_1 + 0x48u);
            r0 = rd32(param_1 + 0x4cu);
            wr32(param_1 + 0x38u, rd32(param_1 + 0x44u));
            wr32(param_1 + 0x3cu, r3);
            wr32(param_1 + 0x40u, r0);
            r0 = rd32(0x8033caa4u);
            wr32(param_1 + 0x44u, rd32(0x8033caa0u));
            wr32(param_1 + 0x48u, r0);
            wr32(param_1 + 0x4cu, rd32(0x8033caa8u));
        }
        r5 = rd32(0x804863d8u);
        wr32(r5 + 0x9cu, rd32(r5 + 0x9cu) | 0x40000000u);
        a.r[0] = param_1;
        a.r[1] = 0u;
        a.r[2] = r5;
        a.f[0] = f1;
        (void)tc_call(rd32(rd32(param_1) + 0x40u), &a);
    }
    return 1u;
}

#include "tc_rt.h"

void fn_800b8524(u32 param_1)
{
    u32 r0 = 0, r3 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = 0u;
    (void)tc_call(0x8025326cu, &a);
    a.r[0] = 1u;
    (void)tc_call(0x8025326cu, &a);
    a.r[0] = 2u;
    (void)tc_call(0x8025326cu, &a);
    a.r[0] = 3u;
    f1 = tc_callf(0x8025326cu, &a);
    if ((rd32(param_1) & 1u) != 0u) {
        a.r[0] = param_1;
        f1 = tc_callf(0x800baefcu, &a);
    }
    if ((rd32(param_1) & 2u) != 0u) {
        r3 = rd32(0x80571140u);
        if (r3 != 0u) {
            r0 = rd32(r3 + 0x1bcu);
            if (r0 != 0x60u && r0 != 0x61u) {
                a.r[0] = param_1;
                f1 = tc_callf(0x800bb0ccu, &a);
            }
        }
    }
    if ((rd32(param_1) & 4u) != 0u) {
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = param_1;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        (void)tc_call(0x800bac9cu, &a);
    }
    if ((rd32(param_1) & 8u) != 0u) {
        a.r[0] = param_1;
        (void)tc_call(0x800bbc34u, &a);
    }
    if ((rd32(param_1) & 0x10u) != 0u) {
        r0 = 0u;
        r3 = rd32(rd32(0x804863d8u) + 0x5c0u);
        if ((s32)r3 >= 630 && (s32)r3 <= 634) {
            r0 = 1u;
        }
        if (r0 != 0u) {
            a.r[0] = param_1;
            (void)tc_call(0x800bc86cu, &a);
        }
    }
    if ((rd32(param_1) & 0x20u) != 0u) {
        a.r[0] = param_1;
        (void)tc_call(0x800bd47cu, &a);
        a.r[0] = param_1;
        (void)tc_call(0x800be018u, &a);
    }
    if ((rd32(0x8057118cu) & 0x4000u) != 0u) {
        a.r[0] = param_1;
        (void)tc_call(0x800be544u, &a);
    }
    if (((rd32(param_1) & 0x40u) != 0u && rd32(param_1 + 0x1520u) != 0u) && rd32(param_1 + 0x10u) == 0u) {
        a.r[0] = param_1;
        (void)tc_call(0x800bccb4u, &a);
    }
    r3 = tc_call(0x80194c94u, &a);
    if ((r3 & 0xffu) != 0u) {
        (void)tc_call(0x80194c88u, &a);
    }
    r3 = tc_call(0x801e8a08u, &a);
    if ((r3 & 0xffu) != 0u) {
        (void)tc_call(0x801e89fcu, &a);
    }
    if ((u32)rd8(0x804c093cu) != 8u) {
        (void)tc_call(0x801733e0u, &a);
    }
    r3 = tc_call(0x80224e8cu, &a);
    if ((r3 & 0xffu) != 0u) {
        (void)tc_call(0x80224e80u, &a);
    }
    a.r[0] = param_1 + 0x1f34u;
    (void)tc_call(0x801caa7cu, &a);
    return;
}

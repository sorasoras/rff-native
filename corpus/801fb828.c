#include "tc_rt.h"

void fn_801fb828(s32 param_1)
{
    u32 r3 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r31 = 0u;
    a.r[0] = (u32)param_1 + 0x27cu;
    r3 = tc_call(0x800f84d0u, &a);
    f1 = tc_lastf();
    if (r3 != 0u) {
        a.r[0] = (u32)param_1 + 0x27cu;
        r3 = tc_call(0x800f84d0u, &a);
        f1 = tc_lastf();
        if (r3 != 3u) {
            a.r[0] = (u32)param_1 + 0x27cu;
            r3 = tc_call(0x800f84d0u, &a);
            f1 = tc_lastf();
            if (r3 == 4u) {
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                a.r[0] = 0x804de14cu;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                (void)tc_call(0x801f4324u, &a);
                a.r[0] = (u32)param_1 + 0x27cu;
                a.r[1] = 6u;
                (void)tc_call(0x800f8544u, &a);
                r31 = 1u;
            }
        } else {
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = 0x804de14cu;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            (void)tc_call(0x801f4400u, &a);
            a.r[0] = (u32)param_1 + 0x27cu;
            a.r[1] = 6u;
            (void)tc_call(0x800f8544u, &a);
            r31 = 1u;
        }
    } else {
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = 0x804de14cu;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        r3 = tc_call(0x801f4324u, &a);
        a.r[0] = r3;
        r3 = tc_call(0x801f4704u, &a);
        if (r3 != 0u) {
            a.r[0] = (u32)param_1 + 0x27cu;
            a.r[1] = 2u;
            (void)tc_call(0x800f8544u, &a);
            r31 = 1u;
        }
    }
    if (r31 == 0u) {
        a.r[0] = 0x804b9da0u;
        a.r[1] = 4u;
        (void)tc_call(0x8010a75cu, &a);
    } else {
        a.r[0] = 0x804b9da0u;
        a.r[1] = 0xfadu;
        (void)tc_call(0x8010a75cu, &a);
        a.r[0] = (u32)param_1 + 0x194u;
        (void)tc_call(0x801e63e8u, &a);
    }
    return;
}

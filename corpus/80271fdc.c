#include "tc_rt.h"

static void px_rec(u32 sp_, u32 param_1, u32 param_2, u32 param_3)
{
    u32 r1 = 0, r3 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(sp_ - 0x220u, sp_);
    r1 = sp_ - 0x220u;
    wr32(r1 + 0x224u, 0x817ff000u);
    wr32(r1 + 0x21cu, 0u);
    wr32(r1 + 0x218u, 0u);
    wr32(r1 + 0x214u, 0u);
    a.r[0] = param_3;
    r3 = tc_call(0x802550d4u, &a);
    if (r3 == 0u) {
        a.r[0] = param_1;
        a.r[1] = param_2;
        (void)tc_call(0x8025bd34u, &a);
    } else {
        a.r[0] = r1 + 0x188u;
        a.r[1] = r1 + 0x108u;
        a.r[2] = param_3;
        (void)tc_call(0x80271f08u, &a);
        a.r[0] = r1 + 0x188u;
        a.r[1] = 0x80570c4cu;
        r3 = tc_call(0x8025beb0u, &a);
        if (r3 == 0u) {
            px_rec(r1, param_1, param_2, r1 + 0x108u);
        } else {
            a.r[0] = r1 + 0x188u;
            a.r[1] = 0x80570c50u;
            r3 = tc_call(0x8025beb0u, &a);
            if (r3 == 0u) {
                a.r[0] = r1 + 0x88u;
                a.r[1] = param_2;
                (void)tc_call(0x80271e34u, &a);
                px_rec(r1, param_1, r1 + 0x88u, r1 + 0x108u);
            } else {
                if ((u32)(s8)rd8(r1 + 0x188u) != 0u) {
                    a.r[0] = param_2;
                    a.r[1] = 0x80570c44u;
                    r3 = tc_call(0x8025beb0u, &a);
                    f1 = tc_lastf();
                    if (r3 == 0u) {
                        a.f[0] = f1;
                        a.f[1] = 0.0;
                        a.f[2] = 0.0;
                        a.f[3] = 0.0;
                        a.f[4] = 0.0;
                        a.f[5] = 0.0;
                        a.f[6] = 0.0;
                        a.f[7] = 0.0;
                        a.r[0] = r1 + 8u;
                        a.r[1] = 0x80570c54u;
                        a.r[2] = r1 + 0x188u;
                        a.r[3] = 0u;
                        a.r[4] = 0u;
                        a.r[5] = 0u;
                        a.r[6] = 0u;
                        a.r[7] = 0u;
                        (void)tc_call(0x8025b994u, &a);
                    } else {
                        a.f[0] = f1;
                        a.f[1] = 0.0;
                        a.f[2] = 0.0;
                        a.f[3] = 0.0;
                        a.f[4] = 0.0;
                        a.f[5] = 0.0;
                        a.f[6] = 0.0;
                        a.f[7] = 0.0;
                        a.r[0] = r1 + 8u;
                        a.r[1] = 0x80570c58u;
                        a.r[2] = param_2;
                        a.r[3] = r1 + 0x188u;
                        a.r[4] = 0u;
                        a.r[5] = 0u;
                        a.r[6] = 0u;
                        a.r[7] = 0u;
                        (void)tc_call(0x8025b994u, &a);
                    }
                    px_rec(r1, param_1, r1 + 8u, r1 + 0x108u);
                } else {
                    a.r[0] = param_1;
                    a.r[1] = param_2;
                    (void)tc_call(0x8025bd34u, &a);
                }
            }
        }
    }
    return;
}

void fn_80271fdc(u32 param_1, u32 param_2, u32 param_3)
{
    px_rec(0x817fe000u, param_1, param_2, param_3);
}

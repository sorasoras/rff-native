#include "tc_rt.h"

u32 fn_802f8a08(s32 param_1, s32 param_2, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r7, u32 param_r8, u32 param_r9)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fde80u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    a.f[0] = param_f1;
    a.f[1] = param_f2;
    a.f[2] = param_f3;
    a.f[3] = param_f4;
    a.f[4] = param_f5;
    a.f[5] = param_f6;
    a.f[6] = param_f7;
    a.f[7] = param_f8;
    a.r[0] = (u32)param_2;
    a.r[4] = param_r7;
    a.r[5] = param_r8;
    a.r[6] = param_r9;
    a.r[7] = param_r10;
    r3 = tc_call(0x8023456cu, &a);
    if ((s32)r3 >= 0) {
        a.r[0] = r3;
        a.r[1] = (u32)param_1 + 0x14cu;
        r3 = tc_call(0x80234874u, &a);
        f1 = tc_lastf();
        if (r3 != 0u) {
            wr8((u32)param_1 + 0x188u, 1u);
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = (u32)param_1 + 0x14cu;
            a.r[1] = 0x817fdea0u;
            a.r[2] = 0x40u;
            a.r[3] = 0u;
            a.r[4] = 2u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            r3 = tc_call(0x80234ea0u, &a);
            if (r3 == 0x40u) {
                a.r[0] = (u32)param_1 + 0x108u;
                a.r[1] = 0x817fdea0u;
                (void)tc_call(0x80301a3cu, &a);
                a.r[0] = (u32)param_1;
                a.r[1] = (u32)param_1 + 0x108u;
                (void)tc_call(0x80301494u, &a);
                r0 = 1u;
            } else {
                r0 = 0u;
            }
        } else {
            r0 = 0u;
        }
        if (r0 != 0u) {
            a.r[0] = (u32)param_2;
            r3 = tc_call(0x802550d4u, &a);
            r31 = r3 - 1u;
            r3 = (u32)param_2 + r31;
            ctr = r31 + 1u;
            if ((s32)r31 < 0) {
                r3 = 1u;
            } else {
                for (;;) {
                    r0 = (u32)(s8)rd8(r3);
                    if (r0 == 0x2fu || r0 == 0x5cu) break;
                    r31 = r31 - 1u;
                    r3 = r3 - 1u;
                    ctr = ctr - 1u;
                    if (ctr == 0u) {
                        r3 = 1u;
                        return r3;
                    }
                }
                if ((s32)r31 < 256) {
                    a.r[0] = 0x817fdef0u;
                    a.r[1] = (u32)param_2;
                    a.r[2] = r31;
                    (void)tc_call(0x8025bdf4u, &a);
                    wr8(r31 - 0x7e802110u, 0u);
                    a.r[0] = (u32)param_1;
                    a.r[1] = 0x817fdef0u;
                    (void)tc_call(0x8030199cu, &a);
                    r3 = 1u;
                } else {
                    r3 = 0u;
                }
            }
        } else {
            r3 = 0u;
        }
    } else {
        r3 = 0u;
    }
    return r3;
}

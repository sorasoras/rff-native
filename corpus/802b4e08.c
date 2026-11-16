#include "tc_rt.h"

void fn_802b4e08(u32 param_1, u32 param_2, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r7, u32 param_r8, u32 param_r9)
{
    u32 r3 = 0, r4 = 0, r12 = 0, r30 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    if ((u32)rd8(0x80545c50u) >= 4u) {
        a.f[0] = param_f1;
        a.f[1] = param_f2;
        a.f[2] = param_f3;
        a.f[3] = param_f4;
        a.f[4] = param_f5;
        a.f[5] = param_f6;
        a.f[6] = param_f7;
        a.f[7] = param_f8;
        a.r[0] = 0xa0003u;
        a.r[1] = 0x80397ca8u;
        a.r[2] = param_1;
        a.r[3] = (u32)rd16(param_2);
        a.r[4] = param_r7;
        a.r[5] = param_r8;
        a.r[6] = param_r9;
        a.r[7] = param_r10;
        (void)tc_call(0x8028cc84u, &a);
    }
    a.r[0] = param_1;
    r3 = tc_call(0x802b6154u, &a);
    f1 = tc_lastf();
    r4 = tc_lastr4();
    r30 = r3;
    if (r3 == 0u) {
        if ((u32)rd8(0x80545c50u) < 2u) {
            return;
        }
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = 0xa0001u;
        a.r[1] = 0x80397c50u;
        a.r[2] = param_1;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        (void)tc_call(0x8028cc6cu, &a);
    } else {
        if ((u32)rd16(param_2) == 0u) {
            r4 = (u32)rd8(r3 + 1u) | 4u;
            wr8(r3 + 1u, (u8)r4);
            if ((r4 & 2u) == 0u) {
                return;
            }
            wr8(r3, 3u);
            if (((u32)rd8(r3 + 1u) & 1u) != 0u) {
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                a.r[0] = r3;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                (void)tc_call(0x802b387cu, &a);
                return;
            }
            r3 = r3 + 8u;
            a.r[0] = r3;
            a.r[1] = 5u;
            a.r[2] = 0x1eu;
            (void)tc_call(0x8028d220u, &a);
        } else {
            if ((u32)rd8(0x80545c50u) >= 4u) {
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                a.r[0] = 0xa0003u;
                a.r[1] = 0x80397cd4u;
                a.r[2] = (u32)rd16(r3 + 0x22u);
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                f1 = tc_callf(0x8028cc6cu, &a);
                r4 = tc_lastr4();
            }
            if ((u32)rd8(r30) != 1u) {
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                a.r[0] = (u32)rd16(r30 + 0x22u);
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                (void)tc_call(0x802a5cecu, &a);
                wr16(r30 + 0x472u, 0xfff2u);
            } else {
                r12 = rd32(r30 + 0x414u);
                if (r12 != 0u) {
                    a.r[0] = 0xfff2u;
                    a.r[1] = r4;
                    a.r[2] = 0u;
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    a.r[6] = 0u;
                    a.r[7] = 0u;
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    a.f[3] = 0.0;
                    a.f[4] = 0.0;
                    a.f[5] = 0.0;
                    a.f[6] = 0.0;
                    a.f[7] = 0.0;
                    (void)tc_call(r12, &a);
                }
                a.r[0] = r30;
                (void)tc_call(0x802b6258u, &a);
            }
        }
    }
    return;
}

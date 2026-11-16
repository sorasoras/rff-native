#include "tc_rt.h"

u32 fn_802b5150(u32 param_1)
{
    u32 r3 = 0, r30 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r3 = tc_call(0x802b61e4u, &a);
    f1 = tc_lastf();
    r30 = r3;
    if (r3 == 0u) {
        if ((u32)rd8(0x80545c50u) >= 2u) {
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = 0xa0001u;
            a.r[1] = 0x80397da4u;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            (void)tc_call(0x8028cc54u, &a);
        }
        r3 = 0u;
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
            a.r[1] = 0x80397dc0u;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            (void)tc_call(0x8028cc54u, &a);
        }
        wr8(r30 + 1u, (u8)((u32)rd8(r30 + 1u) | 1u));
        a.r[0] = r30 + 2u;
        a.r[1] = param_1;
        a.r[2] = 6u;
        f1 = tc_callf(0x80004338u, &a);
        wr8(r30, 1u);
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = 1u;
        a.r[1] = param_1;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        r3 = tc_call(0x802a57a0u, &a);
        f1 = tc_lastf();
        if ((r3 & 0xffffu) != 0u) {
            wr16(r30 + 0x22u, (u16)r3);
            r3 = r30;
        } else {
            if ((u32)rd8(0x80545c50u) >= 2u) {
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                a.r[0] = 0xa0001u;
                a.r[1] = 0x80397dd8u;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                (void)tc_call(0x8028cc54u, &a);
            }
            a.r[0] = r30;
            (void)tc_call(0x802b6258u, &a);
            r3 = 0u;
        }
    }
    return r3;
}

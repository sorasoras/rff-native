#include "tc_rt.h"

void fn_802b48d8(void)
{
    u32 r3 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = 0x80541620u;
    a.r[1] = 0u;
    a.r[2] = 0x4634u;
    f1 = tc_callf(0x8000443cu, &a);
    wr16(0x80541624u, 0x100u);
    wr8(0x80541622u, 1u);
    wr8(0x80541640u, 1u);
    wr16(0x80541642u, 0xffffu);
    wr16(0x80545c4cu, 0xf0u);
    wr16(0x80545c4eu, 0x15u);
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    a.r[0] = 0u;
    a.r[1] = 0x80397b18u;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 1u;
    a.r[5] = 0u;
    a.r[6] = 0u;
    r3 = tc_call(0x8029a7c8u, &a);
    f1 = tc_lastf();
    if ((r3 & 0xffu) == 0u) {
        if ((u32)rd8(0x80545c50u) < 1u) {
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
        a.r[0] = 0xa0000u;
        a.r[1] = 0x80397b2cu;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        (void)tc_call(0x8028cc54u, &a);
    } else {
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = 1u;
        a.r[1] = 0x80397b18u;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 1u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        r3 = tc_call(0x8029a7c8u, &a);
        f1 = tc_lastf();
        if ((r3 & 0xffu) == 0u) {
            if ((u32)rd8(0x80545c50u) < 1u) {
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
            a.r[0] = 0xa0000u;
            a.r[1] = 0x80397b50u;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            (void)tc_call(0x8028cc54u, &a);
        } else {
            wr8(0x80545c50u, 0u);
            wr32(0x80545c24u, 0x802b4a78u);
            wr32(0x80545c28u, 0x802b4b3cu);
            wr32(0x80545c2cu, 0u);
            wr32(0x80545c30u, 0x802b4cccu);
            wr32(0x80545c34u, 0x802b4e08u);
            wr32(0x80545c38u, 0x802b4f84u);
            wr32(0x80545c3cu, 0x802b5300u);
            wr32(0x80545c40u, 0u);
            wr32(0x80545c44u, 0x802b507cu);
            wr32(0x80545c48u, 0u);
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = 1u;
            a.r[1] = 0x80545c24u;
            a.r[3] = 0x802b5300u;
            a.r[4] = 0x802b4f84u;
            a.r[5] = 0x802b4e08u;
            a.r[6] = 0x802b4cccu;
            a.r[7] = 0x802b4b3cu;
            r3 = tc_call(0x802a5574u, &a);
            f1 = tc_lastf();
            if ((r3 & 0xffu) == 0u && (u32)rd8(0x80545c50u) >= 1u) {
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                a.r[0] = 0xa0000u;
                a.r[1] = 0x80397b78u;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                (void)tc_call(0x8028cc54u, &a);
            }
        }
    }
    return;
}

#include "tc_rt.h"

u32 fn_802a3534(f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r7, u32 param_r8, u32 param_r9)
{
    u32 r3 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr8(0x8054095eu, 1u);
    wr16(0x80540960u, 0x280u);
    wr8(0x8054097cu, 1u);
    wr16(0x8054097eu, 0xffffu);
    a.f[0] = param_f1;
    a.f[1] = param_f2;
    a.f[2] = param_f3;
    a.f[3] = param_f4;
    a.f[4] = param_f5;
    a.f[5] = param_f6;
    a.f[6] = param_f7;
    a.f[7] = param_f8;
    a.r[0] = 0x11u;
    a.r[1] = 0x80348458u;
    a.r[3] = 1u;
    a.r[4] = param_r7;
    a.r[5] = param_r8;
    a.r[6] = param_r9;
    a.r[7] = param_r10;
    r3 = tc_call(0x802a5574u, &a);
    f1 = tc_lastf();
    if ((r3 & 0xffu) == 0u) {
        if ((u32)rd8(0x80540a19u) >= 1u) {
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = 0x1e0000u;
            a.r[1] = 0x803951c8u;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            (void)tc_call(0x8028cc54u, &a);
        }
        r3 = 0xeu;
    } else {
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = 0x13u;
        a.r[1] = 0x80348458u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        r3 = tc_call(0x802a5574u, &a);
        f1 = tc_lastf();
        if ((r3 & 0xffu) == 0u) {
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = 0x11u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            f1 = tc_callf(0x802a5710u, &a);
            if ((u32)rd8(0x80540a19u) >= 1u) {
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                a.r[0] = 0x1e0000u;
                a.r[1] = 0x803951e8u;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                (void)tc_call(0x8028cc54u, &a);
            }
            r3 = 0xeu;
        } else {
            r3 = 0u;
            wr8(0x80540618u, 0u);
            wr8(0x80540628u, 0u);
            wr8(0x8054064cu, 0u);
            wr8(0x8054065cu, 0u);
            wr8(0x80540680u, 0u);
            wr8(0x80540690u, 0u);
            wr8(0x805406b4u, 0u);
            wr8(0x805406c4u, 0u);
            wr8(0x805406e8u, 0u);
            wr8(0x805406f8u, 0u);
            wr8(0x8054071cu, 0u);
            wr8(0x8054072cu, 0u);
            wr8(0x80540750u, 0u);
            wr8(0x80540760u, 0u);
            wr8(0x80540784u, 0u);
            wr8(0x80540794u, 0u);
            wr8(0x805407b8u, 0u);
            wr8(0x805407c8u, 0u);
            wr8(0x805407ecu, 0u);
            wr8(0x805407fcu, 0u);
            wr8(0x80540820u, 0u);
            wr8(0x80540830u, 0u);
            wr8(0x80540854u, 0u);
            wr8(0x80540864u, 0u);
            wr8(0x80540888u, 0u);
            wr8(0x80540898u, 0u);
            wr8(0x805408bcu, 0u);
            wr8(0x805408ccu, 0u);
            wr8(0x805408f0u, 0u);
            wr8(0x80540900u, 0u);
            wr8(0x80540924u, 0u);
            wr8(0x80540934u, 0u);
        }
    }
    return r3;
}

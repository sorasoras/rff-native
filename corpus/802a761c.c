#include "tc_rt.h"

void fn_802a761c(u32 param_1)
{
    u32 r0 = 0, r3 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = 2u;
    r3 = tc_call(0x8028a274u, &a);
    r30 = r3;
    if (r3 != 0u) {
        a.r[0] = param_1;
        r3 = tc_call(0x802a99acu, &a);
        f1 = tc_lastf();
        r31 = r3;
        if (r3 == 0u) {
            a.r[0] = param_1;
            r3 = tc_call(0x802a97d8u, &a);
            r31 = r3;
            if (r3 == 0u) {
                a.r[0] = r30;
                a.r[1] = param_1;
                a.r[2] = 0x14u;
                f1 = tc_callf(0x8029ff48u, &a);
                if ((u32)rd8(0x80540a20u) < 1u) {
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
                a.r[0] = 0x80000u;
                a.r[1] = 0x80396578u;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                (void)tc_call(0x8028cc54u, &a);
                return;
            }
            r3 = tc_call(0x802a9ac4u, &a);
            wr8(r31 + 0x30u, (u8)r3);
            a.r[0] = r30;
            a.r[1] = param_1;
            a.r[2] = r3 & 0xffu;
            (void)tc_call(0x8029fee8u, &a);
            wr32(r31 + 4u, 3u);
            a.r[0] = r31 + 0x10u;
            a.r[1] = 2u;
            a.r[2] = 0x3cu;
            (void)tc_call(0x8028d220u, &a);
        } else {
            r0 = rd32(r3 + 4u);
            if (r0 == 3u || r0 == 1u) {
                a.r[0] = r30;
                a.r[1] = param_1;
                a.r[2] = (u32)rd8(r3 + 0x30u);
                (void)tc_call(0x8029fee8u, &a);
                wr32(r31 + 4u, 3u);
            } else {
                if (r0 == 5u) {
                    a.r[0] = r30;
                    a.r[1] = param_1;
                    a.r[2] = 0x15u;
                    (void)tc_call(0x8029ff48u, &a);
                } else {
                    if ((u32)rd8(0x80540a20u) >= 1u) {
                        a.f[0] = f1;
                        a.f[1] = 0.0;
                        a.f[2] = 0.0;
                        a.f[3] = 0.0;
                        a.f[4] = 0.0;
                        a.f[5] = 0.0;
                        a.f[6] = 0.0;
                        a.f[7] = 0.0;
                        a.r[0] = 0x80000u;
                        a.r[1] = 0x80396598u;
                        a.r[2] = 0u;
                        a.r[3] = 0u;
                        a.r[4] = 0u;
                        a.r[5] = 0u;
                        a.r[6] = 0u;
                        a.r[7] = 0u;
                        (void)tc_call(0x8028cc54u, &a);
                    }
                    a.r[0] = r30;
                    (void)tc_call(0x8028a35cu, &a);
                }
            }
        }
    }
    return;
}

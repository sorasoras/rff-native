#include "tc_rt.h"

void fn_801e5c5c(void)
{
    u32 r3 = 0, r30 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    a.r[0] = rd32(0x805713b8u);
    r3 = tc_call(0x801e5f90u, &a);
    f1 = tc_lastf();
    if (r3 != 0u) {
        if (rd32(0x805713c0u) == 0u) {
            r30 = rd32(0x805713b8u);
            if (r30 == 0u) {
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                a.r[0] = 0x80375964u;
                a.r[1] = 0x233u;
                a.r[2] = 0x80375940u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                (void)tc_call(0x802e41c0u, &a);
            }
            wr32(0x817fdfe8u, 0x804dcb10u);
            a.r[0] = 0x804dcb0cu;
            a.r[1] = 0x817fdfe8u;
            a.r[2] = r30 + 0x18u;
            (void)tc_call(0x802deba4u, &a);
            wr32(0x805713b8u, 0u);
            return;
        }
        wr32(0x805713bcu, rd32(0x805713b8u));
    } else {
        r3 = rd32(0x805713b8u);
        if (r3 != 0u) {
            a.r[0] = r3;
            (void)tc_call(0x801e5f10u, &a);
        }
    }
    wr32(0x805713b8u, 0u);
    return;
}

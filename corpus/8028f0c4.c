#include "tc_rt.h"

u32 fn_8028f0c4(u32 param_1, u32 param_2, u32 param_3)
{
    u32 r3 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fded0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff0u, 0u);
    if (rd32(0x8053d644u) == 0u) {
        r3 = 0xbu;
    } else {
        if ((u32)rd8(param_3) == 0u) {
            a.r[0] = 0x8053d6ecu;
            a.r[1] = param_1;
            f1 = tc_callf(0x8028d2a4u, &a);
            wr8(0x8053d6f2u, rd8(param_2));
            wr8(0x8053d6f3u, rd8(param_2 + 1u));
            wr8(0x8053d6f4u, rd8(param_2 + 2u));
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = param_1;
            a.r[1] = 0x8028f004u;
            r3 = tc_call(0x8029790cu, &a);
            f1 = tc_lastf();
            if ((r3 & 0xffu) == 1u) {
                r3 = 1u;
                return r3;
            }
            if ((u32)rd8(0x80571b80u) >= 2u) {
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                a.r[0] = 0x501u;
                a.r[1] = 0x80392a18u;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                (void)tc_call(0x8028cc54u, &a);
            }
        }
        a.r[0] = 0x817fded8u;
        a.r[1] = param_1;
        (void)tc_call(0x8028d2a4u, &a);
        wr8(0x817fdfd6u, rd8(param_2));
        wr8(0x817fdfd7u, rd8(param_2 + 1u));
        wr8(0x817fdfd8u, rd8(param_2 + 2u));
        a.r[0] = 0x817fdedeu;
        a.r[1] = param_3;
        a.r[2] = 0x20u;
        f1 = tc_callf(0x8025bdf4u, &a);
        wr8(0x817fdefeu, 0u);
        a.r[0] = 2u;
        a.r[1] = 0x817fded8u;
        a.r[2] = 0u;
        a.f[0] = f1;
        (void)tc_call(rd32(0x8053d644u), &a);
        r3 = 1u;
    }
    return r3;
}

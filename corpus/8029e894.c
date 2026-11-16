#include "tc_rt.h"

u32 fn_8029e894(void)
{
    u32 r3 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdee0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdef0u, 0u);
    wr16(0x817fdee8u, 0x1002u);
    a.r[0] = 0x817fdef4u;
    a.r[1] = 0x817fdef0u;
    r3 = tc_call(0x802b24c0u, &a);
    f1 = tc_lastf();
    if ((r3 & 0xffffu) != 0u) {
        a.r[0] = 0x817fdef6u;
        a.r[1] = 0u;
        a.r[2] = 0xfau;
        f1 = tc_callf(0x8000443cu, &a);
        wr16(0x817fdef6u, 0xfu);
        wr16(0x817fdef8u, 1u);
        wr8(0x817fdefeu, 1u);
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = 0x817fdef6u;
        a.r[1] = 0x817fdef0u;
        a.r[7] = 0u;
        r3 = tc_call(0x802b2160u, &a);
        f1 = tc_lastf();
        if ((r3 & 0xffffu) != 0u) {
            wr32(0x817fdef0u, 0u);
            r3 = 0u;
            return r3;
        }
    }
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    a.r[0] = rd32(0x817fdef0u);
    a.r[1] = 5u;
    a.r[2] = 1u;
    a.r[3] = 0x817fdee8u;
    a.r[5] = 0u;
    a.r[6] = 0u;
    a.r[7] = 0u;
    f1 = tc_callf(0x802b31d0u, &a);
    wr8(0x817fdeecu, 0u);
    r3 = rd32(0x817fdef0u);
    wr8(0x817fdeedu, 1u);
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    a.r[0] = r3;
    a.r[1] = 0x8001u;
    a.r[2] = 1u;
    a.r[3] = 2u;
    a.r[4] = 0x817fdeecu;
    a.r[7] = 0u;
    (void)tc_call(0x802b2e38u, &a);
    r3 = 1u;
    return r3;
}

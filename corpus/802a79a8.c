#include "tc_rt.h"

void fn_802a79a8(u32 param_1, u32 param_2, u32 param_3)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    (void)param_2;
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr8(0x817fdfeeu, (u8)param_3);
    a.r[0] = 0x817fdfe8u;
    a.r[1] = param_1;
    a.r[2] = 6u;
    (void)tc_call(0x80004338u, &a);
    a.r[0] = param_1;
    r3 = tc_call(0x802a99acu, &a);
    f1 = tc_lastf();
    if (r3 == 0u) {
        if ((u32)rd8(0x80540a20u) < 2u) {
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
        a.r[0] = 0x80001u;
        a.r[1] = 0x8039661cu;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        (void)tc_call(0x8028cc54u, &a);
    } else {
        r3 = rd32(r3 + 8u);
        r31 = 0u - ((ppc_cntlzw(param_3) >> 5u) & 1u);
        while (r3 != 0u) {
            r30 = rd32(r3 + 8u);
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = r3;
            a.r[1] = (r31 + 8u) & 0xffu;
            a.r[2] = 0x817fdfe8u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            f1 = tc_callf(0x802a6140u, &a);
            r3 = r30;
        }
    }
    return;
}

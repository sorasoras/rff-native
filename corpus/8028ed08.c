#include "tc_rt.h"

void fn_8028ed08(s32 param_1)
{
    u32 r3 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdee0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    a.r[0] = 0x817fdee8u;
    a.r[1] = (u32)param_1 + 2u;
    (void)tc_call(0x8028d2a4u, &a);
    a.r[0] = 0x817fdeeeu;
    a.r[1] = (u32)param_1 + 8u;
    a.r[2] = 3u;
    f1 = tc_callf(0x80004338u, &a);
    wr8(0x817fdef1u, rd8((u32)param_1 + 0xeu));
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    a.r[0] = (u32)param_1 + 2u;
    r3 = tc_call(0x80297a6cu, &a);
    f1 = tc_lastf();
    r31 = r3;
    if (r3 != 0u) {
        wr8(0x817fdef2u, 0u);
    }
    a.r[0] = 0u;
    a.r[1] = 0x817fdee8u;
    a.r[2] = 0u;
    a.f[0] = f1;
    (void)tc_call(rd32(0x8053d578u), &a);
    if (r31 != 0u) {
        wr8(r31 + 0x10u, rd8(0x817fdef2u));
    }
    return;
}

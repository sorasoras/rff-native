#include "tc_rt.h"

u32 fn_802a7a5c(u32 param_1, s32 param_2)
{
    u32 r3 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    r30 = 1u;
    wr32(0x817fdff4u, 0u);
    wr8(0x817fdfe8u, (u8)param_2);
    a.r[0] = param_1;
    r3 = tc_call(0x802a9a34u, &a);
    f1 = tc_lastf();
    r31 = r3;
    if (r3 == 0u) {
        r30 = 0u;
    } else {
        if ((u32)rd8(0x80540117u) != 0xeu) {
            wr8(0x80540117u, rd8(0x817fdfe8u));
        }
        r3 = rd32(r3 + 8u);
        while (r3 != 0u) {
            r29 = rd32(r3 + 8u);
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = r3;
            a.r[1] = 3u;
            a.r[2] = 0x817fdfe8u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            f1 = tc_callf(0x802a6140u, &a);
            r3 = r29;
        }
        a.r[0] = r31 + 0x2au;
        (void)tc_call(0x8029a140u, &a);
        a.r[0] = r31;
        (void)tc_call(0x802a98acu, &a);
    }
    a.r[0] = 1u;
    r3 = tc_call(0x802ab524u, &a);
    if (r3 != 0u) {
        a.r[0] = r3;
        (void)tc_call(0x802ab33cu, &a);
    }
    return r30;
}

#include "tc_rt.h"

void fn_802e6a14(u32 param_1)
{
    u32 r3 = 0, r4 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff0u, 0u);
    if (rd32(param_1 + 0x28u) != 0u) {
        a.r[0] = param_1;
        a.r[1] = 0u;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.f[0] = 0.0;
        (void)tc_call(rd32(rd32(param_1) + 0x70u), &a);
        r29 = (u32)rd8(param_1 + 0xb9u);
        a.r[0] = param_1 + 0xd8u;
        a.r[1] = r29;
        r3 = tc_call(0x802ef6ecu, &a);
        f1 = tc_lastf();
        r4 = r3;
        r3 = rd32(param_1 + 0x28u);
        a.r[0] = r3;
        a.r[1] = r4;
        a.r[2] = r29;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.f[0] = f1;
        r3 = tc_call(rd32(rd32(r3) + 0xcu), &a);
        r29 = r3;
        a.r[0] = r3;
        a.r[1] = (u32)rd8(param_1 + 0xe9u);
        (void)tc_call(0x802ef7a8u, &a);
        if (r29 != 0u) {
            r30 = param_1 + 0xd8u;
        } else {
            r30 = 0u;
        }
        r29 = rd32(param_1 + 0xecu);
        r31 = (u32)rd8(param_1 + 0xe9u);
        a.r[0] = param_1;
        r3 = tc_call(0x802e5074u, &a);
        wr32(0x817fdfecu, tc_lastr4());
        wr32(0x817fdfe8u, r3);
        a.r[0] = 0x817fdfe8u;
        a.r[1] = param_1 + 0x4cu;
        a.r[2] = r31;
        a.r[3] = r29;
        a.r[4] = r30;
        a.r[5] = (u32)rd8(param_1 + 0xb9u);
        (void)tc_call(0x802efdecu, &a);
    }
    return;
}

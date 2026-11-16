#include "tc_rt.h"

void fn_8003874c(u32 param_1)
{
    u32 r3 = 0, r4 = 0, r5 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfb0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    a.r[0] = rd32(param_1 + 0x34u) + 8u;
    r3 = tc_call(0x80037b5cu, &a);
    f1 = tc_lastf();
    if (r3 == 0u) {
        r5 = rd32(param_1 + 0x34u);
        r4 = rd32(r5 + 4u);
        r5 = rd32(r5);
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = 0x817fdfb8u;
        a.r[1] = r4;
        a.r[2] = r5;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        (void)tc_call(0x800379a8u, &a);
        a.r[0] = rd32(param_1 + 0x34u) + 8u;
        a.r[1] = 0x817fdfb8u;
        r3 = tc_call(0x80037c14u, &a);
        if (r3 == 0u) {
            wr8(param_1 + rd32(rd32(param_1 + 0x34u)) + 8u, 0u);
        }
    }
    wr32(param_1, 0u);
    return;
}

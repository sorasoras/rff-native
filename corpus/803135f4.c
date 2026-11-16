#include "tc_rt.h"

void fn_803135f4(s32 param_1)
{
    u32 r3 = 0, r4 = 0, r29 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fcfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    if ((rd32((u32)param_1 + 0x20u) & 0x200u) == 0u) {
        a.r[0] = (u32)param_1 + 0xc0u;
        a.r[1] = 0x817fcfe8u;
        a.r[2] = (u32)rd16((u32)param_1 + 0xc8u);
        r3 = tc_call(0x803200acu, &a);
        f1 = tc_lastf();
        r4 = tc_lastr4();
        r31 = r3 & 0xffffu;
        r29 = 0u;
        while ((r29 & 0xffffu) < r31) {
            r3 = rd32(((r29 << 2u) & 0x3fffcu) - 0x7e803018u);
            a.r[0] = r3;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.f[0] = f1;
            f1 = tc_callf(rd32(rd32(r3 + 0x1cu) + 0x18u), &a);
            r4 = tc_lastr4();
            r29 = r29 + 1u;
        }
    }
    return;
}

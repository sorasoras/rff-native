#include "tc_rt.h"

void fn_802ee8b0(u32 param_1, u32 param_2, u32 param_3)
{
    u32 r3 = 0, r4 = 0, r6 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r6 = rd32(param_1 + 4u);
    r31 = 0u;
    r29 = 0u;
    r30 = r6 + rd32(r6 + 0x10u);
    for (;;) {
        r4 = rd32(param_1 + 4u);
        if ((r29 & 0xffffu) >= (u32)rd16(r4 + 0xeu)) break;
        r4 = r4 + rd32(r30 + ((r29 << 2u) & 0x3fffcu));
        if ((u32)rd8(r4 + 0x15u) != 0u) {
            a.r[0] = param_2;
            a.r[1] = r4;
            a.r[2] = param_3;
            a.r[3] = r6;
            a.f[0] = f1;
            r3 = tc_call(rd32(rd32(param_2) + 0x40u), &a);
            f1 = tc_lastf();
            r6 = 0u;
            if (r3 != 0u) {
                r31 = ((r31 & 0xffffu) + 1u) & 0xffffu;
            }
        } else {
            a.r[0] = param_2;
            a.r[1] = r4;
            a.r[2] = param_3;
            a.r[3] = r6;
            a.f[0] = f1;
            r3 = tc_call(rd32(rd32(param_2) + 0x3cu), &a);
            f1 = tc_lastf();
            r6 = 0u;
            if (r3 != 0u) {
                r31 = r31 + 1u;
            }
        }
        r29 = r29 + 1u;
    }
    return;
}

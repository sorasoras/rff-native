#include "tc_rt.h"

void fn_802cab3c(u32 param_1, u32 param_2, u32 param_3)
{
    u32 r3 = 0, r4 = 0, r5 = 0, r6 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r6 = rd32(param_1 + 0xcu);
    r30 = 0u;
    r31 = r6 + rd32(r6 + 0x10u);
    for (;;) {
        r4 = rd32(param_1 + 0xcu);
        if ((r30 & 0xffffu) >= (u32)rd16(r4 + 0xeu)) break;
        r4 = r4 + rd32(r31 + ((r30 << 2u) & 0x3fffcu));
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
                r5 = (r30 << 4u) & 0xffff0u;
                r4 = rd32(param_1 + 0x18u) + r5;
                wr32(r4 + 8u, param_1);
                wr16(r4 + 0xcu, (u16)r30);
                a.r[0] = r3;
                a.r[1] = rd32(param_1 + 0x18u) + r5;
                f1 = tc_callf(0x802d0840u, &a);
                r6 = 0u;
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
                r5 = (r30 << 4u) & 0xffff0u;
                r4 = rd32(param_1 + 0x18u) + r5;
                wr32(r4 + 8u, param_1);
                wr16(r4 + 0xcu, (u16)r30);
                a.r[0] = r3;
                a.r[1] = rd32(param_1 + 0x18u) + r5;
                f1 = tc_callf(0x802d15c8u, &a);
                r6 = 0u;
            }
        }
        r30 = r30 + 1u;
    }
    return;
}

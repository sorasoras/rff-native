#include "tc_rt.h"

void fn_802e7b00(u32 param_1, s32 param_2)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r31 = 0;
    TcArgs a = {0};
    if ((u32)param_2 != 0u) {
        r4 = (u32)param_2 + 1u;
        r31 = (r4 << 1u) & 0xfffffffeu;
        if (r31 > (u32)rd16(param_1 + 0xfcu)) {
            a.r[0] = param_1;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.f[0] = 0.0;
            (void)tc_call(rd32(rd32(param_1) + 0x78u), &a);
            a.r[0] = rd32(0x80571d40u);
            r3 = tc_call(0x8026d490u, &a);
            if (r3 == 0u) {
                r3 = 0u;
            } else {
                r0 = (u32)param_2 + 1u;
                r5 = r3;
                ctr = r0;
                if (r0 > 0u) {
                    do {
                        if (r5 != 0u) {
                            wr16(r5, 0u);
                        }
                        r5 = r5 + 2u;
                        ctr = ctr - 1u;
                    } while (ctr != 0u);
                }
            }
            wr32(param_1 + 0xd8u, r3);
            if (r3 != 0u) {
                wr16(param_1 + 0xfcu, (u16)r31);
            }
        }
    }
    return;
}

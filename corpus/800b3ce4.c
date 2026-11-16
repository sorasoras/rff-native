#include "tc_rt.h"

void fn_800b3ce4(u32 param_1)
{
    u32 r3 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    if (rd32(param_1 + 0xda4u) == 0u) {
        if ((s32)rd32(param_1 + 0xed4u) <= 0) {
            a.r[0] = param_1;
            a.r[1] = rd32(param_1 + 0xed0u);
            (void)tc_call(0x800b31dcu, &a);
        } else {
            a.r[0] = param_1;
            a.r[1] = 0u;
            a.r[2] = 0u;
            a.f[0] = 0.0;
            r3 = tc_call(rd32(rd32(param_1) + 0x138u), &a);
            if (r3 == 0u) {
                a.r[0] = param_1;
                r3 = tc_call(0x800b1b00u, &a);
                r31 = r3;
            } else {
                do {
                    a.r[0] = param_1;
                    r3 = tc_call(0x800b1b00u, &a);
                    r31 = r3;
                    a.r[0] = 0x805711d4u;
                    a.r[1] = param_1;
                    a.r[2] = r3;
                    r3 = tc_call(0x8016d738u, &a);
                    f1 = tc_lastf();
                    a.r[0] = r3;
                    a.r[1] = tc_lastr4();
                    a.r[2] = 0u;
                    a.f[0] = f1;
                    r3 = tc_call(rd32(rd32(r3) + 0x28u), &a);
                    if (r3 != 0u) break;
                    r31 = 0xffffffffu;
                } while ((s32)rd32(param_1 + 0xed4u) > 0);
            }
            if (r31 != 0xffffffffu) {
                a.r[0] = param_1;
                a.r[1] = r31;
                (void)tc_call(0x800b31dcu, &a);
            }
        }
    }
    return;
}

#include "tc_rt.h"

void fn_802e542c(u32 param_r3, u32 param_r4)
{
    u32 r29 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    if (param_r3 != 0u) {
        r31 = rd32(param_r3 + 4u);
        r30 = param_r3 + 4u;
        while (r31 != r30) {
            r29 = r31;
            r31 = rd32(r31);
            wr32(0x817fdfd8u, r29);
            a.r[0] = param_r3;
            a.r[1] = 0x817fdfd8u;
            f1 = tc_callf(0x802deab0u, &a);
            if ((u32)rd8(r29 + 0x25u) == 0u) {
                r29 = r29 - 4u;
                if (r29 != 0u) {
                    a.r[0] = r29;
                    a.r[1] = 0xffffffffu;
                    a.f[0] = f1;
                    (void)tc_call(rd32(rd32(r29) + 8u), &a);
                    a.r[0] = rd32(0x80571d40u);
                    (void)tc_call(0x8026d4a0u, &a);
                }
            }
        }
        if (param_r3 != 0u) {
            a.r[0] = param_r3;
            a.r[1] = 0u;
            (void)tc_call(0x802dea2cu, &a);
        }
        if ((s32)param_r4 > 0) {
            (void)tc_call(0x80040cd4u, &a);
        }
    }
    return;
}

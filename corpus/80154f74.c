#include "tc_rt.h"

void fn_80154f74(u32 param_1, u32 param_2, s32 param_3, u32 param_4)
{
    u32 r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r4 = param_2;
    r5 = (u32)param_3;
    r6 = param_4;
    wr32(0x817fdfd0u, 0x817fe000u);
    r7 = 0x80470000u;
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    r31 = rd32(param_2 + 0x1bcu);
    r30 = rd32(0x8046ad74u);
    wr32(0x817fdfd8u, param_2);
    wr32(0x817fdfdcu, param_4);
    while (r30 != 0u) {
        r3 = r30;
        r30 = rd32(r30);
        r29 = rd32(r3 + 8u);
        if (r29 != param_2) {
            a.r[0] = r29;
            a.r[1] = r4;
            a.r[2] = r5;
            a.r[3] = r6;
            a.r[4] = r7;
            a.f[0] = f1;
            r3 = tc_call(rd32(rd32(r29) + 0x13cu), &a);
            f1 = tc_lastf();
            r4 = tc_lastr4();
            r5 = 0u;
            r6 = 0u;
            r7 = 0u;
            if (r3 != 0u && ((u32)param_3 == 0u || ((u32)param_3 == 1u && r31 == rd32(r29 + 0x1bcu)))) {
                a.r[0] = param_1;
                a.r[1] = r29;
                a.r[2] = 0x817fdfd8u;
                f1 = tc_callf(0x80154f5cu, &a);
                r4 = tc_lastr4();
                r5 = 0u;
                r6 = 0u;
                r7 = 0u;
            }
        }
    }
    return;
}

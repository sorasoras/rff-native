#include "tc_rt.h"

void fn_801a2454(u32 param_1)
{
    u32 r3 = 0, r4 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = 0u;
    (void)tc_call(0x801a3958u, &a);
    a.r[0] = param_1;
    a.r[1] = 8u;
    (void)tc_call(0x801a3958u, &a);
    a.r[0] = param_1;
    f1 = tc_callf(0x8007f7e4u, &a);
    a.r[0] = param_1;
    a.r[1] = 0u;
    a.r[2] = 1u;
    a.r[3] = 9u;
    a.r[4] = 1u;
    a.f[0] = f1;
    f1 = tc_callf(rd32(rd32(param_1) + 0x18cu), &a);
    r4 = 0u;
    wr32(param_1 + 0xdf8u, 0u);
    wr32(param_1 + 0xce4u, 2u);
    wr32(param_1 + 0xcfcu, 0u);
    r31 = rd32(0x8046ad74u);
    while (r31 != 0u) {
        r3 = r31;
        r31 = rd32(r31);
        r30 = rd32(r3 + 8u);
        if ((u32)((s32)rd32(r30 + 0x9cu) >> 31) != 0u && r30 != param_1) {
            a.r[0] = r30;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.f[0] = f1;
            r3 = tc_call(rd32(rd32(r30) + 0x140u), &a);
            f1 = tc_lastf();
            r4 = tc_lastr4();
            if (r3 == 0u) {
                a.r[0] = r30;
                a.r[1] = 0u;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.f[0] = f1;
                f1 = tc_callf(rd32(rd32(r30) + 0x174u), &a);
                r4 = tc_lastr4();
            }
        }
    }
    return;
}

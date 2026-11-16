#include "tc_rt.h"

void fn_802354dc(s32 param_1)
{
    u32 r3 = 0, r12 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r3 = tc_call(0x8023a81cu, &a);
    f1 = tc_lastf();
    if (r3 != 0u) {
        a.r[0] = 0x804e5b90u;
        (void)tc_call(0x8022671cu, &a);
        a.r[0] = 0x804e5b90u;
        a.r[1] = tc_lastr4();
        a.r[2] = 0u;
        a.r[3] = 1u;
        a.r[4] = 0x802354d8u;
        (void)tc_call(0x8022697cu, &a);
    } else {
        wr32(rd32(0x80571650u) + 0xcu, 0xffffffffu);
        if ((u32)param_1 == 0x10u) {
            a.r[0] = 0x1234568u;
            a.r[1] = 0x80235600u;
            (void)tc_call(0x8023a598u, &a);
        } else {
            if ((u32)param_1 == 0x20u) {
                a.r[0] = 0x1234569u;
                a.r[1] = 0x80235600u;
                (void)tc_call(0x8023a598u, &a);
            } else {
                r31 = rd32(0x80571650u);
                wr32(0x805715ccu, 1u);
                wr32(0x80571650u, 0x804e5b60u);
                r12 = rd32(r31 + 0x28u);
                if (r12 != 0u) {
                    a.r[0] = 0xffffffffu;
                    a.r[1] = r31;
                    a.r[2] = 0u;
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.f[0] = f1;
                    f1 = tc_callf(r12, &a);
                }
                if (rd32(0x805715d0u) != 0u) {
                    r12 = rd32(0x80571640u);
                    wr32(0x805715d0u, 0u);
                    if (r12 != 0u) {
                        a.r[0] = 0u;
                        a.r[1] = r31;
                        a.r[2] = 0u;
                        a.r[3] = 0u;
                        a.r[4] = 0u;
                        a.f[0] = f1;
                        (void)tc_call(r12, &a);
                    }
                }
                (void)tc_call(0x80237c80u, &a);
            }
        }
    }
    return;
}

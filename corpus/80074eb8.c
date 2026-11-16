#include "tc_rt.h"

void fn_80074eb8(void)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r31 = rd32(0x8046b7e4u);
    while (r31 != 0u) {
        r3 = r31;
        r31 = rd32(r31);
        r30 = rd32(r3 + 8u);
        if ((u32)((s32)rd32(r30 + 0x9cu) >> 31) != 0u) {
            a.r[0] = r30;
            a.r[1] = rd32(r30 + 0x100u);
            a.r[2] = 1u;
            a.r[3] = 1u;
            a.f[0] = (f64)rdf32(0x8057272cu);
            f1 = tc_callf(rd32(rd32(r30) + 0x54u), &a);
            a.r[0] = r30;
            a.r[1] = tc_lastr4();
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.f[0] = f1;
            f1 = tc_callf(rd32(rd32(r30) + 0xcu), &a);
            a.r[0] = r30;
            a.r[1] = tc_lastr4();
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.f[0] = f1;
            (void)tc_call(rd32(rd32(r30) + 0x10u), &a);
        }
    }
    r30 = rd32(0x8046ad74u);
    while (r30 != 0u) {
        r3 = r30;
        r30 = rd32(r30);
        r31 = rd32(r3 + 8u);
        if ((u32)((s32)rd32(r31 + 0x9cu) >> 31) != 0u) {
            a.r[0] = r31;
            a.r[1] = rd32(r31 + 0x100u);
            a.r[2] = 1u;
            a.r[3] = 1u;
            a.f[0] = (f64)rdf32(0x8057272cu);
            f1 = tc_callf(rd32(rd32(r31) + 0x54u), &a);
            a.r[0] = r31;
            a.r[1] = tc_lastr4();
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.f[0] = f1;
            f1 = tc_callf(rd32(rd32(r31) + 0xcu), &a);
            a.r[0] = r31;
            a.r[1] = tc_lastr4();
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.f[0] = f1;
            (void)tc_call(rd32(rd32(r31) + 0x10u), &a);
        }
    }
    return;
}

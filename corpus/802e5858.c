#include "tc_rt.h"

void fn_802e5858(u32 param_r3, u32 param_r4)
{
    u32 c1eq = 0, r3 = 0, r29 = 0, r30 = 0, r31 = 0;
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
        r29 = rd32(param_r3 + 0x14u);
        wr32(param_r3, 0x8039cd10u);
        if (r29 != 0u) {
            a.r[0] = r29;
            a.r[1] = 0xffffffffu;
            (void)tc_call(0x802e542cu, &a);
            a.r[0] = rd32(0x80571d40u);
            f1 = tc_callf(0x8026d4a0u, &a);
        }
        r29 = rd32(param_r3 + 0x10u);
        c1eq = r29 == 0u;
        if ((!c1eq && (u32)rd8(r29 + 0xd6u) == 0u) && !c1eq) {
            a.r[0] = r29;
            a.r[1] = 0xffffffffu;
            a.f[0] = f1;
            (void)tc_call(rd32(rd32(r29) + 8u), &a);
            a.r[0] = rd32(0x80571d40u);
            (void)tc_call(0x8026d4a0u, &a);
        }
        r31 = rd32(param_r3 + 8u);
        r30 = param_r3 + 8u;
        while (r31 != r30) {
            r29 = r31;
            r31 = rd32(r31);
            wr32(0x817fdfd8u, r29);
            a.r[0] = param_r3 + 4u;
            a.r[1] = 0x817fdfd8u;
            f1 = tc_callf(0x802deab0u, &a);
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
        r3 = param_r3 + 4u;
        if (r3 != 0u) {
            a.r[0] = r3;
            a.r[1] = 0u;
            (void)tc_call(0x802dea2cu, &a);
        }
        if ((s32)param_r4 > 0) {
            (void)tc_call(0x80040cd4u, &a);
        }
    }
    return;
}

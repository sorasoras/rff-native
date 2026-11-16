#include "tc_rt.h"

void fn_802ca560(s32 param_1, u32 param_2, s32 param_3, s32 param_4)
{
    u32 c0lt = 0, r3 = 0, r5 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r3 = rd32((u32)param_1 + 4u);
    a.r[0] = r3;
    a.r[1] = param_2;
    a.r[2] = (u32)param_3;
    a.r[3] = (u32)param_4;
    a.f[0] = 0.0;
    r3 = tc_call(rd32(rd32(r3) + 0x28u), &a);
    f1 = tc_lastf();
    a.r[0] = r3;
    a.r[1] = tc_lastr4();
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.f[0] = f1;
    r3 = tc_call(rd32(rd32(r3) + 0x64u), &a);
    c0lt = param_3 < 1;
    r5 = rd32((u32)param_1 + 8u);
    if ((u32)param_3 == 1u) {
        a.r[0] = r5;
        a.r[1] = r3;
        a.r[2] = (u32)param_4;
        (void)tc_call(0x802c75e4u, &a);
    } else if (!c0lt) {
        if (param_3 < 3) {
            a.r[0] = r5;
            a.r[1] = r3;
            (void)tc_call(0x802c8414u, &a);
        }
    } else if (param_3 >= 0 && (rd32((u32)param_4 + 0x10u) & 0x800u) != 0u) {
        a.r[0] = r5;
        a.r[1] = r3;
        (void)tc_call(0x802c8ed4u, &a);
    }
    return;
}

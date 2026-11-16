#include "tc_rt.h"

void fn_801cca84(u32 param_1, s32 param_2, u32 param_3)
{
    u32 r5 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    r5 = param_3;
    f0 = (f64)rdf32(0x80575ea8u);
    wr32(param_1 + 0x9cu, rd32(param_1 + 0x9cu) | 0x2000000u);
    wrf32d((u32)param_2 + 4u, f0);
    if (rd32(param_1 + 0x270u) == 4u) {
        wr32(param_1 + 0x9cu, rd32(param_1 + 0x9cu) | 0x2000000u);
        a.r[0] = param_1;
        a.r[1] = (u32)param_2;
        a.r[2] = param_3;
        a.f[0] = 0.0;
        f1 = tc_callf(rd32(rd32(param_1) + 0x2cu), &a);
        r5 = 0u;
        wrf32d(param_3, (f64)(f32)((f64)rdf32(param_1 + 0xd14u) + f1));
        wrf32d((u32)param_2 + 4u, (f64)rdf32(param_1 + 0xdc0u));
    }
    a.r[0] = param_1;
    a.r[1] = (u32)param_2;
    a.r[2] = r5;
    a.f[0] = f1;
    (void)tc_call(rd32(rd32(param_1) + 0x1cu), &a);
    a.r[0] = param_1;
    a.r[1] = tc_lastr4();
    a.r[2] = 0u;
    a.f[0] = (f64)rdf32(param_3);
    (void)tc_call(rd32(rd32(param_1) + 0x24u), &a);
    return;
}

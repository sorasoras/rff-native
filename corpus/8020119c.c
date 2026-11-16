#include "tc_rt.h"

void fn_8020119c(s32 param_1)
{
    u32 r3 = 0, r4 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = rd32((u32)param_1 + 0x90u);
    r3 = tc_call(0x800f93bcu, &a);
    wr32((u32)param_1 + 0x38u, r3);
    a.r[0] = r3;
    a.r[1] = rd32(rd32((u32)param_1 + 0x3cu) + 0x30u);
    (void)tc_call(0x80103564u, &a);
    a.r[0] = (u32)param_1 + 0x40u;
    a.r[1] = rd32((u32)param_1 + 0x38u);
    (void)tc_call(0x801f0e3cu, &a);
    a.r[0] = 0x80571250u;
    a.r[1] = rd32((u32)param_1 + 0x38u);
    a.r[2] = 0x8033c52fu;
    r3 = tc_call(0x80103258u, &a);
    r30 = r3;
    a.r[0] = 0x200u;
    r3 = tc_call(0x8018925cu, &a);
    f1 = tc_lastf();
    r4 = tc_lastr4();
    r31 = r3;
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = r30;
        f1 = tc_callf(0x80201698u, &a);
        r4 = tc_lastr4();
    }
    wr32((u32)param_1 + 0x2cu, r31);
    a.r[0] = r31;
    a.r[1] = r4;
    a.r[2] = 0u;
    a.f[0] = f1;
    (void)tc_call(rd32(rd32(r31 + 0x28u) + 0x14u), &a);
    a.r[0] = 0x80571250u;
    a.r[1] = rd32((u32)param_1 + 0x38u);
    a.r[2] = 0x8033c539u;
    r3 = tc_call(0x80103258u, &a);
    r30 = r3;
    a.r[0] = 0x200u;
    r3 = tc_call(0x8018925cu, &a);
    f1 = tc_lastf();
    r4 = tc_lastr4();
    r31 = r3;
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = r30;
        f1 = tc_callf(0x802025f0u, &a);
        r4 = tc_lastr4();
    }
    wr32((u32)param_1 + 0x30u, r31);
    a.r[0] = r31;
    a.r[1] = r4;
    a.r[2] = 0u;
    a.f[0] = f1;
    (void)tc_call(rd32(rd32(r31 + 0x28u) + 0x14u), &a);
    wr32((u32)param_1 + 0x34u, 0u);
    wr32((u32)param_1 + 0x94u, 1u);
    return;
}

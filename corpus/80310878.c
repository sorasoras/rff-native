#include "tc_rt.h"

void fn_80310878(u32 param_1, u32 param_2, u32 param_3, s32 param_4)
{
    u32 r3 = 0, r30 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    wr32(param_1 + 0x10u, 0u);
    wr32(param_1 + 0xcu, 1u);
    wr32(param_1 + 0x24u, 0u);
    wr16(param_1 + 0x2cu, 0u);
    wr32(param_1 + 0x28u, 0u);
    wr32(param_1 + 0x30u, 0u);
    wr16(param_1 + 0x38u, 0u);
    wr32(param_1 + 0x34u, 0u);
    wr16(param_1 + 0x3cu, 0u);
    wr32(param_1 + 0x9cu, rd32(param_2 + 4u));
    a.r[0] = param_1 + 0x54u;
    f1 = tc_callf(0x80233740u, &a);
    f0 = (f64)rdf32(0x80577868u);
    wr32(param_1 + 0x20u, param_2);
    wr32(param_1 + 0x44u, 0u);
    wr32(param_1 + 0x48u, 0u);
    wr32(param_1 + 0x4cu, 0u);
    wr32(param_1 + 0x50u, 0u);
    wrf32d(param_1 + 0x84u, f0);
    wrf32d(param_1 + 0x88u, f0);
    wrf32d(param_1 + 0x8cu, f0);
    r3 = rd32(param_2);
    a.r[0] = r3;
    a.r[1] = tc_lastr4();
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.f[0] = f1;
    r3 = tc_call(rd32(rd32(r3) + 0x24u), &a);
    f1 = tc_lastf();
    r30 = r3;
    if (r3 == 0u) {
        return;
    }
    a.r[0] = r3;
    a.r[1] = param_1;
    a.r[2] = param_3;
    a.r[3] = 0x80u;
    a.f[0] = f1;
    r3 = tc_call(rd32(rd32(r3 + 0x1cu) + 0x10u), &a);
    f1 = tc_lastf();
    if (r3 == 0u) {
        r3 = rd32(param_2);
        a.r[0] = r3;
        a.r[1] = r30;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.f[0] = f1;
        (void)tc_call(rd32(rd32(r3) + 0x28u), &a);
    } else {
        a.r[0] = param_1 + 0x24u;
        a.r[1] = r30;
        (void)tc_call(0x802de7f4u, &a);
        wr16(param_1 + 0x3cu, (u16)((u32)rd16(param_1 + 0x3cu) + 1u));
        wr32(r30 + 0xcu, 1u);
        wr16(r30 + 0xe8u, (u16)((u32)rd16(r30 + 0xe8u) + (u32)param_4));
    }
    return;
}

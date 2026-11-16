#include "tc_rt.h"

void fn_801ffb74(s32 param_1)
{
    u32 r3 = 0, r4 = 0, r30 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r4 = rd32((u32)param_1 + 0x1cu);
    r30 = r4 + 0x44u;
    r4 = rd32(r4 + 0x430u);
    a.r[0] = r30;
    a.r[1] = r4;
    a.r[2] = 0u;
    (void)tc_call(0x80119fb0u, &a);
    wr32(r30 + 0x3e8u, 0u);
    r3 = rd32((u32)param_1 + 0x1cu);
    r30 = r3 + 0x44u;
    a.r[0] = r30;
    a.r[1] = 0u;
    a.r[2] = rd32(r3 + 0x42cu);
    (void)tc_call(0x80119fb0u, &a);
    wr32(r30 + 0x3ecu, 0u);
    (void)tc_call(0x800f95b4u, &a);
    r3 = rd32((u32)param_1 + 0x68u);
    if (r3 != 0u) {
        a.r[0] = r3;
        (void)tc_call(0x80200d38u, &a);
    }
    a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x44cu;
    a.r[1] = (u32)rd16(0x80499240u);
    f1 = tc_callf(0x8014b838u, &a);
    r4 = tc_lastr4();
    r3 = rd32((u32)param_1 + 0x68u);
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = r4;
        a.r[2] = 0u;
        a.f[0] = f1;
        (void)tc_call(rd32(rd32(r3 + 0x28u) + 0x18u), &a);
    }
    r3 = rd32((u32)param_1 + 0x28u);
    if (r3 != 0u) {
        a.r[0] = r3;
        (void)tc_call(0x802013e8u, &a);
    }
    return;
}

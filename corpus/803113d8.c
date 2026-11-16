#include "tc_rt.h"

void fn_803113d8(u32 param_1, u32 param_2, u32 param_3, s32 param_4)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r30 = rd32(param_2);
    if ((rd32(r30 + 8u) & 0x40000000u) == 0u) {
        return;
    }
    r3 = rd32(rd32(param_1 + 0x20u));
    a.r[0] = r3;
    a.r[1] = param_2;
    a.r[2] = param_3;
    a.r[3] = (u32)param_4;
    a.f[0] = 0.0;
    r3 = tc_call(rd32(rd32(r3) + 0x24u), &a);
    f1 = tc_lastf();
    r31 = r3;
    if (r3 == 0u) {
        return;
    }
    a.r[0] = r3;
    a.r[1] = param_1;
    a.r[2] = r30;
    a.r[3] = param_3;
    a.f[0] = f1;
    r3 = tc_call(rd32(rd32(r3 + 0x1cu) + 0x10u), &a);
    f1 = tc_lastf();
    if (r3 == 0u) {
        r3 = rd32(rd32(param_1 + 0x20u));
        a.r[0] = r3;
        a.r[1] = r31;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.f[0] = f1;
        (void)tc_call(rd32(rd32(r3) + 0x28u), &a);
    } else {
        a.r[0] = param_1 + 0x24u;
        a.r[1] = r31;
        (void)tc_call(0x802de7f4u, &a);
        wr16(param_1 + 0x3cu, (u16)((u32)rd16(param_1 + 0x3cu) + 1u));
        wr32(r31 + 0xcu, 1u);
        wr16(r31 + 0xe8u, (u16)((u32)rd16(r31 + 0xe8u) + (u32)param_4));
    }
    return;
}

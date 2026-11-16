#include "tc_rt.h"

void fn_80311714(u32 param_1, u32 param_2, s32 param_3, u32 param_4)
{
    u32 r3 = 0, r5 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    if (param_2 == 0u) {
        return;
    }
    if ((rd32(param_2 + 8u) & 0x40000000u) == 0u) {
        return;
    }
    r3 = rd32(param_1);
    a.r[0] = r3;
    a.r[1] = param_2;
    a.r[2] = (u32)param_3;
    a.r[3] = param_4;
    a.f[0] = 0.0;
    r3 = tc_call(rd32(rd32(r3) + 0x10u), &a);
    f1 = tc_lastf();
    r29 = r3;
    if (r3 == 0u) {
        return;
    }
    a.r[0] = r3;
    a.r[1] = param_1;
    a.r[2] = param_2;
    a.r[3] = param_4;
    a.f[0] = f1;
    r3 = tc_call(rd32(rd32(r3 + 0x1cu) + 0x10u), &a);
    f1 = tc_lastf();
    if (r3 == 0u) {
        r3 = rd32(param_1);
        a.r[0] = r3;
        a.r[1] = r29;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.f[0] = f1;
        (void)tc_call(rd32(rd32(r3) + 0x14u), &a);
    } else {
        wr32(r29 + 0x40u, (u32)param_3);
        r30 = (u32)param_3 * 0x1cu;
        r31 = rd32(param_1 + 0xc018u) + r30;
        a.r[0] = r31;
        a.r[1] = r29;
        (void)tc_call(0x802de7f4u, &a);
        wr16(r31 + 0x18u, (u16)((u32)rd16(r31 + 0x18u) + 1u));
        wr32(r29 + 0xcu, 1u);
        r5 = rd32(param_1 + 0xc018u) + r30;
        wr16(r5 + 0x18u, (u16)((u32)rd16(r5 + 0x18u) - 1u));
        wr32(r29 + 0xcu, 2u);
    }
    return;
}

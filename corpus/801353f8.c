#include "tc_rt.h"

void fn_801353f8(s32 param_1)
{
    u32 r3 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x838u;
    a.r[1] = 0xdu;
    (void)tc_call(0x8020f18cu, &a);
    r31 = rd32((u32)param_1 + 0x1cu);
    a.r[0] = r31;
    r3 = tc_call(0x80132d54u, &a);
    f1 = tc_lastf();
    a.r[0] = r3;
    a.r[1] = r31 + 0x48u;
    a.r[2] = 0u;
    a.f[0] = f1;
    (void)tc_call(rd32(rd32(r3 + 0x28u) + 0xcu), &a);
    return;
}

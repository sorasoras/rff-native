#include "tc_rt.h"

u32 fn_8014b59c(s32 param_1)
{
    u32 r3 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r31 = rd32((u32)param_1 + 0x1cu);
    a.r[0] = r31;
    r3 = tc_call(0x8014b47cu, &a);
    a.r[0] = r31;
    a.r[1] = r3;
    a.r[2] = 0u;
    r3 = tc_call(0x8014b51cu, &a);
    if (r3 != 0u) {
        r31 = rd32((u32)param_1 + 0x1cu);
        a.r[0] = r31;
        r3 = tc_call(0x8014b47cu, &a);
        f1 = tc_lastf();
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = r31;
        a.r[1] = r3;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        (void)tc_call(0x8014b4f4u, &a);
        a.r[0] = rd32((u32)param_1 + 0x1cu);
        a.r[1] = 1u;
        (void)tc_call(0x8014b48cu, &a);
    }
    return 1u;
}

#include "tc_rt.h"

u32 fn_8012e1e0(s32 param_1)
{
    u32 r3 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = rd32((u32)param_1 + 0x1cu);
    a.r[1] = 0u;
    r3 = tc_call(0x8012c2acu, &a);
    if (r3 != 0u) {
        a.r[0] = rd32((u32)param_1 + 0x1cu);
        a.r[1] = 0u;
        a.r[2] = 0u;
        (void)tc_call(0x8012c270u, &a);
        a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x5cu;
        a.r[1] = 1u;
        (void)tc_call(0x800f8544u, &a);
        r3 = rd32((u32)param_1 + 0x1cu);
        r31 = r3 + 0x98u;
        r3 = rd32(r3 + 0x58u);
        a.r[0] = r3;
        a.r[1] = r31;
        r3 = tc_call(0x8012d718u, &a);
        a.r[0] = r31;
        a.r[1] = r3;
        f1 = tc_callf(0x80119ffcu, &a);
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x98u;
        a.r[1] = 1u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        (void)tc_call(0x80119edcu, &a);
    }
    return 1u;
}

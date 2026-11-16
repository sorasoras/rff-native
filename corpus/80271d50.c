#include "tc_rt.h"

u32 fn_80271d50(u32 param_1, u32 param_2, s32 param_3)
{
    u32 r3 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r3 = tc_call(0x802721a4u, &a);
    if (r3 == 0u) {
        r3 = 0xffffff80u;
    } else {
        if ((u32)rd8(param_1 + 0x8au) != 1u) {
            r3 = 0xfffffff8u;
        } else {
            wr32((u32)param_3 + 4u, param_2);
            wr32((u32)param_3 + 8u, param_1);
            a.r[0] = rd32(param_1);
            a.r[1] = 0x80271dd8u;
            a.r[2] = (u32)param_3;
            r3 = tc_call(0x8026eb68u, &a);
            f1 = tc_lastf();
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = r3;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            r3 = tc_call(0x802721bcu, &a);
        }
    }
    return r3;
}

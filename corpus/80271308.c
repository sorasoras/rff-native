#include "tc_rt.h"

void fn_80271308(u32 param_1, u32 param_2, s32 param_3, u32 param_4, s32 param_5)
{
    u32 c0lt = 0, r3 = 0, r5 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r3 = tc_call(0x802721a4u, &a);
    if (r3 != 0u) {
        wr32((u32)param_5 + 4u, param_4);
        c0lt = param_3 < 1;
        r5 = 0xffffffffu;
        r3 = rd32(param_1);
        if ((u32)param_3 == 1u) {
            r5 = 1u;
        } else if (!c0lt) {
            if (param_3 < 3) {
                r5 = 2u;
            }
        } else if (param_3 >= 0) {
            r5 = 0u;
        }
        a.r[0] = r3;
        a.r[1] = param_2;
        a.r[2] = r5;
        a.r[3] = 0x80272990u;
        a.r[4] = (u32)param_5;
        r3 = tc_call(0x8026e950u, &a);
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
        (void)tc_call(0x802721bcu, &a);
    }
    return;
}
